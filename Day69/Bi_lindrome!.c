
#include <stdio.h>
#include<stdbool.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int length;
        scanf("%d",&length);
        char str[length];
        scanf("%s",str);
        int count=0;
        int diff=0;
        bool flag=false;
       for(int i=0;i<length;i++){
           for(int j=i+1;j<length;j++){
               if(str[i]==str[j]){
                flag=true;
                break;
               }
           }
               
       }
       if(flag) printf("%d\n",length-2);
       else printf("%d\n",-1);
     
        
    }
    return 0;
}

