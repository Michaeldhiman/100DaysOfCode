#include<stdio.h>
int main(){
    int number,divisible_number,count=0;
    scanf("%d %d ",&number,&divisible_number);
    for(int i=1;i<=number;i++){
        int newnum;
        scanf("%d",&newnum);
        if(newnum%divisible_number==0){
            count++;
        }
    }
    printf("%d\n",count);
    
    return 0;
}
