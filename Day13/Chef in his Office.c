#include <stdio.h>

int main(void) {
    int test_case,time_for_friday,working_hours;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
        scanf("%d %d",&working_hours,&time_for_friday);
        int total_working_hours=4*working_hours+time_for_friday;
        printf("%d\n",total_working_hours);
    }
}

