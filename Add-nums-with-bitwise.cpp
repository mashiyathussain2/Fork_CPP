#include <stdio.h>
int main()
{
	int number,number2,sum,carry;

	do{
		printf("Enter 1st Number: ");
		scanf("%d",&number);

		printf("Enter 2nd Number: ");
		scanf("%d",&number2);

		
		while(number2!=0){
			sum= number ^ number2;
			carry= (number & number2)<<1;
			number=sum;
			number2=carry;
		}

		printf("Addition is: %d\n",number);

		
	}while(true);
	return 0;

}
