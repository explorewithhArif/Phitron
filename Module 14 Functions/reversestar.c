#include <stdio.h>
int main ()
{
    int  n;
    scanf("%d",&n);

    int star =n;
    int space = 0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int k=star;k>=1;k--){
            printf("*");
        }
        printf("\n");
        space++;
        star--;
    }
}