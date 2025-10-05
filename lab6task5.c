#include <stdio.h>

int main(){
	int num, b, rem, rev=0;
	printf("Enter a number:");
	scanf("%d", &num);
	int i;
	b = num;
	for(i = 0; num >= 1; i++){
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	if(rev == b){
		printf("Palindrome");
	}
	else{
		printf("Not palindrome ");
	}
	return 0;
}

