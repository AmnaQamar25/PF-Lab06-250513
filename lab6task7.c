#include <stdio.h>

int main(){
	int pass;
	
	do{
		printf("Enter the password ");
	    scanf("%d", &pass);
	    if(pass!=1234){
	    printf("Wrong password.Try again.\n");
		}
	} while(pass !=1234);
	
    printf("Correct password ");
	
	return 0;
}

