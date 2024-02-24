#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]!=0){
                printf("%d\n",i);
                break;
            }
        }
        
    }
    return 0;
}

