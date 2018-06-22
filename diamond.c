#include <stdio.h>

int diamond(int n, char m)
{
	int i,j,k;
	if(n%2 != 0){
		for(i = 1;i <= n/2+1;i++){
			for(j = n/2-i+1;j > 0;j--)
				printf(" ");
			for(k = 1;k <= 2*i-1;k++)
				printf("%c",m);
			printf("\n");
		}
		for(i = 1;i <= n/2;i++){
			for(j = 1;j <= i ;j++)
				printf(" ");
			for(k = 1;k <= n-2*i;k++)
				printf("%c",m);
			printf("\n");
		}
	}
	else printf("Error!\n");
			
	
}
int main (void)
{
	diamond(9,'#');
	return 0;
}
