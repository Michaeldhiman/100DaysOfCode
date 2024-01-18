#include <stdio.h>
int main(void) {
    int test_case,bottle_1,bottle_2,bottle_3;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
        scanf("%d %d %d",&bottle_1,&bottle_2,&bottle_3);
        if((bottle_1==0 && bottle_2==0 || bottle_1==0 && bottle_3==0 ||bottle_2==0 && bottle_3==0)|| (bottle_1==0 && bottle_2==0 &&bottle_3==0)){
            printf("Water filling time\n");
        }
        else if((bottle_1==1 && bottle_2==1 && bottle_3==1)|| (bottle_1==0 ||bottle_2==0 ||bottle_3==0)){
            printf("Not now\n");
        }
    }
}
