#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int tc=0;tc<t;tc++){
        int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int min=  INT_MAX;
    for(int i=1;i<=n;i++){
        for (int j=i+1;j<=n;j++){
            int value = a[i]+a[j]+j-i;
            if(min>value){
                min=value;
            }
        }
    }
    printf("%d\n",min);
    }
    return 0;
}