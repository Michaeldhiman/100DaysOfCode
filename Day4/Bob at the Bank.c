#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    int i=1;
    int w,x,y,z,final;
    while(i<=t){
        scanf("%d %d %d %d",&w,&x,&y,&z);
        final=w+z*x-z*y;
        printf("%d\n",final);
        i++;
        
    }
}

