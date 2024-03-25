#include <stdio.h>
#include<stdbool.h>
bool prime(int harvest){
     for(int i=2;i<harvest;i++){
            if(harvest%i==0){
                return false;
            }
        }
        return true;
}
int main() {
    int  test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int potato_harvest1,potato_harvest2,potato_harvest3=0;
        scanf("%d %d",&potato_harvest1,&potato_harvest2);
        int harvest=potato_harvest1+potato_harvest2+1;
        while(prime(harvest)!=true) harvest++;
        
        
       
       
        printf("%d\n",harvest-(potato_harvest1+potato_harvest2));
        
    }
    return 0;
}

