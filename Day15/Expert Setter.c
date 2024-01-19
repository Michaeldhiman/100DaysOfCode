#include <stdio.h>

int main(void) {
    int test_case,problem_approve;
    float problem_submit;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
        scanf("%f %d",&problem_submit,&problem_approve);
       
            if(problem_approve>= problem_submit/2){
                printf("yes\n");
            }else{
                printf("no\n");
            }
        
    }
}
