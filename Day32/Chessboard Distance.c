#include <stdio.h>

int main(){
    int test_Case,x1,y1,x2,y2;
    scanf("%d",&test_Case);
    while(test_Case--){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        int distance_1=x1-x2;
        if(distance_1<0) distance_1=distance_1*(-1);
        int distance_2=y1-y2;
        if(distance_2<0) distance_2=distance_2*(-1);
        int ans;
        if(distance_1<distance_2) ans=distance_2;
        else ans=distance_1;
        printf("%d\n",ans);
    }
    return 0;
}

