#include <stdio.h>
void sumOfN(long long n){
    long long int sum =0;
   sum=(n*(n+1)/2);
    printf("%lld",sum);
}
int main (){
    long long int n;
    scanf("%lld",&n);
    sumOfN(n);
    return 0;
}