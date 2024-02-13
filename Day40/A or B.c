#include <stdio.h>

int main() {
    int test_case,time_for_a,time_for_b;
    scanf("%d",&test_case);
    while(test_case--){
        scanf("%d %d",&time_for_a,&time_for_b);
        // chef attempt A first then B
        int pointforA=500-(2*time_for_a);
        int newtime_forB=time_for_b+time_for_a;
        int pointforB=1000-(4*newtime_forB);
        int total_points1=pointforB+pointforA;
        // chef attempt b first then A
        int pointforB_2=1000-(4*time_for_b);
        int newtime_forA=time_for_b+time_for_a;
        int pointforA_2=500-(2*newtime_forA);
        int total_points2=pointforA_2+pointforB_2;
        
        if(total_points1>total_points2){
            printf("%d\n",total_points1);
        }else{
            printf("%d\n",total_points2);
        }
    }
    return 0;
}

