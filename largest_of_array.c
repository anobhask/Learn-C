#include<stdio.h>

int main()
{
	int num_arr[]={16772,4678,341672,46467,548494};
	int i,k,len=5, larg_num;
	printf("--------------\n");	
	printf("Original Array\n");	
	printf("--------------\n");	
	for (i=0;i<5;i++) {
		printf("%d\n",num_arr[i]);
	}	
	printf("--------------\n");	
	larg_num = num_arr[0];
	for(k=1;k<5;k++) {
		if(larg_num < num_arr[k]) {
			larg_num = num_arr[k];
		}
	
	}
	printf("Largest number in the array is: %d\n",larg_num);
}
