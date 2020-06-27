#include "sorted.h"
#include <stdlib.h>
#include <time.h>
void out_array(int* mass, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", mass[i]);
}
void rand_array(int* mass, int n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		mass[i] = rand() % 100;
	}
}