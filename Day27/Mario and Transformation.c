#include <stdio.h>

int main() {
	int test_case,eat_mushroom;
	scanf("%d",&test_case);
	while(test_case--){
	    scanf("%d",&eat_mushroom);
	    switch(eat_mushroom%3){
	        case 0:
	            printf("Normal\n");
	            break;
	        case 1:
	            printf("huge\n");
	            break;
	        case 2:
	            printf("small\n");
	            break;
	           
	    }
	  
	}
	return 0;
}

