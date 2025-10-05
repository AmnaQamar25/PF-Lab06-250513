#include <stdio.h>

int main(){
	int num,a,lastdigit,cube1=0,sumofcubes=0;
	printf("Enter a number(positive only as no negative number can be an armstrong) to check if it is an armstrong or not: ");
	scanf("%d", &num);
	
	if (num < 0) {
    printf("Invalid input!\n");
    return 0;
    }
	
	a= num;
	while(num>=1){
	lastdigit = num % 10 ;
	cube1=lastdigit*lastdigit*lastdigit;
	sumofcubes = cube1 + sumofcubes ;
    num = num / 10;
    }

	if(sumofcubes == a){
		printf("%d is an Armstrong number",a);
	}
	else{
	printf("%d is not an Armstrong number",a);
    }

	return 0;
}
