#include <stdio.h>
int main(){
	int r,c,s;
	for(r=1; r<=5; r++){
		for(s=4;s>=r;s--){
			printf("  ");
		}
		for(c=1; c<=r; c++){
			if(r%2==0){
      		printf("0 ");
		  }
			else{
			printf("1 ");
		}
		}
		printf("\n");	
	}
   return 0;
}
