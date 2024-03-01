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
        
        int count;
        int max_count=0;
       for(int i=0;i<length;i++){
           count=1;
           for(int j=i+1;j<length;j++){
               if(arr[i]==arr[j]){
                   count++;
               }
           }
           if(count>max_count){
               max_count=count;
           }
       }
       int minimum_operations=length-max_count;
        printf("%d\n",minimum_operations);
    }
    return 0;
}

