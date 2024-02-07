#include <stdio.h>

int main() {
    int test_case,score_alice,score_bob;
    scanf("%d",&test_case);
    while(test_case--){
       scanf("%d %d",&score_alice,&score_bob);
       int next_serve=score_alice+score_bob+1;
       if(next_serve%4==1 || next_serve%4==2){
           printf("alice\n");
       }else{
           printf("bob\n");
       }
    }
    return 0;
}

