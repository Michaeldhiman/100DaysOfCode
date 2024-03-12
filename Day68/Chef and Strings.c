#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int times_pluck;
        scanf("%d",&times_pluck);
        int arr[times_pluck];
        for(int i=0;i<times_pluck;i++){
            scanf("%d",&arr[i]);
        }
        long long  total_skip=0;
        for(int i=1;i<times_pluck;i++){
            int string1=arr[i-1];
            int string2=arr[i];
            int string_skip=(string2-string1);
            if(string_skip<0) string_skip*=(-1);
            total_skip+=string_skip-1;
        }
        printf("%lld\n",total_skip);
    }
    return 0;
}

