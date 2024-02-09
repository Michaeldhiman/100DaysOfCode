#include <stdio.h>

int main(){
    int test_case,total_passengers,aircraft_operates;
    scanf("%d",&test_case);
    while(test_case--){
        scanf("%d %d",&aircraft_operates,&total_passengers);
        int aircraft_needed;
      if(total_passengers%100==0){
          aircraft_needed=total_passengers/100;
      }else{
          aircraft_needed=(total_passengers/100)+1;
      }
      if(aircraft_needed>=aircraft_operates){
        int new_planes=aircraft_needed-aircraft_operates;
        printf("%d\n",new_planes);
      }else{
        printf("%d\n",0);
          
      }
       
    }
    return 0;
}

