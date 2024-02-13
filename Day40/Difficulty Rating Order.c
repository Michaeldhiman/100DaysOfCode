#include <stdio.h>
#include<stdbool.h>

int main() {
    int test_case;
    scanf("%d", &test_case);

    while (test_case--) {
        int n;
        scanf("%d", &n);
        int difficulty[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &difficulty[i]);
        }
        bool flag=false;
        for(int i=1;i<n;i++){
            if(difficulty[i]<difficulty[i-1]){
                flag=true;
                break;
            }
        }
        if(flag){
            printf("no\n");
        }else{
            printf("yes\n");
        }
    }
  return 0;
}
