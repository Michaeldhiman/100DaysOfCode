#include <stdio.h>
int main(void) {
	int test_case,time_to_start;
	scanf("%d",&test_case);
	for(int i=1;i<=test_case;i++){
	    scanf("%d",&time_to_start);
	    int time_for_assignments=3*1;
	    int time_taken=(time_to_start+time_for_assignments)*60; 
	    //Multiply by 60 to convert hours in minutes
	    if(time_taken<=10*60){
	        printf("yes\n");
	    }else{
	        printf("no\n");
	    }
	}
}

