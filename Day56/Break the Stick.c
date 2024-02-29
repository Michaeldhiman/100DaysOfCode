#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int length,required_length;
        scanf("%d %d",&length,&required_length);
      if(length%2==0){
          printf("yes\n");
      }else{
          if(length%2!=0 && required_length%2!=0){
              printf("yes\n");
          }else{
              printf("no\n");
          }
      }
        
    }
    return 0;
}

