#include <stdio.h>

int main(void) {
	int test_case,no_of_friends,slices_want,no_of_pizza,total_slices;
	scanf("%d",&test_case);
	for(int i=1;i<=test_case;i++){
	    scanf("%d %d",&no_of_friends,&slices_want);
	    total_slices=no_of_friends*slices_want;
	    no_of_pizza=total_slices/4;
	    if(total_slices%4!=0) no_of_pizza=no_of_pizza+1;
	    printf("%d\n",no_of_pizza);
	}
}

