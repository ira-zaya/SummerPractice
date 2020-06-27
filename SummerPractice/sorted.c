#include "sorted.h"
#include <malloc.h>
void SortBySelection(int* mass, int n)
{
	int minPosition, tmp;

	for (int i = 0; i < n; i++)
	{
		minPosition = i;
		for (int j = i + 1; j < n; j++)
			if (mass[minPosition] > mass[j])
				minPosition = j;
		tmp = mass[minPosition];
		mass[minPosition] = mass[i];
		mass[i] = tmp;
	}
	printf("\nОтсортированный массив:\n");
	out_array(mass, n);
	free(mass);
}
void SortByInsertion(int* mass, int n)
{
	int newElement, location;
	for (int i = 1; i < n; i++)
	{
		newElement = mass[i];
		location = i - 1;
		while (location >= 0 && mass[location] > newElement)
		{
			mass[location + 1] = mass[location];
			location = location - 1;
		}
		mass[location + 1] = newElement;
	}
	printf("\nОтсортированный массив:\n");
	out_array(mass, n);
	free(mass);
}
void SortByBubble(int* mass, int n)
{
	int tmp;
	int noSwap;
	for (int i = n - 1; i >= 0; i--)
	{
		noSwap = 1;
		for (int j = 0; j < i; j++)
		{
			if (mass[j] > mass[j + 1])
			{
				tmp = mass[j];
				mass[j] = mass[j + 1];
				mass[j + 1] = tmp;
				noSwap = 0;
			}
		}
		if (noSwap == 1)
			break;
	}
	printf("\nОтсортированный массив:\n");
	out_array(mass, n);
	free(mass);
}