#include <stdio.h>

int main() {
    int test_case,stair_X,step_taken;
    scanf("%d",&test_case);
    while(test_case--){
        int minimum_steps=0;
        scanf("%d %d",&stair_X,&step_taken);
        int current_position=0;
        while(current_position!=stair_X){
            int remaining_steps=stair_X-current_position;
            if(remaining_steps<step_taken) step_taken=1;
            current_position+=step_taken;
            minimum_steps++;
        }
        printf("%d\n",minimum_steps);
    }
    return 0;
}

