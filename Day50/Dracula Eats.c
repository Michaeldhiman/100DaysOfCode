#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int days_left;
        scanf("%d",&days_left);
        int days_tuesday=days_left/7;
        int remiaining_days=days_left%7;
        if(remiaining_days>=2) days_tuesday++;
        printf("%d\n",days_tuesday);
    }
    return 0;
}

