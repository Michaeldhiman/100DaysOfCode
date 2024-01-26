#include <stdio.h>

int main() {
        int test_case,time_bike,time_car;
        scanf("%d",&test_case);
        for(int i=1;i<=test_case;i++){
            scanf("%d %d",&time_bike,&time_car);
            if(time_bike>time_car) printf("car\n");
            else if(time_car>time_bike) printf("bike\n");
            else printf("same\n");
        }
}

