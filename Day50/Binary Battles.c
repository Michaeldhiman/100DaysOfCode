#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int total_teams,completion_time,break_time;
        scanf("%d %d %d",&total_teams,&completion_time,&break_time);
        
        int total_round=0;
        while(total_teams>1){
            total_teams=total_teams/2;
            total_round++;
        }
        int total_time=total_round*completion_time+(total_round-1)*break_time;
        printf("%d\n",total_time);
    }
    return 0;
}

