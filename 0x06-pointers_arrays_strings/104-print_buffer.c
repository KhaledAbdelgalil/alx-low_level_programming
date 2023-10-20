/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */
void print_buffer(char *b, int size)
{
	int i, j, k;
  	if (size <= 0)
  	{
		printf("\n");
		return;
	}
	for(i = 0; i < size; i = i + 10)
	{
		printf("%.8x:", i);
		j = 0;
		while(j < i + 10)
		{
				if (j % 2 == 0)
					printf(" ");
				if (j < size)
					printf("%.2x", b[j]);
				else
					printf("  ");
				j++;
		}
		printf(" ");
		k = i;
		while (k < i + 10)
		{
				if (k >= size)
					break;
				if (b[k] < 32 || b[k]> 126)/*characters from space (32) to tilde (126)*/
					printf("%c", '.');
				else
					printf("%c", b[k]);
				k++;
		}
			printf("\n");
	}   
}
