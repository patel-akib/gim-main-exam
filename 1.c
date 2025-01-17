/*WAP to print odd numbers from 1 to N using a while loop.*/

#include<stdio.h>
int main(){
	int n,i=1;
	printf("enter any number:");
	
	scanf("%d",&n);

	while(i<=n){
		if(i%2!=0){
			printf("%d ",i);
		}
		i++;
	}

}
