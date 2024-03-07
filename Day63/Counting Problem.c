#include <stdio.h>
#include<stdbool.h>
int main(){
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int element;
        scanf("%d",&element);
        int arr[element];
        for(int i=0;i<element;i++){
            scanf("%d",&arr[i]);
        }
        int  sum=0;
        bool flag=false;
        for(int i=0;i<element;i++){
            sum+=arr[i];
            if(arr[i]%2!=0)  flag=true;
        }
        if(sum%2==0 && flag==true) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}

