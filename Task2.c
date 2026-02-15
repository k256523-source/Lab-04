#include <stdio.h>

int main(){
	int gbs;
	
	printf("Enter the GBs used: ");
	scanf("%d", &gbs);
	printf("\n");
	
	if(gbs<=50){
		printf("Basic user.");
	} 
	else if(gbs>=51 && gbs<=150){
		printf("Standard User.");
	}
	else {
		printf("Heavy user.");
	}
	return 0;
}
