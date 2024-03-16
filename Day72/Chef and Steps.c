#include <stdio.h>
#include<string.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int  distance,step_length;
        scanf("%d %d",&distance,&step_length);
        long long arr[distance];
        for(long long  i=0;i<distance;i++){
            scanf("%lld",&arr[i]);
        }
        char str[distance+1];
        for(long long i=0;i<distance;i++){
            if(arr[i]%step_length==0){
                str[i]='1';
            }else{
                str[i]='0';
            }
        }
        str[distance]='\0';
        printf("%s\n",str);
    }
    return 0;
}

