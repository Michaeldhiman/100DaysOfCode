#include <stdio.h>

int main(){
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int number;
        scanf("%d",&number);
        
        int age[number];
        for(int i=0;i<number;i++){
            scanf("%d",&age[i]);
        }
        int eligible_women=0;
        for(int i=0;i<number;i++){
            if(age[i]>=10 && age[i]<=60){
                eligible_women++;
            }
        }
        printf("%d\n",eligible_women);
    }
    return 0;
}

