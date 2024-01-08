#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
	int i=1;
	int x;
	while(i<=t){
	    scanf("%d",&x);
	    int first_discount=(x*10)/100;
	    int second_dicount=100;
	    if(first_discount>second_dicount){
	       printf("%d\n",first_discount);
	    }else{
	        printf("%d\n",second_dicount);
	    }
	    i++;
	}
}
