#include <stdio.h>

int main(){
    int test_Case,number_1,number_2,number_3;
    scanf("%d",&test_Case);
    while(test_Case--){
        scanf("%d %d",&number_1,&number_2);
        number_3=21-(number_1+number_2);
        if(number_3>10) number_3=-1;
        printf("%d\n",number_3);
        
        
    }
    return 0;
}

