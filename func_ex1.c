#include <stdio.h>

int my_num(int x) 
{
	return x*x;
};
int (*v_func)(int);
void main()
{
	int num=2;
	printf("%d-\n",my_num(num));
	v_func = my_num;
	num++;
	printf("%d-\n",v_func(num));
	printf("%d-\n",num);
}
