#include <stdio.h>

int main(){
    int test_Case,total_rupees,chocolate_cost;
    scanf("%d",&test_Case);
    while(test_Case--){
        scanf("%d %d",&total_rupees,&chocolate_cost);
        int no_of_chocolate=total_rupees/chocolate_cost;
        printf("%d\n",no_of_chocolate);
    }
    return 0;
}

