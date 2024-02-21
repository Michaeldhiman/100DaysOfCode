#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int boss_health,attack,special_attack;
        scanf("%d%d %d",&boss_health,&attack,&special_attack);
        int new_health=boss_health-special_attack;
        int minimum_attacks=(new_health/attack)+1;
        printf("%d\n",minimum_attacks);
    }
    return 0;
}

