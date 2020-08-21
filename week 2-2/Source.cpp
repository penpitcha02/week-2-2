#include<stdio.h>
int main()
{
	int x, y, m = 2, n = 2;
	scanf_s("%d", &x);
	scanf_s("%d", &y);

	if (x < y)
	{
		while (m <= y)
		{
			if (x % m == 0 && y % m == 0)
			{
				m = 1 * m;  	
			}
			m++;	
		}
		printf("%d ", m - 1);
	}
	else
	{
		while (n <= x)
		{
			if (y % n == 0 && x % n == 0)
			{
				n = 1 * n;
			}
			n++;
		}
		printf("%d ", n - 1);
	}
	return 0;
}