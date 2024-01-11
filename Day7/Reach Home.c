#include <stdio.h>

int main(void) {
    int test_case,fuel_filled,home_away,kilometer_travel;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
        scanf("%d %d",&fuel_filled,&home_away);
        kilometer_travel=5*fuel_filled;
        if(kilometer_travel<home_away){
            printf("no\n");
        }else{
            printf("yes\n");
        }
    }
}

