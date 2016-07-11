/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 * Using Linear Search
 */
bool search(int value, int values[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (values[i] == value)
		{
			return true;
		}
	}

	return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
	for (int j = 1; j < n; j++)
	{
		int key = values[j];

		// Insert values[j] into the sorted sequence
		// values[1.. j - 1]
		int i = j - 1;

		while (i > 0 && values[i] > key)
		{
			values[i + 1] = values[i];
			i = i - 1;
		}

		values[i + 1] = key;
	}
}
