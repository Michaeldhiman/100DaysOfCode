#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        long long max_distance=0;
        long long length,limit_on_element;
        scanf("%lld %lld",&length,&limit_on_element);
        long long  arr1[length];
        for(int i=0;i<length;i++){
            scanf("%lld",&arr1[i]);
        }
        long long max_element=limit_on_element;
        long long min_element=1;
        for(int i=0;i<length;i++){
            long long  d1=arr1[i]-max_element;
            if(d1<0) d1*=(-1);
            long long  d2=arr1[i]-min_element;
            if(d2<0) d2*=(-1);
            
            if(d1>d2) max_distance+=d1;
            else max_distance+=d2;
        }
        printf("%lld\n",max_distance);
        
    }
    return 0;
}

