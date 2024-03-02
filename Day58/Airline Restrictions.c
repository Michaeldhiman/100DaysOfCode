#include <stdio.h>

int main(void) {
	int test_case;
	scanf("%d",&test_case);
	while(test_case--){
	    int weigth_a,weight_b,weight_c,checked_weight_limit,carry_weight_limit;
	    scanf("%d %d %d %d %d",&weigth_a,&weight_b,&weight_c,&checked_weight_limit,&carry_weight_limit);
	 if(weigth_a+weight_b<=checked_weight_limit && weight_c<=carry_weight_limit){
	     printf("yes\n");
	 }else if(weight_b+weight_c<=checked_weight_limit && weigth_a<=carry_weight_limit){
	     printf("yes\n");
	 }else if(weigth_a+weight_c<=checked_weight_limit && weight_b<=carry_weight_limit){
	     printf("yes\n");
	 }else{
	     printf("no\n");
	   }
	}
	return 0;
}

