#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int length, max_weigth;
        scanf("%d %d",&length,&max_weigth);
        int arr[length];
        for(int i=0;i<length;i++){
            scanf("%d",&arr[i]);
        }
        int count=0;
        int weight=0;
        for(int i=0;i<length;i++){
            
            if(arr[i]>max_weigth){
                count=-1;
                weight=0;
                break;
            }else{
                weight+=arr[i];
                if(weight>max_weigth){
                    count++;
                    weight=arr[i];
                }
            }
        }
        if(weight)count++;
        printf("%d\n",count);
    }
    return 0;

}

