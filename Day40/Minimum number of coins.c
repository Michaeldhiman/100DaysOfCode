#include <stdio.h>

int main(){
    int test_case,rupees;
    scanf("%d",&test_case);
    while(test_case--){
        scanf("%d",&rupees);
        int minimum_notes=0;
        if(rupees%5==0 || rupees%10==0){
            if(rupees%10==0){
                minimum_notes=rupees/10;
            }else{
                int ten_notes=rupees/10;
                rupees-=(ten_notes*10);
                int five_notes=rupees/5;
                minimum_notes=ten_notes+five_notes;
            }
            printf("%d\n",minimum_notes);
        }else{
            printf("%d\n",-1);
        }
    }
    return 0;
}

