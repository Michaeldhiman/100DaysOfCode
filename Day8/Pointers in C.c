#include <stdio.h>

void update(int *a,int *b) {
    int temp=*a;
    int temp2=*b;
    int sum=temp+temp2;
    int differnce=temp-temp2;
    if(differnce<0) differnce=differnce*(-1); 
    *a=sum;
    *b=differnce;
   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
