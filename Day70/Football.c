#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int total_players;
        scanf("%d",&total_players);
        int goals[total_players],fouls[total_players];
        for(int i=0;i<total_players;i++){
            scanf("%d",&goals[i]);
        }
        for(int i=0;i<total_players;i++){
            scanf("%d",&fouls[i]);
        }
        int resultant[total_players];
        int best_player_score=0;
        for(int i=0;i<total_players;i++){
            resultant[i]=20*goals[i]-10*fouls[i];
            if(resultant[i]<0) resultant[i]=0;
            if(resultant[i]>best_player_score){
                best_player_score=resultant[i];
            }
        }
        printf("%d\n",best_player_score);
    }
    return 0;
}

