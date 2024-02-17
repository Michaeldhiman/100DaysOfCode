#include <stdio.h>

int main(){
    int test_case,lowerlimit_of_sticks,sticks_in_plate,money_recieved;
    scanf("%d",&test_case);
    while(test_case--){
        scanf("%d %d %d",&lowerlimit_of_sticks,&sticks_in_plate,&money_recieved);
        int extra_sticks_eat=money_recieved/30;
        int total_sticks_eat=lowerlimit_of_sticks+extra_sticks_eat;
        int plates_order=total_sticks_eat/sticks_in_plate;
        if(total_sticks_eat%sticks_in_plate!=0) plates_order++;
        printf("%d\n",plates_order);
    }
    return 0;
}

