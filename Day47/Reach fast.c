#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int coordinate_chef,coordinate_chefina,maximum_steps;
        scanf("%d %d %d",&coordinate_chef,&coordinate_chefina,&maximum_steps);
        int diff=coordinate_chefina-coordinate_chef;
        if(diff<0) diff*=(-1);
        int minimum_steps=(diff/maximum_steps);
        if(diff%maximum_steps!=0){
            minimum_steps++;
        }
        printf("%d\n",minimum_steps);
    }
    return 0;
}
