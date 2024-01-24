#include <stdio.h>

int main() {
    int test_case,easy_problem,hard_problem,points_needed;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
        scanf("%d %d %d",&points_needed,&easy_problem,&hard_problem);
        int total_points=easy_problem*1+hard_problem*2;
        if(total_points>=points_needed) printf("Qualify\n");
        else printf("NotQualify\n");
    }
        return 0;

}

