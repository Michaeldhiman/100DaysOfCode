#include <stdio.h>

int main() {
	int test_case,noof_bottles,bottles_capacity,tank_capacity;
	scanf("%d",&test_case);
	while(test_case--){
	 scanf("%d %d %d",&noof_bottles,&bottles_capacity,&tank_capacity);
	  int maximum_bottles=0;
	 if(noof_bottles*bottles_capacity>=tank_capacity){
	     maximum_bottles=tank_capacity/bottles_capacity;
	 }else{
	     maximum_bottles=noof_bottles;
	 }
	  printf("%d\n",maximum_bottles);
	}
    return 0;
}

