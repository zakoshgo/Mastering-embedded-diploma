/*Example 1*/
/*
	#include<stdio.h>
	void main() {
		printf("C Programming");
	}
*/

/*Example 2*/
/*
#pragma warning(disable: 4996)
#include<stdio.h>

void main() {
	int U_num;
	printf("Enter a integer : ");
	scanf("%d", &U_num);
	fflush(stdin); fflush(stdout);
	printf("You entered %d", U_num);

}
*/

/*Example 3*/
/*
#pragma warning(disable: 4996)
#include<stdio.h>
void main() {
	int num1, num2;
	printf("Enter two integers");
	scanf("%d %d", &num1, &num2);
	printf("sum: %d", num1 + num2);
}
*/

/*Example 4*/
/*
#pragma warning(disable: 4996)
#include<stdio.h>
void main() {
	float num1, num2;
	printf("Enter two numbers ");
	scanf("%f %f", &num1, &num2);
	printf("product: %f", num1 * num2);
}
*/

/*Example 5*/
/*
#pragma warning(disable: 4996)
#include<stdio.h>
void main() {
	char U_char;
	printf("Enter a charachter ");
	scanf("%c", &U_char);
	printf("ASCII value of %c = %d", U_char, U_char);
}
*/


/*Example 7*/
/*
#pragma warning(disable: 4996)
#include<stdio.h>
void main() {
	float a,b;
	printf("Enter value of a: ");
	scanf("%f", &a);
	printf("Enter value of b: ");
	scanf("%f", &b);
	float temp;
	temp = a;
	a = b;
	b = temp;
	printf("After swapping, value of a = %f \n",a);
	printf("After swapping, value of b = %f ",b);

}
*/

/*Example 8*/
#pragma warning(disable: 4996)
#include<stdio.h>
void main() {
	float a, b;
	printf("Enter value of a: ");
	scanf("%f", &a);
	printf("Enter value of b: ");
	scanf("%f", &b);
	
	a = a + b;
	b = a - b;
	a = a - b;


	printf("After swapping, value of a = %f \n", a);
	printf("After swapping, value of b = %f ", b);
}
