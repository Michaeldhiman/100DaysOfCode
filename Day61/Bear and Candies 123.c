#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int most_candies_limak,most_candies_bob;
        scanf("%d %d",&most_candies_limak,&most_candies_bob);
       int limak_count=1,bob_count=2;
       int limak_candies=0,bob_candies=0;
       while((limak_count+limak_candies)<=most_candies_limak){
            limak_candies+=limak_count;
            limak_count+=2;
       }
       while((bob_count+bob_candies)<=most_candies_bob){
           bob_candies+=bob_count;
           bob_count+=2;
       }
       if(limak_candies>bob_candies){
           printf("Limak\n");
       }else{
           printf("Bob\n");
       }
       
    }
    return 0;
}

