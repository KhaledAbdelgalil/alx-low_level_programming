/**
 *  rot13 - encodes a string using rot13.
 *
 *  @in: pointer to first char in string
 *  Return: pointer to new string
 */
char *rot13(char *in)
{
	int i = 0, index = 0;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	while (in[index] != '\0')
	{
		for (i = 0; i < 53; i++)
		{
			if (alphabet[i] == in[index])
			{
				in[index] = rot13[i];
				break;
			}
		}
		index++;
	}
	return (in);
}
