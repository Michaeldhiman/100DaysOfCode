#include <stdio.h>

int main() {
    int test_case,distance,minimum_time=0,bullet_speed,timeshould_taken;
    scanf("%d",&test_case);
    while(test_case--){
        scanf("%d %d %d",&bullet_speed,&distance,&timeshould_taken);
        minimum_time=timeshould_taken-(distance/bullet_speed);
        if(minimum_time<0) minimum_time=0;
        printf("%d\n",minimum_time);
    }
`   return 0;
}
