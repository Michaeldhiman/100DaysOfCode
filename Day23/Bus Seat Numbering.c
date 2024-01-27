#include <stdio.h>

int main() {
    int test_case,seat_number;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
        scanf("%d",&seat_number);
        if(seat_number>15){
            if(seat_number>25){
                printf("Upper Single\n");
            }else{
                printf("Upper Double\n");
                
            }
        }else{
            if(seat_number>10){
                printf("Lower Single\n");
            }else{
                printf("Lower Double\n");
                
            }
            
        }
    }
    return 0;

}

