#include<stdio.h>

int main()
{
	int num[10];
	int n;
	int tmp;

	for (n = 0; n < 10; n++)
	{
		printf("Enter number %d : ", n + 1);
		scanf_s("%d", &num[n]);
	}
	for (n = 0; n < 10; n++)
	{
		if (num[n] < num[n + 1])
		{
			tmp = num[n + 1];
			num[n + 1] = num[n];
			num[n] = tmp;
		}
	}
	printf("The minimum number = %d", num[9]);
}