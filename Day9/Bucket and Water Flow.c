#include <stdio.h>

int main(void) {
        int test_case,intial_water,maximum_capacity,rate_of_flow,time;
        scanf("%d",&test_case);
        for(int i=1;i<=test_case;i++){
            scanf("%d %d %d %d",&intial_water,&maximum_capacity,&rate_of_flow,&time);
            int final_water=intial_water+rate_of_flow*time;
            if(final_water>maximum_capacity) printf("overflow\n");
            else if(final_water<maximum_capacity) printf("unfilled\n");
            else printf("filled\n");
        }

}
