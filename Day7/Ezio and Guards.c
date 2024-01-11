#include <stdio.h>

int main(void) {
     int test_case,manipulate_guards,no_of_guards;
     scanf("%d",&test_case);
     for(int i=1;i<=test_case;i++){
         scanf("%d %d",&manipulate_guards,&no_of_guards);
         if(manipulate_guards<no_of_guards){
             printf("no\n");
         }else{
             printf("yes\n");
         }
     }
}

