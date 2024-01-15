#include <stdio.h>

int main(void) {
    int test_case;
    float first_num,second_num,third_num,average;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
        scanf("%f %f %f ",&first_num,&second_num,&third_num);
        average=(first_num+second_num)/2;
        if(average>third_num){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    return 0;
    
}

