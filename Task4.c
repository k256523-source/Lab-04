#include <stdio.h>
#include <string.h>

int main(){
	char username[] = "user";
	int password = 1234;
	char Iusername[20];
	int Ipassword;
	
	printf("Enter username and Password: ");
	scanf("%s %d", &Iusername, &Ipassword);
	
	
	if(strcmp(Iusername, username) == 0 && Ipassword==password){
		printf("Connected Successfully.");
	} 
	else{
		printf("Connection Failed.");
	}
	return 0;
	
}
