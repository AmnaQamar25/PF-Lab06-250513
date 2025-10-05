#include <stdio.h>
int main(){
	int num, i=1, soo=0, soe=0;
	printf("Enter a number till where you want sum of odd and even numbers separartly : ");
	scanf("%d", &num) ;
	while(i<=num){
		if(i % 2 == 0){
			soe=i+soe;
		}
		else{
			soo=i+soo;
		}
		i++;	
	}
	printf("The sum of odd number till %d = %d\nThe sum of even number till %d = %d\n",num,soo,num,soe);	
	return 0;
}
