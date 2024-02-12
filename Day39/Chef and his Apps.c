#include <stdio.h>

int main(){
    int test_case,total_storage,app1_storage,app2_storage,storage_required;
    scanf("%d",&test_case);
    while(test_case--){
    scanf("%d %d %d %d",&total_storage,&app1_storage,&app2_storage,&storage_required);
        int unused_storage=total_storage-app1_storage-app2_storage;
        int minimum_apps=0;
        if(unused_storage<storage_required){
            if((unused_storage+app1_storage)>=storage_required){
                printf("%d\n",1);
            }
            else if((unused_storage+app2_storage)>=storage_required){
                printf("%d\n",1);
            }
            else if((unused_storage+app1_storage+app2_storage)>=storage_required){
                printf("%d\n",2);
            }
        }else{
            printf("%d\n",0);
        }
    }
    return 0;
}

