#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the size of array :\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements :\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("reverse order :\n");
	for(i=n-1;i>=0;i--){
		printf("%d\n",a[i]);
	}
	return 0;
}
