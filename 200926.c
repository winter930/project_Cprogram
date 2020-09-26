#include<stdio.h>
#include<stdlib.h>

int f1()
{
	int *a;
	a = (int*)malloc(sizeof(int));
	*a = 0;
	
	return a;
}

int* f2(int* n)
{
	*n = 100;

	return n;
}

int** f3(int** n)
{
	**n = 200;

	return n;
}

int main()
{
	int* pnum = f1();
	printf("%d\n", *pnum);
	printf("%d\n", *f2(pnum));
	printf("%d\n", **f3(&pnum));
	free(pnum);

	return 0;
}
