#include <stdio.h>
#include<stdbool.h>
int main(void) {
	   int test_case,total_problems,marks_each,marks_needed;
	  scanf("%d",&test_case);
	  for(int i=1;i<=test_case;i++){
	      bool flag=false;
	      scanf("%d %d %d",&total_problems,&marks_each,&marks_needed);
	   for(int i=0;i<=total_problems;i++){
	       if(i*marks_each==marks_needed){
	           flag=true;
	          break;
	       }
	       
	   }
	   if(flag) printf("yes\n");
	   else printf("no\n");
	  }
}

