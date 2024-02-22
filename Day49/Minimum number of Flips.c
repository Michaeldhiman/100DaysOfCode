#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
            
        int n;
        scanf("%d",&n);
        
        
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        if(n%2==0){
        int one_count=0,minus_onecount=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1) one_count++;
            else minus_onecount++;
            
        }
        if(one_count==minus_onecount) printf("%d\n",0);
        else{
            int diff=one_count-minus_onecount;
            if(diff<0) diff*=(-1);
            int minimum_operation=diff/2;
           printf( "%d\n",minimum_operation);
        }
        }else{
            printf("%d\n",-1);
        }
    }
    return 0;
}

