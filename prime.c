#include <stdio.h>
/*素数*/

int main(void)
{
	int i;
	for(i = 1;i <= 100;i++){
		int j = 2;
		while((j <i ) && (i % j!=0)){
			j++;
			}
			if(j == i){
				printf("%d\n",i);
			}
	}
	return 0;
}

