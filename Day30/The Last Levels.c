#include <stdio.h>

int main(){
    int testcase,level_remaining,eachlevel_time,break_time;
    scanf("%d",&testcase);
    while(testcase--){
    scanf("%d %d %d",&level_remaining,&eachlevel_time,&break_time);
        int total_time,count=0;
        for(int i=1;i<level_remaining;i++){
            if(i%3==0) count++;
        }
        total_time=level_remaining*eachlevel_time+count*break_time;
        printf("%d\n",total_time);
    }
    return 0;
}

