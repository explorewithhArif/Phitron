#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    // find the maximum number
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    // decrease the value
    for(int i=0;i<n;i++){
        a[i]=max-a[i];
    }
    // print the value
    for(int i=0;i<n;i++){
       printf("%d ",a[i]);
    }

    return 0;
}