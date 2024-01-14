#include <stdio.h>

int main(void) {
    int test_case,mango_weight,truck_weight,bridge_max_weight;
    int no_of_mangoes;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
      scanf("%d %d %d",&mango_weight,&truck_weight,&bridge_max_weight);
      no_of_mangoes=(bridge_max_weight-truck_weight)/mango_weight;
      printf("%d\n",no_of_mangoes);
    
    }
    
}
