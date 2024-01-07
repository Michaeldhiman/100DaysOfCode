#include <stdio.h>
int main(void) {
        int t;
        scanf("%d",&t);
        int i=1;
        int x,y,z;
        int ans;
        while(i<=t){
            scanf("%d %d %d",&x,&y,&z);
            if(10*x>y){
                ans=y*z;
            }
            else{
                ans=10*x*z;
            }
            printf("%d\n",ans);
            i++;
        }
}

