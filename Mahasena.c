#include <stdio.h>

int main(void) {
       int no_of_soldier;
        int count_lucky=0;
        int count_unlucky=0;
    scanf("%d",&no_of_soldier);
    for(int i=1;i<=no_of_soldier;i++){
        int no_of_weapons;
        scanf("%d",&no_of_weapons);
        if(no_of_weapons%2==0) count_lucky++;
        else count_unlucky++;
    }
        if(count_lucky>count_unlucky) printf("READY FOR BATTLE\n");
        else  printf("NOT READY\n");
        
}
