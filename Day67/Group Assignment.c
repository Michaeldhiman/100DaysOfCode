#include <stdio.h>
#include<stdbool.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int total_peoples;
        scanf("%d",&total_peoples);
        int arr[total_peoples];
        for(int i=0;i<total_peoples;i++){
            scanf("%d",&arr[i]);
        }
        bool flag=false;
        for(int i=0;i<total_peoples;i++){
            int count=0;
            for(int j=0;j<total_peoples;j++){
                if(arr[i]==arr[j]) count++;
            }
            if(count%arr[i]==0){
                flag=true;
            }else{
                flag=false;
                break;
            }
            
        }
        if(flag==true) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}

