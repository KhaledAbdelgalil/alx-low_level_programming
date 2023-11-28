#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * check_elf - Checks if a file is an ELF file.
 * @e: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e[index] != 127 &&
			e[index] != 'E' &&
			e[index] != 'L' &&
			e[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_elf_header_info - Prints various information from the ELF header.
 * @e: A pointer to an array containing the ELF identification bytes.
 *
 * Description: Prints magic numbers, class, and data format of the ELF header.
 * Magic numbers are separated by spaces. Class and data format are identified
 * based on the values in the ELF identification array.
 */
void print_elf_header_info(unsigned char *e)
{
	int index;

	printf("  Magic:   ");
	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e[index]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
	printf("  Class:                             ");
	switch (e[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e[EI_CLASS]);
	} printf("  Data:                              ");
	switch (e[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e[EI_CLASS]);
	}
}

/**
 * print_more_info - Prints version,
 * OS/ABI, and ABI version of an ELF header.
 * @e: A pointer to an array containing the ELF identification bytes.
 */
void print_more_info(unsigned char *e)
{
	printf("  Version:                           %d", e[EI_VERSION]);
	switch (e[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
	printf("  OS/ABI:                            ");
	if (e[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (e[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (e[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (e[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (e[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (e[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (e[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (e[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (e[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (e[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", e[EI_OSABI]);
	printf("  ABI Version:                       %d\n", e[EI_ABIVERSION]);
}
/**
 * print_type_and_entry - Prints the type and entry point of an ELF header.
 * @e_type: The ELF type.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF identification bytes.
 */
void print_type_and_entry(unsigned int e_type,
		unsigned long int e_entry, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("  Type:                              ");
	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
	printf("  Entry point address:               ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
	e_entry = ((e_entry << 8) & 0xFF00FF00) |
		((e_entry >> 8) & 0xFF00FF);
	e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}
/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, otherwise exit
 *
 */
int main(int  argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o = open(argv[1], O_RDONLY), r;

	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr)), (void)argc;
	if (header == NULL)
	{
		if (close(o) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
			exit(98);
		}
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		if (close(o) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
			exit(98);
		}
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	check_elf(header->e_ident), printf("ELF Header:\n");
	print_elf_header_info(header->e_ident), print_more_info(header->e_ident);
	print_type_and_entry(header->e_type, header->e_entry, header->e_ident);
	free(header);
	if (close(o) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
		exit(98);
	} return (0);
}
