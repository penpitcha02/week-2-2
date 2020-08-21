#include<stdio.h>
int main()
{
	int x, y, m = 2, n = 2, max = 2, max2 = 2;
	scanf_s("%d", &x);
	scanf_s("%d", &y);

	if (x <= y)
	{
		while (m <= y)
		{
			if (x % m == 0 && y % m == 0 && m > max)
			{
				max = m;
			}
			m++;
		}
		printf("%d ", max);
	}
	else
	{
		while (n <= x)
		{
			if (y % n == 0 && x % n == 0 && n > max2)
			{
				max2 = n;
			}
			n++;
		}
		printf("%d ", max2);
	}
	return 0;
}