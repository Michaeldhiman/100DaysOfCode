#include <stdio.h>

int main(void) {
	int testcase,referee_1,referee_2,referee_3,referee_4;
	scanf("%d",&testcase);
	for(int i=1;i<=testcase;i++){
	   scanf("%d %d %d %d",&referee_1,&referee_2,&referee_3,&referee_4);
	   if(referee_1==0 && referee_2==0 && referee_3==0 && referee_4==0){
	       printf("in\n");
	   }else{
	       printf("out\n");
	   }
	}
}

