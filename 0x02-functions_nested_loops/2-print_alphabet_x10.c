#include "main.h"

/**
 * prints_alphabets_x10 - printe 10 alpha lowercase
 */
void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= '2'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
