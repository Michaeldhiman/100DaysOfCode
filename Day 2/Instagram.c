#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    int i=1;
    int x;
    int y;
    while(i<=t){
        scanf("%d %d",&x,&y);
        if(x>10*y){
            printf("yes\n");
        }else{
            printf("no\n");
        }
        i++;
        
    }
}

