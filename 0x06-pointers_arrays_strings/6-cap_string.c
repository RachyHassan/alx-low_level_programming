#include "main.h"
/**
*cap_string- capitalizes all words of a string
*@str: The string to be capitalized.
*
*Return: A pointer to the changed string.
*/
char *cap_string(char *str)
{
	int a = 0, i;

	if (*(str + a) >= 97 && *(str + a) <= 122)
		*(str + a) = *(str + a) - 32;
	a++;
	while (*(str + a) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if ((*(str + (a + 1)) >= 97) && (*(str + (a + 1)) <= 122))
			{
				*(str + (a + 1)) = *(str + (a + 1)) - 32;
			break;
		}
	}
	a++;
}
return (str);
}
