#include <stdio.h>

int main(){
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int no_of_rows,no_of_seatper_row;
        scanf("%d %d",&no_of_rows,&no_of_seatper_row);
        int count=0;
        for(int i=1;i<=no_of_rows;i++){
            if(i%2!=0){
                for(int j=1;j<=no_of_seatper_row;j++){
                    if(j%2!=0){
                    count++;
                    }
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

