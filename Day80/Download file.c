#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int round_number,free_time;
        scanf("%d %d",&round_number,&free_time);
            int arr[round_number];
            int arr2[round_number];
            for(int i=0;i<round_number;i++){
                scanf("%d %d",&arr[i],&arr2[i]);
            }
            int money=0;
            int remaining_time=0;
            for(int i=0;i<round_number;i++){
                remaining_time=free_time-arr[i];
                if(remaining_time<0) remaining_time=0;
                
                arr[i]-=free_time;
                if(arr[i]<0) arr[i]=0;
                
                free_time=remaining_time;
                money+=arr[i]*arr2[i];
            }
            printf("%d\n",money);
    }
    return 0;
}

