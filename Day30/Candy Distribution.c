#include <stdio.h>

int main(){
    int testcase,total_candies,friends;
    scanf("%d",&testcase);
    while(testcase--){
        scanf("%d %d",&total_candies,&friends);
        int candies_each=total_candies/friends;
        if(total_candies%friends==0){
            if(candies_each%2==0) printf("yes\n");
            else printf("no\n");
        }
        else printf("no\n");
    }
    return 0;
}
