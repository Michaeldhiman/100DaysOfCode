#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        long long  total_number,break_time,problem_time;
        scanf("%lld %lld %lld",&total_number,&break_time,&problem_time);
        int count=0;
        long long total_time=0;
        int half_question;
        while(total_number){
            if(total_number%2==0){
                half_question=total_number/2;
                total_time+=half_question*problem_time;
                problem_time*=2;
                count++;
                total_number-=half_question;
            }else{
                half_question=(total_number+1)/2;
                total_number-=half_question;
                total_time+=half_question*problem_time;
                count++;
                problem_time*=2;
            }
        }
        total_time+=(count-1)*break_time;
        printf("%lld\n",total_time);
    }
    return 0;
}

