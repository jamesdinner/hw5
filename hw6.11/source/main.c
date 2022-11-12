#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k;
	int a[10] = {10,8,9,7,6,5,4,3,2,1 };

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9-i; j++)
		{
			if (a[j] > a[j + 1])
			{
				k = a[j];
				a[j] = a[j + 1];
				a[j+1] = k;  
			}
		}
		printf("sort %d : ", i + 1);

		for (j = 0; j < 10;j++)
			printf("%-3d", a[j]);
		printf("\n");
	}
}
