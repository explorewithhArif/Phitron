#include <stdio.h>
#include <stdlib.h>
int main (){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
int x,count=0;
scanf("%d",&x);
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           if(a[i][j]==x){
            count++;
           }
        }
    }


    if(count>0){
        printf("will not take number");
    }
   else {
     printf("will take number");
   }
    
    
}