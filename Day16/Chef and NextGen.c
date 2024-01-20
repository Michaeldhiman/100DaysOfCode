#include <stdio.h>

int main(void) {
    int test_case,helium_gram,unit_produce,year,unit_produce_peryear;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
      scanf("%d %d %d %d",&unit_produce_peryear,&year,&helium_gram,&unit_produce);
        int total_units_produced=helium_gram*unit_produce;
        int unit_needed=year*unit_produce_peryear;
        if(total_units_produced>=unit_needed){
            printf("yes\n");
        }else{
            printf("no\n");
        }
        
    }

}

