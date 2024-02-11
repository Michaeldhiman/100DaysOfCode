#include <stdio.h>

int main(){
    int number;
    scanf("%d",&number);
    if(number%4==0){
        number++;
    }else{
        number--;
    }
    printf("%d\n",number);
    return 0;
}

