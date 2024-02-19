#include<stdio.h>

int main(){
    int test_case;
    scanf("%d",&test_case);
    char string[1000];
   for(int i=0;i<=test_case;i++){
        gets(string);
        for(int i=1;string[i]!='\0';i++){
       
            if(string[i-1]==' '){
                if(string[i]>=97 && string[i]<=122){
                    string[i]-=32;
                }
            }
            else if(string[0]>=97 && string[0]<=122){
                    string[0]-=32;
                }

          
        }
        printf("%s\n",string);
    }
    return 0;
}
