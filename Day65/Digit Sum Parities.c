#include <stdio.h>
#include<stdbool.h>
int digitSum(int num){
    int ans=0;
    while(num){
        int digit=num%10;
        ans+=digit;
        num/=10;
    }
    return ans;
}
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int number;
        scanf("%d",&number);
       int answer=digitSum(number);
       int i=number+1;
       int answer2=0;
       int value=0;
       while(true){
           answer2=digitSum(i);
           if((answer%2==0 && answer2%2!=0)||(answer%2!=0 && answer2%2==0)){
               value=i;
               break;
           }
           i++;
       }
      printf("%d\n",value);
    }
    return 0;
}

