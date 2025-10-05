#include <stdio.h>
int main(){
	char another;
	do{	
		int num, i=1, ans;
    	printf("Enter a number to print its table : ");
    	scanf("%d", &num);
	        while(i<=10){
		     ans = num*i;
		     printf("%d * %d = %d\n",num,i,ans);
		     i++;
	        }
	    printf("Do you want to print another table?Y/N\n");
		scanf(" %c", &another);
    }while(another=='Y');
		return 0;
}
	
