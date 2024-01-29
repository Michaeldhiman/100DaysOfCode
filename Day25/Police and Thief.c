#include <stdio.h>

int main() {
    int test_case,policeman_intial,thief_intial;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
        scanf("%d %d",&policeman_intial,&thief_intial);
        int time_taken=0;
        while(policeman_intial!=thief_intial){
            if(policeman_intial>thief_intial){
            thief_intial=thief_intial+1;
            time_taken++;
            }else{
            policeman_intial=policeman_intial+2;
            thief_intial=thief_intial+1;
            time_taken++;
            }
        }
        printf("%d\n",time_taken);
    }
	return 0;
}

