#include <stdio.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int max_number,number;
        scanf("%d %d",&max_number,&number);
        if(number<=max_number) printf("%d\n",number);
        else {
            int ans=0;
            while(number>max_number){
                number=number-max_number-1;
                ans=number;
            }
            printf("%d\n",ans);
        }
      
    }
    return 0;
}

