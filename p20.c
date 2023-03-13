#include <stdio.h>
int main(){
	int r,c,s;
	for(r=5; r>=1; r--){
		for(s=4;s>=r;s--){
			printf("  ");
		}
		for(c=1; c<=r; c++){
			if(c%2==0){
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
