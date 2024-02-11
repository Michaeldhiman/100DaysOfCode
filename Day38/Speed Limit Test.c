#include <stdio.h>

int main(){
    int test_case,alice_time,bob_time;
    float alice_distance,bob_distance;
    scanf("%d",&test_case);
    while(test_case--){
        scanf("%f %d %f %d",&alice_distance,&alice_time,&bob_distance,&bob_time);
        float alice_Speed=alice_distance/alice_time;
        float  bob_speed=bob_distance/bob_time;
        if(alice_Speed>bob_speed){
            printf("alice\n");
        }
        else if(alice_Speed<bob_speed){
            printf("bob\n");
        }else{
            printf("equal\n");
        }
    }
    return 0;
}

