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
        int even_count=0,odd_count=0;
        for(int i=0;i<length;i++){
            if(arr[i]==1) even_count++;
            else odd_count++;
        }
        if(even_count%2==0){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    return 0;	

}

