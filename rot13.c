#include "main.h"

/**
  * rot13 - encodes a string into rot13
  * @str: string
  * Return: string encoded
 **/
char *rot13(char *str)
{
	int i, j;
	char *aux;
	char buffer[10000];
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	aux = _strcpy(buffer, str);
	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; i < 52; i++)
		{
			if (input[i] == str[j])
			{
				aux[j] = output[i];
				break;
			}
		}
	}
	aux[j] = '\0';
return (aux);
}
