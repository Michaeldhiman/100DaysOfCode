#include <stdio.h>

int main(){
    int test_case,chef_race1,chef_race2,chef_rival_race1,chef_rival_race2;
    scanf("%d",&test_case);
    while(test_case--){
        scanf("%d %d %d %d",&chef_race1,&chef_race2,&chef_rival_race1,&chef_rival_race2);
        int maximum_chef_wins=0;
        if(chef_race1!=chef_rival_race1 && chef_race1!=chef_rival_race2){
            maximum_chef_wins++;
        } 
        if(chef_race2!=chef_rival_race2 && chef_race2!=chef_rival_race1){
        maximum_chef_wins++;
        } 
        printf("%d\n",maximum_chef_wins);
    }
    return 0;
}

