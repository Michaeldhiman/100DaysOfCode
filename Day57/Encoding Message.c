#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int length;
        scanf("%d",&length);
        char str[length];
        scanf("%s",str);
        if(length%2==0){
            for(int i=0;i<length;i+=2){
                char temp=str[i+1];
                str[i+1]=str[i];
                str[i]=temp;
            }
        }else{
             for(int i=0;i<length-1;i+=2){
                char temp=str[i+1];
                str[i+1]=str[i];
                str[i]=temp;
            }
        }
        for(int i=0;i<length;i++){
           char temp=str[i];
           temp=122+97-str[i];
           str[i]=temp;
        }
        printf("%s\n",str);
    }
    return 0;
}

