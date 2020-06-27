#include "sorted.h"
int main()
{
	setlocale(LC_CTYPE, "rus");
	int command, n, * arr;
	printf("����:\n1-���������� �������\n2-���������� ���������\n3-���������� ���������\n0-������� ���������");
	for (;;)
	{
		printf("\n������� �������:");
		scanf("%d", &command);
		if (command > 3 || command < 0) printf("����� ������� �� ����������!\n");
		else if (command != 0)
		{
			printf("������� ���������� ��������� �������:");
			scanf("%d", &n);
			arr = (int*)malloc(n * sizeof(int));
			rand_array(arr, n);
			printf("��������������� ������:\n");
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