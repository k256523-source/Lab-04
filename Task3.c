#include<stdio.h>

int main(){
	int balance;
	
	printf("enter account balance: ");
	scanf("%d", &balance);
	
	if(balance>0){
		printf("Positive balance.");
	} else if(balance<0){
		printf("Overdrawn.");
	} else{
		printf("Zero balance.");
	}
	return 0;
}
