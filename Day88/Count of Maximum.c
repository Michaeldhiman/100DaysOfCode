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
       int max_count=0;
       int value=0;
       for(int i=0;i<length;i++){
            int count=1;
           for(int j=i+1;j<length;j++){
               if(arr[i]==arr[j]) count++;
           }
           if(count>max_count){
               max_count=count;
               value=arr[i];
           }else if(count==max_count){
               if(value>arr[i]) value=arr[i];
           }
       }
       printf("%d %d\n",value,max_count);
        
    }
    return 0;
}

