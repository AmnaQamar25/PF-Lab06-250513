#include <stdio.h>
int main(){
	
	int num, finalans, ans1=0, ans2=1, i=0;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	printf("0 ");
	--num;
	while(i<num){
		finalans = ans1 + ans2;
		printf("%d ", finalans); 
		ans2=ans1;
		ans1 = finalans;
		i++;
	}
	return 0;
}

