#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int prize;
        scanf("%d",&prize);
        char championship[15];
        scanf("%s",championship);
        int total_prize=100*prize;
        int chef_points=0;
        int carlsen_points=0;
        for(int i=0;championship[i]!='\0';i++){
            if(championship[i]=='N'){
                chef_points+=2;
            }else if(championship[i]=='C'){
                carlsen_points+=2;
            }else{
                chef_points++;
                carlsen_points++;
            }
        }
        int carlsen_received=0;
        if(chef_points>carlsen_points){
            carlsen_received+=40*prize;
        }else if(carlsen_points>chef_points){
            carlsen_received+=60*prize;
        }else{
            carlsen_received+=55*prize;
        }
        printf("%d\n",carlsen_received);
    }
    return 0;
}

