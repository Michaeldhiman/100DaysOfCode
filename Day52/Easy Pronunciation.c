#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int length;
        scanf("%d",&length);
        char str[length+1];
        scanf("%s",str);
        int count=0;
        int max_count=0;
        for(int i=0;str[i]!='\0';i++){
            if(str[i]!='a'&& str[i]!='e'&& str[i]!='i'&& str[i]!='o'&&str[i]!='u'){
                count++;
            }
            if(count>max_count){
                    max_count=count;
            }
            else if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
                count=0;
            }
        }
        if(max_count>=4) printf("no\n");
        else printf("yes\n");
       
    }
    return 0;
}
