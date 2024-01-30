#include <stdio.h>

int main(){
    int test_case,total_friends,left_shoes;
    scanf("%d",&test_case);
    while(test_case--){
        scanf("%d %d",&total_friends,&left_shoes);
        int extra_pairs;
   int left_pair_needed=total_friends,right_pair_needed=total_friends;
        if(left_shoes>=left_pair_needed){
            extra_pairs=right_pair_needed;
        }else{
            extra_pairs=(left_pair_needed-left_shoes)+right_pair_needed;
            
        }
        printf("%d\n",extra_pairs);
    }
    return 0;
}

        

