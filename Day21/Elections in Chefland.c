#include <stdio.h>

int main(void) {
    int test_case,total_people,target_age;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
        int count=0;
        scanf("%d %d",&total_people,&target_age);
        int age[total_people];
        for(int j=0;j<total_people;j++){
            scanf("%d",&age[j]);
        }
        for(int k=0;k<total_people;k++){
            if(age[k]>=target_age){
                count++;
            }
        }
        printf("%d\n",count);
    }
}

