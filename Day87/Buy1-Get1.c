#include <stdio.h>
#include<string.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        char str[201];
        scanf("%s",str);
        int length=strlen(str);
       int small[26]={0};
       int big[26]={0};
       for(int i=0;i<length;i++){
           if(str[i]>='a' && str[i]<='z'){
               small[str[i]-'a']++;
           }else if(str[i]>='A' && str[i]<='Z'){
               big[str[i]-'A']++;
           }
       }
       int small_sum=0;
       int big_sum=0;
       for(int i=0;i<26;i++){
           if(small[i]>1 && small[i]%2==0) small[i]=small[i]/2;
           else if(small[i]>1 && small[i]%2!=0) small[i]=(small[i]+1)/2;
   
            small_sum+=small[i];
       }
       for(int i=0;i<26;i++){
           if(big[i]>1 && big[i]%2==0) big[i]=big[i]/2;
           else if(big[i]>1 && big[i]%2!=0) big[i]=(big[i]+1)/2;
            big_sum+=big[i];
       }
       printf("%d\n",small_sum+big_sum);
    }
    return 0;
}

