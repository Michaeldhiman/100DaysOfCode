#include <stdio.h>

int main() {
    int test_case,cards_faceup,total_cards;
    scanf("%d",&test_case);
    while(test_case--){
      scanf("%d %d",&total_cards,&cards_faceup);
      int cards_facedown=total_cards-cards_faceup;
    int minimum_operations;
    if(cards_facedown>cards_faceup){
        minimum_operations=cards_faceup;
    }else{
        minimum_operations=cards_facedown;
    }
      printf("%d\n",minimum_operations);
    }
    return 0;

}

