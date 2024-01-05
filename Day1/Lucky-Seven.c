#include <stdio.h>
int main(void) {
	char s[10];
	scanf("%[^\n]%c",s);
	for(int i=0;i<10;i++){
	    if(i==6){
	        printf("%c",s[i]);
	    }
	}

}

