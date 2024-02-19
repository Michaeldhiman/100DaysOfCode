#include <stdio.h>

int main() {
    int teamA_run,teamB_runs,overs_done;
    scanf("%d %d %d",&teamA_run,&overs_done,&teamB_runs);
    int overs_remaining=20-overs_done;
    int runs_can_score=overs_remaining*6*6+teamB_runs;
    if(runs_can_score>teamA_run){
        printf("yes\n");
    }else{
        printf("no\n");
    }
    return 0;
}

