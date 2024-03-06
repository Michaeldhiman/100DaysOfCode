#include <stdio.h>

int main() {
	int test_case;
	scanf("%d",&test_case);
    while(test_case--){
        int gesture;
        scanf("%d",&gesture);
        char str[gesture+1];
        scanf("%s",str);
        int indian_gesture=0;
        int not_indian_gesture=0;
        for(int i=0;i<gesture;i++){
            if(str[i]=='I') indian_gesture++;
            if(str[i]=='Y') not_indian_gesture++;
        }
        if(indian_gesture) printf("INDIAN\n");
        else if(not_indian_gesture) printf("NOT INDIAN\n");
        else printf("NOT SURE\n");
        
    }
    return 0;
}

