#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int total_bags,max_number,cost;
        scanf("%d %d %d",&total_bags,&max_number,&cost);
        int arr[total_bags];
        for(int i=0;i<total_bags;i++){
            scanf("%d",&arr[i]);
        }
        int sum=0;
        for(int i=0;i<total_bags;i++){
            if(arr[i]<max_number-cost){
                sum+=max_number-cost;
            }else{
                
            sum+=arr[i];
            }
        }
        
        printf("%d\n",sum);
        
    }
    return 0;
}

