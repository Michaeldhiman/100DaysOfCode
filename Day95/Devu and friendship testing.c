#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int total_friends;
        scanf("%d",&total_friends);
        int arr[total_friends];
        for(int i=0;i<total_friends;i++){
            scanf("%d",&arr[i]);
        }
        int count[100]={0};
        for(int i=0;i<total_friends;i++){
            count[arr[i]-1]++;
        }
        int friend_save=0;
        for(int i=0;i<100;i++){
            if(count[i]>1) friend_save++;
            else friend_save+=count[i];
        }
        printf("%d\n",friend_save);
    }
    return 0;
}

