#include <stdio.h>

int main(void) {
    int test_case,cred_earned,bills_pays,no_of_bags;
    scanf("%d",&test_case);
    int i=1;
    while(i<=test_case){
        scanf("%d %d ",&cred_earned,&bills_pays);
        no_of_bags=(cred_earned*bills_pays)/100;
        printf("%d\n",no_of_bags);
        i++;
    }
}

