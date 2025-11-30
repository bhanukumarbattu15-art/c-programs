#include<stdio.h>
int sum (){
	int a,b,c;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
	}
	int main(){
		int result;
		result=sum();
		printf("%d",result);
		return 0;
	}
