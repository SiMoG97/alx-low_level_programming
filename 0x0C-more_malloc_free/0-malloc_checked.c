#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: space to locate size
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
