#include <stdio.h>
int main(){
	int r,c,s;
	for(r=1; r<=5; r++){
		for(s=4;s>=r;s--){
			printf("  ");
		}
		for(c=1; c<=r; c++){
			if(c%2==0){
      		printf("- ");
		  }
			else{
			printf("| ");
		}
		}
		printf("\n");	
	}
   return 0;
}
