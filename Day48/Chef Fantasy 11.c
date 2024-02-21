#include <stdio.h>
int factorial(int n){
    int fact=1;
    if(n==0 || n==1) return 1;
    else{
   while(n>1){
       fact*=n;
       n--;
    }
    return fact;
   }
}
int combination(int n, int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int players_choosen;
        scanf("%d",&players_choosen);
      int possible_ways= 2*(combination(players_choosen,2));
      printf("%d\n",possible_ways);
    }
	return 0;
}

