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
        int count[1000000]={0};
        int max_count=0;
        for(int i=0;i<length;i++){
            count[arr[i]-1]++;
        }
        int max=count[0];
        for(int i=1;i<1000000;i++){
            if(count[i]>max){
                max=count[i];
            }
        }
    
        printf("%d\n",length-max);
    }
    return 0;
}

