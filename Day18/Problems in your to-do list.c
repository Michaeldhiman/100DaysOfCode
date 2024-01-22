#include <stdio.h>

int main(void) {
    int test_case,no_of_element;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
        int count=0;
        scanf("%d",&no_of_element);
        int arr[no_of_element];
        for(int j=0;j<no_of_element;j++){
            scanf("%d",&arr[j]);
        }
        for(int k=0;k<no_of_element;k++){
            if(arr[k]>=1000){
                count++;
            }
        }
        printf("%d\n",count);
    }

}

