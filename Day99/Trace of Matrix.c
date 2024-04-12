#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int length;
        scanf("%d",&length);
        int arr[length][length];
        for(int i=0;i<length;i++){
            for(int j=0;j<length;j++){
                scanf("%d",&arr[i][j]);
            }
        }
       
    int max_sum=0;
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            int l=i;
            int m=j;
            int sum=0;
            while(l<length && m<length){
                sum+=arr[l][m];
                l++;
                m++;
            if(sum>max_sum) max_sum=sum;
            }
        }
    }
 printf("%d\n",max_sum);
    }
    return 0;
}


