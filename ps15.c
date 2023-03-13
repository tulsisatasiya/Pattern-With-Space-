#include <stdio.h>
int main()
{
char r,c,s;
	for(r='E'; r>='A'; r--){
		for(s='D';s>=r;s--){
			printf("  ");
		}
		for(c='A'; c<=r; c++){
			printf("%c ",c);
		}
		printf("\n");	
	}
   return 0;
}
