#include <stdio.h>
#include<stdbool.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int days,protein_require;
        scanf("%d %d",&days,&protein_require);
        int arr[days];
        for(int i=0;i<days;i++){
            scanf("%d",&arr[i]);
        }
        int protein_grams=0;
            bool flag=false;
        for(int i=0;i<days;i++){
            protein_grams+=arr[i];
            if(protein_grams>=protein_require){
                flag=true;
                protein_grams-=protein_require;
            }else{
                printf("NO %d\n",i+1);
                flag=false;
                break;
            }
        }
        if(flag==true){
            printf("YES\n");
        }
    }
    return 0;
}

