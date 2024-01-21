#include <stdio.h>

int main(void) {
    int test_case,pulp,count_notebook;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
        scanf("%d",&pulp);
        int total_pages=pulp*1000;
        count_notebook=total_pages/100;
        printf("%d\n",count_notebook);
    }
}
