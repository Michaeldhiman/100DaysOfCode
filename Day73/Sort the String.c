#include <stdio.h>

int main() {
	int test_case;
	scanf("%d",&test_case);
	while(test_case--){
	    int length;
	    scanf("%d",&length);
	    char str[length];
	    scanf("%s",str);
	    int count=0;
	    for(int i=0;i<length;i++){
	        if(str[i]=='1' && str[i+1]=='0'){
	            count++;
	        }
	    }
	  
	 printf("%d\n",count);
	}
	return 0;

}


