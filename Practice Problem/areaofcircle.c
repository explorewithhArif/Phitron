#include <stdio.h>
int main (){
    double r;
    scanf("%llf",&r);
    double pi=3.141592653;
    double area = pi*(r*r);
    printf("%.9lf",area);
    return 0;
}