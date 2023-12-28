#include <stdlib.h>
#include <strin.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
 * main - check the code for ALX-Africa cohort 17 students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	return (EXIT_SUCCESS);
}
