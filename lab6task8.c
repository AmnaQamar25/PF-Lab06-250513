#include <stdio.h>
int main(){
	int num, power, ans=1, i=1;
	printf("Enter a number(positive) : ");
    scanf("%d", &num);
	printf("Enter the power(positive) : ");
	scanf("%d", &power);
	while(i<=power){
		ans = ans * num ;
		i++;
	}
	printf("%d^%d = %d",num,power,ans);
    return 0;
}
