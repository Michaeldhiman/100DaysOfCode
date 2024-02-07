#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x,total_cost=0;
        scanf("%d %d", &n, &x);
        int freshness[n], cost[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &freshness[i]);
        }
        
        for (int j = 0; j < n; j++) {
            scanf("%d", &cost[j]);
        }
      for(int k=0;k<n;k++){
          if(freshness[k]>=x){
              total_cost+=cost[k];
          }
      }
      printf("%d\n",total_cost);
    }
    return 0;

}
