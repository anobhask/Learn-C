#include<stdio.h>
#include<string.h>
void main()
{
	int i, len, arr[] = { 1,2,3 };
 	char str[]={"One"};
    char str1[2][3] = { 
						"One",
						"two"
						};
	
	for (i=0;i<3;i++)
	printf("%d\n",arr[i]);
	
	printf("%s\n",str1[0]);
	printf("%s\n",str1[1]);

	strcpy(str1[1], "Three");
	printf("%s\n",str1[1]);
}
