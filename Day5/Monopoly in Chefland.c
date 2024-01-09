#include <stdio.h>
int main(void) {
	    int test_case,company_1,company_2,company_3;
	    scanf("%d",&test_case);
	    for(int i=1;i<=test_case;i++){
	        scanf("%d %d %d",&company_1,&company_2,&company_3);
	        if(company_1>company_2+company_3 || company_2>company_3+company_1 || company_3>company_2+company_1){
	            printf("yes\n");
	        }else{
	            printf("no\n");
	        }
	    }
	    
}
