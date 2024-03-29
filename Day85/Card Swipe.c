#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int no_of_swipes;
        scanf("%d",&no_of_swipes);
        int arr[no_of_swipes];
        for(int i=0;i<no_of_swipes;i++){
            scanf("%d",&arr[i]);
        }
        int mark[no_of_swipes+1];
        for(int i=0;i<=no_of_swipes;i++){
            mark[i]=0;
        }
        int max_count=0;
        int count=0;
        for(int i=0;i<no_of_swipes;i++){
            if(mark[arr[i]-1]==0){
                mark[arr[i]-1]=1;
                count++;
            }else{
                mark[arr[i]-1]=0;
                count--;
            }
            if(count>max_count){
                max_count=count;
            }
        }
        printf("%d\n",max_count);
        
        
    }
    return 0;
}

