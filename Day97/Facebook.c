#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        int max=0;
        int max_index=0;
        for(int i=0;i<n;i++){
            if(a[i]>max){
                max=a[i];
                max_index=i;
            }else if(a[i]==max){
                if(b[i]>b[max_index]){
                    max=a[i];
                    max_index=i;
                }
            }
        }
        printf("%d\n",max_index+1);
    }
    return 0;
}
