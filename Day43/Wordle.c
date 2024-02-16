#include <stdio.h>

int main(){
    int test_case;
    char hidden_word[6],guess_word[6],new_string[6];
    scanf("%d",&test_case);
    while(test_case--){
            scanf("%s",hidden_word);
            scanf("%s",guess_word);
           for(int i=0;i<5;i++){
               if(hidden_word[i]==guess_word[i]){
                   new_string[i]='G';
               }else{
                   new_string[i]='B';
               }
         }
      printf("%s\n",new_string);
        }
    return 0;
}

