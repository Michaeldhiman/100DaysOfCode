#include <stdio.h>
int main(void) {
	int test_case,before_discount,after_discount;
	scanf("%d",&test_case);
	for(int i=1;i<=test_case;i++){
	    scanf("%d",&before_discount);
	    if(before_discount<=100) {
	     
	        after_discount=before_discount;
	    }
	    else if(before_discount>100 && before_discount<=1000){
	       
	        after_discount=before_discount-25;
	    }
	    else if(before_discount>1000 && before_discount<=5000){
	        after_discount=before_discount-100;
	    }
	    else {
	        after_discount=before_discount-500;
	    }
	    printf("%d\n",after_discount);
	}
}

