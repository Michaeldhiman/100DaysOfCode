#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int total_problems,total_participants;
        scanf("%d %d",&total_problems,&total_participants);
        int arr[total_problems];
        for(int i=0;i<total_problems;i++){
            scanf("%d",&arr[i]);
        }
        int cake_walk=0;
        int hard=0;
        for(int i=0;i<total_problems;i++){
            if(arr[i]<=(total_participants/10)) hard++;
            else if(arr[i]>=(total_participants/2)) cake_walk++;
        }
        if(hard==2 && cake_walk==1) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}

