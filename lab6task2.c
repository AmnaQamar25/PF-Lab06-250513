#include <stdio.h>
int main(){
	int num,i;
	printf("Enter a number (starting from 1): \n");
	scanf("%d", &num);
	if(num == 1){
		printf("Neither prime nor composite number");
		return 0;
	}
      i = num ;
	while(num>2){
		if(i % --num == 0){
			printf("Not prime number");
			return 0;
		}
	}
	   if(num==2){
	   printf("Prime number");}
    return 0;
}

