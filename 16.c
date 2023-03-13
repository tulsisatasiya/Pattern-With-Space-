#include <stdio.h>
int main()
{
char r,c,s;

    for(r='A'; r<='E'; r++){
    	for(s='B';s<=r;s++){
			printf("  ");
		}
        for(c=r; c<='E'; c++){
            printf("%c ",c);
        }
        printf("\n");
    }
    return 0;
}
