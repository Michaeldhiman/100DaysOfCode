#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[1000];
    scanf("%s",str);
    for(char i='0';i<='9';i++){
        int count=0;
        for(int j=0;str[j]!='\0';j++){
            if(str[j]==i){
                count++;
            }
        }
        printf("%d ",count);
    }
    return 0;
}
