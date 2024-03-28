#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int length,initial_people;
        scanf("%d %d",&length,&initial_people);
        int arr[length];
        for(int i=0;i<length;i++){
            scanf("%d",&arr[i]);
        }
        int total_people=initial_people;
        for(int i=0;i<length;i++){
            initial_people+=arr[i];
            if(initial_people>total_people){
                total_people=initial_people;
            }
        }
        printf("%d\n",total_people);
    }
    return 0;
}

