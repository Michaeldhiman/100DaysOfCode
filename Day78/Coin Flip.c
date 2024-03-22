#include <stdio.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int games_played;
        scanf("%d",&games_played);
        while(games_played--){
        int initial_state,final_state,round_played;
        scanf("%d %d %d",&initial_state,&round_played,&final_state);
        int tail=0,head=0;
        if(initial_state==1){
            tail=(round_played+1)/2;
            head=round_played-tail;
        }else{
            head=(round_played+1)/2;
            tail=round_played-head;
        }
        if(final_state==1) printf("%d\n",head);
        else printf("%d\n",tail);
        
        
        }
    }
    return 0;
}

