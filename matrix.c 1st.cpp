#include<stdio.h>
int main()
{
	int i,j;
	int a[2][2];
	printf("enter the elements");
    for(i=0;i<2;i++){
    	for(j=0;j<2;j++){
    		scanf("%d",&a[i][j]);
		}
	}
	printf("matrix\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		print("%d\n",a[i][j]);
	}
	printf("\n");
	return 0;
	}
	
