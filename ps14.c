#include <stdio.h>
int main()
{
char r,d,s;

    for(r='A'; r<='E'; r++){
    	for(s='D';s>=r;s--){
			printf("  ");
		}
        for(d='A'; d<=r; d++){
            printf("%c ",d);
        }
        printf("\n");
    }
    return 0;
}
