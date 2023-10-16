#include "main.h"
/**
 *   _atoi - convert string to int
 *
 *  @in: pointer to first char in string
 *  Return: integer value of string
 */
int _atoi(char *in)
{
	int cnt = 0, num = 0, sign = 1;

	while (*in != '\0')
	{
		if (cnt  > 0 && (*in < '0' || *in > '9'))
			break;
		else if (*in == '-')
			sign *= -1;
		else if (*in >= '0' && *in <= '9')
		{
			if (cnt > 0)
				num *= 10;
			num += (*in - 48);
			cnt++;
		}
		in++;
	}

	return (num * sign);
}
