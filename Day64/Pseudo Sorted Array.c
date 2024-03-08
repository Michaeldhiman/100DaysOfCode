#include <stdio.h>
#include<stdbool.h>
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
        int count=0;
        for(int i=0;i<length-1;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                count++;
            }
        }
        bool flag=true;
        for(int i=0;i<length-1;i++){
            if(arr[i]>arr[i+1]){
                flag=false;
                break;
              }       
            }
        if(count<=1 && flag==true) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}

