#include <stdio.h>

int main() {
    int max_lead=0,winner=0;
    int test_case;
    scanf("%d",&test_case);
    int p1_cum_score=0,p2_cum_score=0;
    while(test_case--){
        int lead=0,round_winner;
        int  player_1score,player_2score;
        scanf("%d %d",&player_1score,&player_2score);
        p1_cum_score+=player_1score;
        p2_cum_score+=player_2score;
        if(p1_cum_score>p2_cum_score){
            lead=p1_cum_score-p2_cum_score;
            if(lead>max_lead){
                winner=1;
                max_lead=lead;
            }
        }else{
            lead=p2_cum_score-p1_cum_score;
            if(lead>max_lead){
                winner=2;
                max_lead=lead;
            }
        }
    }
    printf("%d %d",winner,max_lead);
    return 0;
}
