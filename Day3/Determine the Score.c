#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
	int i=1;
	int x;
	int score;
	int n;
	while(i<=t){
	    scanf("%d %d",&x,&n);
	    score=n*(x/10);
	    printf("%d\n",score);
	    i++;
	}
}

