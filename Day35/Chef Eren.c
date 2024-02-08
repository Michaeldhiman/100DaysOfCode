#include <stdio.h>

int main(){
    int test_case,total_episodes,even_episdoetime,odd_episodetime;
    scanf("%d",&test_case);
    while(test_case--){
        int count_even=0,count_odd=0,total_time;
   scanf("%d %d %d",&total_episodes,&even_episdoetime,&odd_episodetime);
   for(int i=1;i<=total_episodes;i++){
       if(i%2==0){
           count_even++;
       }else{
           count_odd++;
       }
   }
   total_time=count_even*even_episdoetime+count_odd*odd_episodetime;
   printf("%d\n",total_time);
    }
    return 0;
}

