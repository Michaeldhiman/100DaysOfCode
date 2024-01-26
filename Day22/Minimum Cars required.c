#include <stdio.h>

int main() {
	int test_case,minimum_cars,total_friends;
	scanf("%d",&test_case);
	for(int i=1;i<=test_case;i++){
	    scanf("%d",&total_friends);
	    minimum_cars=total_friends/4;
	    if(total_friends%4!=0) minimum_cars+=1;
	    printf("%d\n",minimum_cars);
	}
	return 0;

}

