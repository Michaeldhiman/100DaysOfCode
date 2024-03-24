#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int intial_position_1,intial_position_2;
        int final_position_1,final_position_2;
        scanf("%d %d %d %d",&intial_position_1,&intial_position_2,&final_position_1,&final_position_2);
        int diff_coordinate=(intial_position_1-final_position_1)+(intial_position_2- final_position_2);
        if(diff_coordinate<0) diff_coordinate*=(-1);
        if(diff_coordinate%2==0) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}

