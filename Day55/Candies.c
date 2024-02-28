#include<stdio.h>
#include<stdbool.h>
int main(){
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int cities;
        scanf("%d",&cities);
        int arr[2*cities];
        for(int i=0;i<(2*cities);i++){
            scanf("%d",&arr[i]);
        }
        int count;
        for(int i=0;i<(2*cities);i++){
 
             count=0;
            for(int j=0;j<(2*cities);j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            if(count>2){
             printf("no\n");
                   
                    break;
            }
            
         }
      if(count<=2) printf("yes\n");
      
    }
    return 0;
}

   
