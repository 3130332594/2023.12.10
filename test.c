#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[5] = { 0 };
	int* p = arr;
	int i = 0;
	int rest = 5;
	int count = 0;

	for (i = 0; i <5; i++)
	{
		*(p + i) = i + 1;
	}
	while (rest > 1)
	{
		/* other: i=(i+1)%5 */
		for (i = 0; i < 5; i++)
		{
			if (*(p + i) == 0)
				continue;
			else
			{
				count++;
				if (count == 3)
				{
					*(p + i) = 0;
					rest--;
					count = 0;
				}
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		if (*(p + i) != 0)
			printf("%d", *(p + i));
	}
	return  0;
}