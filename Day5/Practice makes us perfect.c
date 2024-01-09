#include <stdio.h>
int main(void) {
        int first_week,second_week,third_week,fourth_week;
        scanf("%d %d %d %d",&first_week,&second_week,&third_week,&fourth_week);
        int  target_met=0;
        if(first_week>=10) target_met++;
        if(second_week>=10) target_met++;
        if(third_week>=10) target_met++;
        if(fourth_week>=10) target_met++;
        printf("%d\n",target_met);
}
