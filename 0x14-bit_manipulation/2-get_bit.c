#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to search for 
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long in n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val =(n >> index) & 1;

	return (bit_val);
}
