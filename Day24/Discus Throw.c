#include <stdio.h>

int main() {
    int test_case,distance_1,distance_2,distance_3,final_score;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
        scanf("%d %d %d",&distance_1,&distance_2,&distance_3);
        if(distance_1>=distance_2 && distance_1>=distance_3){
            final_score=distance_1;
        }
        else if(distance_2>=distance_1 && distance_2>=distance_3){
            final_score=distance_2;
        }else{
            final_score=distance_3;
        }
        printf("%d\n",final_score);
    }
    return 0;
}

