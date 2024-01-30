#include <stdio.h>

int main(){
    int test_case,geyser_capacity,bucket_capacity;
    scanf("%d",&test_case);
    while(test_case--){
        scanf("%d %d",&geyser_capacity,&bucket_capacity);
        int bucket_number=geyser_capacity/bucket_capacity;
        int no_of_people=bucket_number/2;
        printf("%d\n",no_of_people);
        
    }
    return 0;
}

