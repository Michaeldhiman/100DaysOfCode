#include <stdio.h>
int sum(int num){
    int ans=0;
    while(num){
        int digit=num%10;
        ans+=digit;
        num/=10;
    }
    return ans;
}
int main(void) {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int total_number;
        scanf("%d",&total_number);
        int arr[total_number];
        for(int i=0;i<total_number;i++){
            scanf("%d",&arr[i]);
        }
        int max_sum=0;
       for(int i=0;i<total_number;i++){
           for(int j=i+1;j<total_number;j++){
               int product=arr[i]*arr[j];
               int sum_product=sum(product);
               if(sum_product>max_sum) max_sum=sum_product;
           }
       }
       printf("%d\n",max_sum);
       
    }
    return 0;
}

