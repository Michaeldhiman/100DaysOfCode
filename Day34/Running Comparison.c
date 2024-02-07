#include <stdio.h>

int main() {
    int test_Case;
    scanf("%d", &test_Case);

    while (test_Case--) {
        int n;
        scanf("%d", &n);
        int alice_distance[n], bob_distance[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &alice_distance[i]);
        }
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &bob_distance[i]);
        }
    
int count_happy=0;
    int k=0;
while(k<n){
    if(alice_distance[k]<=2*bob_distance[k] && bob_distance[k]<=2*alice_distance[k]){
                  count_happy++;
              
        
    }
    k++;
    }
  printf("%d\n",count_happy);
  }

    return 0;
}
