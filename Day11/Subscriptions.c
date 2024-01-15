#include <stdio.h>
int main(void) {
    int test_case,subscription_cost,total_cost,total_friends;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
        scanf("%d %d ",&total_friends,&subscription_cost);
        int no_of_subscription=total_friends/6;
        if(total_friends%6==0){
            no_of_subscription=no_of_subscription;
        }else{
            no_of_subscription=no_of_subscription+1;
        }
        total_cost=subscription_cost*no_of_subscription;
        printf("%d\n",total_cost);
    }
}

