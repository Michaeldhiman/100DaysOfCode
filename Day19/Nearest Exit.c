#include <stdio.h>

int main(void) {
    int test_case,passenger_seat;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
        scanf("%d",&passenger_seat);
        if(passenger_seat<=50) printf("left\n");
        else if(passenger_seat>50) printf("right\n");
        
        
    }

}
