#include <stdio.h>
#include <stdlib.h>

int print_num(int);
int (*v_fun)(int);

void main()
{
	int num1;
	v_fun=print_num;
	printf("the number is %d\n", v_fun(34));
}
int print_num(int num)
{
	return num;
}
