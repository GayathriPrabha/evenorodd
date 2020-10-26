#include <stdio.h>

int main(void) {
	int n;
        char ans;
        do{
        printf("Enter the number to check") ;
	scanf("%d",&n);
	if(n%2==0)
	{
	    printf("even");
	}
	else
	{
	    printf("odd");
	}
        printf("enter y to check another number" ) ;
        scanf("%s", &ans ) ;
       } while (ans=='y' ¦¦ ans =='Y') ;
	return 0;
}
