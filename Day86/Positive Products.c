#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int length;
        scanf("%d",&length);
        int arr[length];
        for(int i=0;i<length;i++){
            scanf("%d",&arr[i]);
        }
        // int count=0;
        // for(int i=0;i<length;i++){
        //     for(int j=i+1;j<length;j++){
        //         if(arr[i]*arr[j]>0){
        //             count++;
        //         }
        //     }
        // }
        long long pos_num=0;
        long long neg_num=0;
        for(int i=0;i<length;i++){
            if(arr[i]>0) pos_num++;
            else if(arr[i]<0) neg_num++;
        }
        long long count=(pos_num*(pos_num-1)/2)+(neg_num*(neg_num-1)/2);
        printf("%lld\n",count);
    }
    return 0;
}

