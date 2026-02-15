#include <stdio.h>

int main(){
	int input;
	
	printf("Enter your choice: ");
	scanf("%d", &input);
	
	switch (input){
		case 1:
			printf("Balance Inquiry.\n");
			break;
		case 2:
			printf("Withdraw Money.\n");
			break;
		case 3:
			printf("Deposit Money.\n");
			break;
		case 4:
			printf("Exit.\n");
			break;
		default:
		    printf("Invalide choice.\n");
		    break;
	
	return 0;
	}
}
