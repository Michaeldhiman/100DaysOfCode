#include<stdio.h>
int main(){
    int test_case;
    printf("Enter the no of Test cases:\n");
    scanf("%d",&test_case);
    while(test_case--){
        long long int number;
        printf("Enter the Number:\n");
        scanf("%lld",&number);
        long long int sqrt=0;
        long long int i=1;
        while(i*i<=number){
            sqrt=i;
            i++;
        }
        printf("The Square Root of %lld is %lld",number,sqrt);
    }
    return 0;
}
