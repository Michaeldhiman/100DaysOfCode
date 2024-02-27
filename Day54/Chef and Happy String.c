#include <stdio.h>
#include<stdbool.h>
int main(){
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        char str[1000];
        scanf("%s",str);
        int max_count=0;
        int count=0;
        for(int i=0;str[i]!='\0';i++){
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
                count++;
            }
            if(count>max_count){
                max_count=count;
            }
            else if(str[i]!='a'&& str[i]!='e'&& str[i]!='i'&&str[i]!='o'&&str[i]!='u'){
                count=0;
            }
        }
        if(max_count>2){
            printf("Happy\n");
        }else{
            printf("Sad\n");
        }
        
    }
    return 0;
}

