#include <stdio.h>
int main(void) {
        int t;
        scanf("%d",&t);
        int i=1;
        int n,x,c;
        while(i<=t){
            scanf("%d %d",&n,&x);
            c=n/(3*x);
            printf("%d\n",c);
            i++;
        }
}
