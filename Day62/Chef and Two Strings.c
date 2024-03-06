#include <stdio.h>
#include<string.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        char str1[101];
        char str2[101];
        scanf("%s %s",str1,str2);
        int len=strlen(str1);
        int count=0;
        int question_count1=0;
        int question_count2=0;
        int question_count3=0;
        for(int i=0;i<len;i++){
            if((str1[i]>='a' && str1[i]<='z') && (str2[i]>='a' && str2[i]<='z')){
                if(str1[i]!=str2[i]){
                 count++;   
                }
            }
            
        }
        for(int i=0;i<len;i++){
            if(str1[i]=='?') question_count1++;
            if(str2[i]=='?') question_count2++;
            if(str1[i]=='?'&& str2[i]=='?') question_count3++;
        }
        int minimum=count;
        int maximum=count+question_count1+question_count2-question_count3;
        printf("%d %d\n",minimum,maximum);
        
    }
    return 0;
}

