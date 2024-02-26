#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int total_money,total_people;
        scanf("%d %d",&total_people,&total_money);
        int money[total_people];
        for(int i=0;i<total_people;i++){
            scanf("%d",&money[i]);
        }
        char money2[total_people+1];
        for(int i=0;i<total_people;i++){
            if(total_money>=money[i]){
                money2[i]='1';
                total_money=total_money-money[i];
            }else{
                money2[i]='0';
            }
          
        }
      for(int i=0;i<total_people;i++){
          printf("%c",money2[i]);
      }
      printf("\n");
    }
    return 0;
}

