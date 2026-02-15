#include<stdio.h>

int main(){
	
	float perc;
	
	printf("Enter the attendance percentage");
	scanf("%f", &perc);
	
	if (perc>=75.0){
		printf("Selected for tournament");
	}
	else{
		printf("Not selected");
	}
	return 0;
}
