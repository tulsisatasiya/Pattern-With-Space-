#include <stdio.h>
int main(){
	int r,c,s;
	for(r=1; r<=5; r++){
		for(s=4;s>=r;s--){
			printf("  ");
		}
		for(c=r; c>=1; c--){
			printf("%d ",c);
		}
		printf("\n");	
	}
   return 0;
}
