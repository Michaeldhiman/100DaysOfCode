#include <stdio.h>
#include<stdbool.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int no_of_fingers;
        scanf("%d",&no_of_fingers);
        int fingers[no_of_fingers],shealth[no_of_fingers];
        for(int i=0;i<no_of_fingers;i++){
            scanf("%d",&fingers[i]);
        }
        for(int i=0;i<no_of_fingers;i++){
            scanf("%d",&shealth[i]);
        }
        bool flag1=true;
        bool flag2=true;
        for(int i=0;i<no_of_fingers;i++){
            if(fingers[i]>shealth[i]){
                flag1=false;
                break;
            }
        }
        int j=no_of_fingers-1;
        for(int i=0;i<no_of_fingers;i++){
            if(fingers[i]>shealth[j-i]){
                flag2=false;
                break;
            }
        }
        if(flag1==true && flag2==true) printf("both\n");
        else if(flag1==true) printf("front\n");
        else if(flag2==true) printf("back\n");
        else printf("none\n");
    }
    return 0;
}

