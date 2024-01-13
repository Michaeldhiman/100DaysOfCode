#include <stdio.h>

int main(void) {
	int test_case,chocolate_cost,chocolate_have,total_chocolate;
	scanf("%d",&test_case);
	for(int i=1;i<=test_case;i++){
	    scanf("%d %d %d",&total_chocolate,&chocolate_have,&chocolate_cost);
	   int chocolate_remaining=total_chocolate-chocolate_have;
	   int money_needed=chocolate_remaining*chocolate_cost;
	   printf("%d\n",money_needed);
	}
	
}

