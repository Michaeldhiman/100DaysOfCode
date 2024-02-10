#include <stdio.h>

int main() {
	int test_case,chef_room,chefina_room;
	scanf("%d",&test_case);
	while(test_case--){
	    scanf("%d %d",&chef_room,&chefina_room);
	    int chef_floor=chef_room/10;
	    if(chef_room%10!=0) chef_floor=chef_floor+1;
	    int chefina_floor=chefina_room/10;
	    if(chefina_room%10!=0) chefina_floor=chefina_floor+1;
	    int floor_travel=chefina_floor-chef_floor;
	    if(floor_travel<0) floor_travel*=(-1);
	    printf("%d\n",floor_travel);
	}
    return 0;
}

