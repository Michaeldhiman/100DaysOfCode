#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int dragon[3],sloth[3];
        for(int i=0;i<3;i++){
            scanf("%d",&dragon[i]);
        }
        for(int i=0;i<3;i++){
            scanf("%d",&sloth[i]);
        }
        int sum_dragon=0,sum_sloth=0;
        for(int i=0;i<3;i++){
            sum_dragon+=dragon[i];
            sum_sloth+=sloth[i];
        }
        if(sum_dragon>sum_sloth){
            printf("Dragon\n");
        }else if(sum_sloth>sum_dragon){
            printf("Sloth\n");
        }else{
            if(dragon[0]>sloth[0]){
                printf("Dragon\n");
            }
            else if(dragon[0]<sloth[0]){
                printf("Sloth\n");
            }else{
                if(dragon[1]>sloth[1]){
                    printf("Dragon\n");
                }
                else if(dragon[1]<sloth[1]){
                    printf("Sloth\n");
                }else{
                    if(dragon[2]>sloth[2]){
                        printf("Dragon\n");
                    }
                    else if(dragon[2]<sloth[2]){
                        printf("Sloth\n");
                    }else
                    {
                        printf("Tie\n");
                    }
                }
            }
        }
    }
    return 0;
}

