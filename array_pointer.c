#include <stdio.h>
main()
{
	int i,*arr_ptr, arr_num[]={1,2,3,4,5,6};
	
	arr_ptr = arr_num;
	
	for(i=0;i<60;i++) {
		printf("%d\n",arr_ptr[i]);
	}
}
