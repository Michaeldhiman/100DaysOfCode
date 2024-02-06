#include <stdio.h>

int main() {
int test_case,intial_temperature,final_temperature,hot_water,cold_water;
    scanf("%d",&test_case);
    while(test_case--){
        scanf("%d %d %d %d",&intial_temperature,&final_temperature,&hot_water,&cold_water);
        int remaining_temperature;
     if(final_temperature>=intial_temperature){
         remaining_temperature=final_temperature-intial_temperature;
         if(remaining_temperature<=hot_water) printf("yes\n");
         else printf("no\n");
     }else{
         remaining_temperature=intial_temperature-final_temperature;
         if(remaining_temperature<=cold_water) printf("yes\n");
         else printf("no\n");
     }
    }
    return 0;   
}

