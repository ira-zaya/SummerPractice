#include "sorted.h"
int main()
{
	setlocale(LC_CTYPE, "rus");
	int command, n, * arr;
	printf("Меню:\n1-Сортировка выбором\n2-Сортировка вставками\n3-Сортировка пузырьком\n0-Закрыть программу");
	for (;;)
	{
		printf("\nВведите команду:");
		scanf("%d", &command);
		if (command > 3 || command < 0) printf("Такой команды не существует!\n");
		else if (command != 0)
		{
			printf("Введите количетсов элементов массива:");
			scanf("%d", &n);
			arr = (int*)malloc(n * sizeof(int));
			rand_array(arr, n);
			printf("Сгенерированный массив:\n");
			out_array(arr, n);
			switch (command)
			{
			case 1: SortBySelection(arr, n); break;
			case 2: SortByInsertion(arr, n);  break;
			case 3: SortByBubble(arr, n);  break;
			}
		}
		else
		{
			return 0;
		}
	}
}