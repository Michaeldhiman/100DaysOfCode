#include <stdio.h>
#include<stdbool.h>
int main() {
    int test_case;
    scanf("%d\n",&test_case);
    while(test_case--){
        int total_animal;
        scanf("%d",&total_animal);
        int arr[total_animal];
        for(int i=0;i<total_animal;i++){
            scanf("%d",&arr[i]);
        }
        int count[100]={0};
        for(int i=0;i<total_animal;i++){
            count[arr[i]-1]++;
        }
        bool flag=true;
        for(int i=0;i<100;i++){
            if(count[i]%2!=0){
                flag=false;
                break;
            }
        }
        if(flag==true) printf("Yes\n");
        else printf("NO\n");
    }
    return 0;
}

