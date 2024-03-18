#include <stdio.h>

int main() {
        int arr[4];
        for(int i=0;i<4;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=1;i<4;i++){
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
        
      
        if(arr[0]*arr[3]==arr[1]*arr[2]) printf("Possible\n");
        else printf("Impossible\n");
    
    return 0;
}

