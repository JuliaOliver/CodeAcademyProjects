#include <stdio.h>


int main() {
	double a;
	double b;
	char choice;
	double res;
	printf("Write two numbers:\n");
	scanf("%lf",&a);
	scanf("%lf",&b);
	printf("Choose aritmetic operation of these: (*    /    +    -) \n");
	scanf("\n%c", &choice);
	switch(choice){
		case '/':
			if(b == 0) {
				printf("You can not divide by 0\n");
				break;
			}
			res = a / b;
			printf("%lf / %lf = %lf\n",a,b,res);
			break;
		case '*':
			res = a * b;
			printf("%lf * %lf = %lf\n",a,b,res);
			break;
		case '+':
			res = a + b;
			printf("%lf + %lf = %lf\n",a,b,res);
			break;
		case '-':
			res = a - b;
			printf("%lf - %lf = %lf\n",a,b,res);
			break;
		default:
			printf("Invalid operator\n");
			break;
			
	}		
	return 0;
}


