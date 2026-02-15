#include <stdio.h>

int main(){
	int amount; 
	float newamount;
	
	printf("Enter the total purchase amount:\n");
	scanf("%d", &amount);
	
	if (amount>=5000){
		newamount = amount*0.8;
		printf("Discounted amount: %.2f", newamount);
	} else if(amount>=3000){
		newamount = amount*0.9;
		printf("Discounted amount: %.2f", newamount);
	} else {
		printf("No Discount.");
	}
	return 0;
}
