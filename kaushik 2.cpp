#include<stdio.h>
int main(){
	int num1,num2;
	printf ("Enter two numbers:");
	scanf ("%d",&num1);
	printf ("Enter the second number:");
	scanf ("%d",num2);
	if(num1 < num2){
		printf ("The smallest number is: %d\n", num1);
} else {
	printf ( "The smallest number is: %d\n", num2);

    return 0;
   }
}