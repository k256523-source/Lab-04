#include <stdio.h>

int main(){
	int totalMarks, marks;
	float percentage;
	
	printf("Enter the subject marks respectively.\n");
	for(int i=1;i<=5;i++){
		printf("Enter marks: ");
		scanf("%d", &marks);
		totalMarks+=marks;
	}
	
	percentage = (totalMarks/5)*100;
	
	if(percentage>=85){
		printf("Full scholarship.");
	}else if(percentage>=70){
		printf("Partial scholarship.");
	}else if(percentage>=50){
		printf("Eligible for consideration");
	}else{
		printf ("Not eligible...");
	}
	
	return 0;
}
