#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int berth_number;
        scanf("%d",&berth_number);
        switch(berth_number%8){
            case 0:
            printf("%dSL\n",berth_number-1);
            break;
            case 1:
            printf("%dLB\n",berth_number+3);
            break;
            case 2:
            printf("%dMB\n",berth_number+3);
            break;
            case 3:
            printf("%dUB\n",berth_number+3);
            break;
            case 4:
            printf("%dLB\n",berth_number-3);
            break;
            case 5:
            printf("%dMB\n",berth_number-3);
            break;
            case 6:
            printf("%dUB\n",berth_number-3);
            break;
            case 7:
            printf("%dSU\n",berth_number+1);
            break;
        }
    }
    return 0;
}

