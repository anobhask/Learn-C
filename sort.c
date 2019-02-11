#include <stdio.h>

void main()
{
	int num_arr[]={34,56,23,12,89,20},i,tmp;

	for(i=0;i<6;i++) {
		if(num_arr[i] > num_arr[i++]) {
			tmp = num_arr[i];
			num_arr[i] = num_arr[i++];
			num_arr[i++] = tmp;
		}
	}

	for(i=0;i<6;i++) {
		printf("%d\n",num_arr[i]);
	}

}
