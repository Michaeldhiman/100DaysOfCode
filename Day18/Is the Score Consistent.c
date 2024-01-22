#include <stdio.h>

int main(){
	int test_case,intial_score_1,intial_score_2,final_score_1,final_score_2;
	scanf("%d",&test_case);
	for(int i=1;i<=test_case;i++){
	 scanf("%d %d %d %d",&intial_score_1,&intial_score_2,&final_score_1,&final_score_2);
  if(final_score_1>=intial_score_1 && final_score_2>=intial_score_2){
	     printf("possible\n");
  }else{
      
	     printf("impossible\n");
  }
	}
    
    return 0;
}
