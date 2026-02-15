#include <stdio.h>
#include <math.h>

int main(){
	int choice, num1,num2,ans;
	
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Square of a Number\n6. Cube of a Number\n7. Square Root of a Number\n8. Power\n9. Absolute Value\n10. Modulus (Remainder of two numbers)\n");
	printf("\nInput your choice: ");
	
	scanf("%d", &choice);
	
	switch (choice){
		float ansf;
		case 1:
			printf("Enter two numbers: ");
			scanf("%d %d", &num1, &num2);
			ans = num1+num2;
			printf("Answer = %d", ans);
			break;
		case 2:
			printf("Enter two numbers: ");
			scanf("%d %d", &num1,&num2);
			ans = num1-num2;
			printf("Answer = %d", ans);
			break;
		case 3:
			printf("Enter two numbers: ");
			scanf("%d %d", &num1,&num2);
			ans = num1*num2;
			printf("Answer = %d", ans);
			break;
		case 4:
			printf("Enter two numbers: ");
			scanf("%d %d", &num1,&num2);
			if (num2==0){
				printf("Infinity.");
			}else{
				ansf = num1/num2;
			}
			printf("Answer = %.2f", ansf);
			break;
		case 5:
			printf("Enter the number: ");
			scanf("%d", &num1);
			ans = num1*num1;
			printf("Answer = %d", ans);
			break;
		case 6:
			printf("Enter the number: ");
			scanf("%d", &num1);
			ans = num1*num1*num1;
			printf("Answer = %d", ans);
			break;
		case 7:
			printf("Enter the number: ");
			scanf("%d", &num1);
			if (num1<0){
				printf("Does not Exist.");
			}else {
				printf("Square root of %d = %.2f", num1, sqrt(num1));
			}
			break;
		case 8:
			printf("Enter base: ");
			scanf("%d", &num1);
			printf("Enter exponent: ");
			scanf("%d", &num2);
			printf("The answer is = %d", pow(num1,num2));
			break;
		case 9:
			printf("Enter the number: ");
			scanf("%d", &num1);
			if (num1<0){
				num1=num1*(-1);
			}
			printf("Answer = %d", num1);
			break;
		case 10:
			printf("Enter two numbers: ");
			scanf("%d %d", &num1,&num2);
			if (num2==0){
				ans = 0;
			}else{
				ans = num1%num2;
			}
			break;
		default:
			printf("Invalide menu choice...");	
	}
	return 0;
		
}
