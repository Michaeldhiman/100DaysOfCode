#include <stdio.h>
#include<limits.h>
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
        int count[1000]={0};
        for(int i=0;i<length;i++){
            count[arr[i]-1]++;
        }
        int max=INT_MIN;
        int smax=INT_MIN;
        for(int i=0;i<length;i++){
            if(count[i]>max){
                smax=max;
                max=count[i];
            }else if(count[i]>smax){
                smax=count[i];
            }
        }
        if(smax==max) printf("NO\n");
        else if(max>smax) printf("YES\n");
    }
    return 0;
}

