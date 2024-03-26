#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int total_enemies,attack;
        scanf("%d %d",&total_enemies,&attack);
        int health[total_enemies];
        for(int i=0;i<total_enemies;i++){
            scanf("%d",&health[i]);
        }
        //Single-Target mode
        int stm_second=0;
        int sum=0;
        for(int i=0;i<total_enemies;i++){
            sum+=health[i];
            stm_second+=health[i]/attack;
            if(health[i]%attack!=0) stm_second++;
        }
        //Multi -target mode
        int Multi_second=0;
        int total_health=sum;
        while(total_health!=0){
            total_health=0;
            for(int i=0;i<total_enemies;i++){
                health[i]-=1;
                if(health[i]<0) health[i]=0;
                total_health+=health[i];
            }
            Multi_second++;
        }
        if(stm_second<Multi_second) printf("%d\n",stm_second);
        else printf("%d\n",Multi_second);
    }
    return 0;
}

