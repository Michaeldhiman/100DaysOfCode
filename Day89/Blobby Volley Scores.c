#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        
        char s[n+1];
        scanf("%s", s);
        int server=0  ;// 0 for alice and 1 for bob
        int alice_score=0;
        int bob_score=0;
        int length=strlen(s);
        for(int i=0;i<length;i++){
            if(s[i]=='A' && server==0) alice_score++;
            else if(s[i]=='B'&& server==0) server=1;
            else if(s[i]=='A' && server==1) server=0;
            else bob_score++;
        }
        printf("%d %d\n",alice_score,bob_score);
    }

    return 0;
}
