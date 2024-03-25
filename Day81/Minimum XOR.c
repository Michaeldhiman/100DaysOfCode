#include <stdio.h>
#include<limits.h>
#include<stdbool.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int total_number;
        scanf("%d",&total_number);
        int arr[total_number];
        for(int i=0;i<total_number;i++){
            scanf("%d",&arr[i]);
        }
        int xor1=0;
        for(int i=0;i<total_number;i++){
           xor1^=arr[i];
        }
        int min_xor=xor1;
        for(int i=0;i<total_number;i++){
            int temp_xor=xor1^arr[i];
            if(temp_xor<min_xor){
                min_xor=temp_xor;
            }
        }
        printf("%d\n",min_xor);
    }
    return 0;
}

