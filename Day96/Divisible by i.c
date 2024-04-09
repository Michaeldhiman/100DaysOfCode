#include <stdio.h>
#include<stdlib.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int number;
        scanf("%d",&number);
       if(number%2==0){
           int d=1;
           int i=number/2;
            printf("%d ",i);
           while(i!=number){
               if(d%2==0){
                   i-=d;
               }else{
                   i+=d;
               }
                   printf("%d ",i);
               d++;
           }
       }else{
            int d=1;
           int i=(number/2)+1;
            printf("%d ",i);
           while(i!=1){
               if(d%2==0){
                   i-=d;
               }else{
                   i+=d;
               }
               d++;
            printf("%d ",i);
           }
       }
       printf("\n");
    }
    return 0;
}

