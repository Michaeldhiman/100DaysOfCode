#include <stdio.h>

int main(){
	int test_Case,total_candies,total_pocket,hold_candies;
	scanf("%d",&test_Case);
	while(test_Case--){
	    scanf("%d %d %d",&total_candies,&total_pocket,&hold_candies);
	    int minimum_bag=total_candies/(total_pocket*hold_candies);
	    if(total_candies%(total_pocket*hold_candies)!=0){
	        minimum_bag++;
	    }
	    printf("%d\n",minimum_bag);
	}
return 0;
}
