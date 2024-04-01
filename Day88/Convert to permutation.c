#include <stdio.h>
#include<stdbool.h>
int main() {
    int test_Case;
    scanf("%d",&test_Case);
    while(test_Case--){
        int number;
        scanf("%d",&number);
        int arr[number];
        for(int i=0;i<number;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=1;i<number;i++){
            for(int j=i;j>0;j--){
                if(arr[j]<arr[j-1]){
                    int temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                }else{
                    break;
                }
            }
        }
        bool flag=true;
        int count=0;
        for(int i=0;i<number;i++){
            if(arr[i]<i+1){
                count+=(i+1)-arr[i];
            }
            else if(arr[i]>i+1){
                flag=false;
                break;
            }
        }
        if(flag==false) printf("%d\n",-1);
        else printf("%d\n",count);
    }
    return 0;
}

