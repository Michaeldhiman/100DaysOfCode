#include <stdio.h>

int main() {
    int test_case,tastiness_a,tastiness_b,tastiness_c,tastiness_d;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
    scanf("%d %d %d %d",&tastiness_a,&tastiness_b,&tastiness_c,&tastiness_d);
    int maximum_tastiness=tastiness_a+tastiness_c;
    if(tastiness_a+tastiness_d>maximum_tastiness){
        maximum_tastiness=tastiness_a+tastiness_d;
    }
    if(tastiness_b+tastiness_c>maximum_tastiness){
        maximum_tastiness=tastiness_b+tastiness_c;
    }
    if(tastiness_b+tastiness_d>maximum_tastiness){
        maximum_tastiness=tastiness_b+tastiness_d;
    }
    printf("%d\n",maximum_tastiness);
    }
	return 0;
}

