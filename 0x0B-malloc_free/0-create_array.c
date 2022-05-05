<<<<<<< HEAD
#include "main.h"
#include <stdlib.h>
/**
  *create_array - creates an array of chars and initializes it with
  *a specific char.
  *@size: size of array.
  *@c: char to initialize array with.
  *
  *Return: NULL if it fails or
  *Pointer to array.
  */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	/* check if malloc was successful */

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);

}
=======
#include "main.h"
/**
 * create_array - array for prints a string
 * @size: number elements array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	/*Define values with malloc*/
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		position = 0;
		while (position < size) /*While for array*/
		{
			*(buffer + position) = c;
			position++;
		}

		return (buffer);
	}
}
>>>>>>> 8f0bff2fcb4b6236623329b72a23269fddb40f89
