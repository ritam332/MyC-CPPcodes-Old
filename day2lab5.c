#include <stdio.h>
int main()
{
	float a, b;
	int choice;
	printf("Enter two numbers :\n");
	scanf("%f%f", &a, &b);
	printf("Mathematical operations:\n1.Add\n2.Subtract\n3.Multiply\n4.divide\n ");
	printf("Enter your preference among 1 to 4:  ");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		printf("sum is %.2f\n", a + b);
		break;
	case 2:
		printf("difference is %.2f\n", a + b);
		break;
	case 3:
		printf("Product is %.2f\n", a * b);
		break;
	case 4:
		printf("Quotient is %.2f\n", a / b);
		break;
	default:
		printf("wrong choice try again");
		break;
	}
}