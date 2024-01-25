#include <stdio.h>

int main() {
    int test_case,alice_temperature,bob_temperature,charlie_temperature;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
     scanf("%d %d %d",&alice_temperature,&bob_temperature,&charlie_temperature);
     if(alice_temperature<=bob_temperature && charlie_temperature<=bob_temperature){
         printf("yes\n");
     }else{
         printf("no\n");
     }
    }
    return 0;
}

