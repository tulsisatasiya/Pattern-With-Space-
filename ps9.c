#include <stdio.h>
int main(){
	int r,c,s;
	for(r=1; r<=5; r++){
		for(s=2;s<=r;s++){
		 printf("  ");
		}
		for(c=5; c>=r; c--){
			printf("%d ",c);
		}
		printf("\n");	
	}
   return 0;
}
