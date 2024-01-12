#include <stdio.h>
int main(void) {    
    int test_case,no_of_assignment,days_for_completion;
    int minutes_to_complete;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
        scanf("%d %d %d ",&no_of_assignment,&minutes_to_complete,&days_for_completion);
    int total_minutes=days_for_completion*24*60;
    if(no_of_assignment*minutes_to_complete<=total_minutes){
        printf("yes\n");
    }else{
        printf("no\n");
    }
        
    }
}

