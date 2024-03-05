#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
    int total_population;
    int infected_persons;
    scanf("%d %d",&total_population,&infected_persons);
    int not_infected=total_population-infected_persons;
        if(infected_persons>not_infected){
            printf("%d\n",not_infected);
        }else{
            printf("%d\n",infected_persons);
        }
    }
    return 0;
}
