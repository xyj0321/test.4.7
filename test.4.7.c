#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */
//研究冒泡排序，四个参数，其中compare函数不理解


int values[] = { 40, 10, 100, 90, 20, 25 };

int compare(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}

int main()
{
	int n;
	qsort(values, 6, sizeof(int), compare);
	for (n = 0; n<6; n++)
		printf("%d ", values[n]);
	return 0;
}
