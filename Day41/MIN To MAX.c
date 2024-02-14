#include <stdio.h>

int main() {
    int test_case;
    scanf("%d", &test_case);

    while (test_case--) {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    int count=0;
    int minimum_element=1000000;
        for(int i=0;i<n;i++){
            if(arr[i]<minimum_element){
                minimum_element=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>minimum_element){
                count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
