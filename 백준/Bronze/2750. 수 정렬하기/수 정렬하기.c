#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	int* pa = (int*)malloc(sizeof(int) * n);
	
	for (int i = 0; i < n; i++)
		scanf("%d", pa + i);

	for(int i = 0; i < (n - 1); i++)
	{
		for (int j = 0, temp; j < (n - i - 1); j++)
		{
			if (pa[j] > pa[j + 1])
			{
				temp = pa[j];
				pa[j] = pa[j + 1];
				pa[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
		printf("%d\n", pa[i]);
}