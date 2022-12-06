#include<stdio.h>
int main()
{
	int num;

	printf("Enter any Number: ");
	scanf("%d",&num);

	switch(num > 0)
	{
		case 1 : printf("Number is Positive");
				 break;

		case 0 : if(num < 0)
				 {
				 	printf("Number is Negative");
				 }
				 else
				 {
				 	printf("Number is Zero");
				 }
				 break;
	}

	return 0;
}