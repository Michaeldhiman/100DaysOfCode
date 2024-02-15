#include <stdio.h>

int main(){
    int test_case,chef_floor,chefina_floor;
    float chef_speed,chefina_speed;
    scanf("%d",&test_case);
    while(test_case--){
        scanf("%d %d %f %f",&chef_floor,&chefina_floor,&chef_speed,&chefina_speed);
        float chef_time=chef_floor/chef_speed;
        float chefina_time=chefina_floor/chefina_speed;
        if(chefina_time>chef_time){
            printf("chef\n");
        }
        else if(chef_time>chefina_time){
            printf("chefina\n");
        }else{
            printf("both\n");
        }
        
    }
    return 0;
}

