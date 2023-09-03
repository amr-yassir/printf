#include "main.h"


int _puts_0xS(char *S)
{
	int ctr, i;

	ctr = 0;
	i = 0;
	if (NULL == S)
		S = "(null)";
	else
	{
		while (*(S + i))
		{
			if (((*(S + i) > 0) && (*(S + i) < 32)) || (*(S + i) >= 127))
			{
				_putchar('\\');
				_putchar('X');
				ctr += 2;
				if (*(S + i) < 16)
				{
					_putchar(48);
					ctr++;
				}
				ctr += print_HEX(*(S + i));
			}
			else
			{
				_putchar(*(S + i));
				ctr++;
			}
			i++;
		}
	}
	return (ctr);
}
