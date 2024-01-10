#include <stdio.h>

int main(void) {
	int test_case,gym_cost,chef_budget,personal_trainer;
	scanf("%d",&test_case);
	int i=1;
	while(i<=test_case){
	    scanf("%d %d %d ",&gym_cost,&personal_trainer,&chef_budget);
	   if(chef_budget>=gym_cost){
	       if(chef_budget>=personal_trainer+gym_cost){
	           printf("%d\n",2);
	       }else{
	           printf("%d\n",1);
	       }
	   }else{
	       printf("%d\n",0);
	   }
	    i++;
	}

}

