#include <stdio.h>
int main()
{
    int  n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x,index;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(x==a[i]){
           index=i;
           break;
        }
        else{
            index=-1;
        }
    }
    if(index>=0){
        printf("%d",index);
    }
    else{
        printf("%d",index);
    }
    return 0;
}