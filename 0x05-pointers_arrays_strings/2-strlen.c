#include "main.h"

/**
 * _strlen - Returns lenght of a string
 * @s: A string
 * Return: string lenght
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{

	longi++;
	s++;
	}
	return (longi);

}
