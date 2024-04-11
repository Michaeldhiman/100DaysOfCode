#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int length;
        scanf("%d",&length);
        long long arr[length];
        for(int i=0;i<length;i++){
            scanf("%lld",&arr[i]);
        }
        long long int  sum=0;
        for(int i=0;i<length;i++){
            sum+=arr[i];
        }
        long long arr2[length];
        long long int sum2=sum/(length+1);
        for(int i=0;i<length;i++){
            arr2[i]=arr[i]-sum2;
        }
        for(int i=0;i<length;i++){
            printf("%lld ",arr2[i]);
        }
        printf("\n");
        
    }
    return 0;
}

