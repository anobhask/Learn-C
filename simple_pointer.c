#include <stdio.h>
void change_value(int *);
void main()
{
	int num=10;
	int *num_ptr;
	printf("Value of num-%d\n",num);
	printf("Address of num-%x\n",&num);
	printf("Value of num_ptr-%x\n",num_ptr);
	//printf("content of num_ptr-%d\n",*num_ptr);
	num_ptr = &num;
	printf("Value of num_ptr-%x\n",num_ptr);
	printf("content of num_ptr-%d\n",*num_ptr);
	change_value(num_ptr);
	printf("Value of num_ptr-%x\n",num_ptr);
	printf("content of num_ptr-%d\n",*num_ptr);
}

void change_value(int *ptr)
{
	int num1=60;
	*ptr = 30;

}
