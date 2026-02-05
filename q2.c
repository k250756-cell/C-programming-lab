#include<stdio.h>
int main(){
	int a;
	int b;
	int temp;
	printf("Enter value of a = ");
	scanf("%d",&a);
	printf("Enter value of b = ");
	scanf("%d",&b);
	printf("Before Swapping:\n");
	printf("Value of a = %d\n",a);
	printf("Value of b = %d\n",b);
	
	printf("After Swapping:\n");
	temp = a;
    a = b;
    b = temp;
	printf("Value of a = %d\n",a);
	printf("Value of b = %d\n",b);
	return 0;
}
