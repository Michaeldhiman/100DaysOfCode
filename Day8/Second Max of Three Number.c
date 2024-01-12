#include <stdio.h>
int main(void) {
        int test_case,first_num,second_num,third_num,second_max;
        scanf("%d ",&test_case);
        for(int i=1;i<=test_case;i++){
            scanf("%d %d %d",&first_num,&second_num,&third_num);
            if(first_num>= second_num && first_num >=third_num){
                if(second_num>third_num){
                    second_max=second_num;
                }else{
                    second_max=third_num;
                }
            }
            else if(second_num>= first_num && second_num >=third_num){
                if(first_num>third_num){
                    second_max=first_num;
                }else{
                    second_max=third_num;
                }
            }
            else{
                if(first_num>second_num){
                    second_max=first_num;
                }else{
                    second_max=second_num;
                }
            }
            printf("%d\n",second_max);
        }
}

