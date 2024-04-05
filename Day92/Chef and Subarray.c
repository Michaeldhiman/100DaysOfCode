#include <stdio.h>

int main() {
        int length;
        scanf("%d",&length);
        int arr[length];
        for(int i=0;i<length;i++){
            scanf("%d",&arr[i]);
        }
        int count=0;
        int max_count=0;
        for(int i=0;i<length;i++){
            if(arr[i]!=0) count++;
            if(arr[i]==0){
                if(count>max_count) max_count=count;
                count=0;
            }else{
                 if(count>max_count) max_count=count;
            }
            
        }
        printf("%d\n",max_count);
    return 0;
}

