#include <stdio.h>
#include <limits.h>
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

    int max=INT_MIN;
    int second_max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
     for(int j=0;j<n;j++){
        if(arr[j]>second_max && arr[j]!=max){
            second_max=arr[j];
        }
    }
    int sum=max+second_max;
    printf("%d\n",sum);
}
    return 0;
}
