#include <stdio.h>

int main(void) {
	int test_case,total_bits;
	scanf("%d",&test_case);
	for(int i=1;i<=test_case;i++){
	    scanf("%d",&total_bits);
	    if(total_bits%4==0) printf("good\n");
	    else printf("not good\n");
	}

}

