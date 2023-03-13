#include<stdio.h>
int main (){
    int a,b,c;
    for(a=1;a<=5;a++)
    {
        for(b=a;b>=1;b--)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    for(a=4;a>=1;a--)
    {
        for(b=a;b>=1;b--)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}
