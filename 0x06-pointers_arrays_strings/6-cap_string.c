#include "main.h"

/**
 * cap_string - make all words in a string upper case.
 * @str: string to be used
 * Return: characters.
 */

char *cap_string(char *str)
{
	int cap = 0;

	while (str[cap])
	{
		while (!(str[cap] >= 97 && str[cap] <= 122))
			cap++;

		if (str[cap - 1] == 32 || str[cap - 1] == '\t' || str[cap - 1] == '\n' || str[cap - 1] == ',' || str[cap - 1] == ';' || str[cap - 1] == '.' || str[cap - 1] == '!' || str[cap - 1] == '?' || str[cap - 1] == '"' || str[cap - 1] == '(' || str[cap - 1] == ')' || str[cap - 1] == '{' || str[cap - 1] == '}' || cap == 0)

		str[cap] -= 32;

		cap++;
	}
	return (str);
}
