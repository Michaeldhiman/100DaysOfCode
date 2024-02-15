#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
       int cost_without_discount=0;
       for(int i=0;i<n;i++){
           cost_without_discount+=a[i];
       }
       int cost_with_discount=0;
       for(int i=0;i<n;i++){
           if(a[i]>y){
               a[i]-=y;
               cost_with_discount+=a[i];
           }
       }
       int total_costwith_discount=cost_with_discount+x;
           
           if(total_costwith_discount<cost_without_discount){
               printf("coupon\n");
            
           }else{
               printf("no coupon\n");
           }
       }
    

    return 0;
}
