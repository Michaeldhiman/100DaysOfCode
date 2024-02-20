#include <stdio.h>

int main() {
	int test_Case;
	scanf("%d",&test_Case);
	while(test_Case--){
	    int total_minions,k;
	    scanf("%d %d",&total_minions,&k);
	    int arr[total_minions];
	    for(int i=0;i<total_minions;i++){
	        scanf("%d",&arr[i]);
	    }
	    int count=0;
	    for(int i=0;i<total_minions;i++){
	        arr[i]+=k;
	        if(arr[i]%7==0){
	            count++;
	        }
	    }
	    printf("%d\n",count);
	    
	}
	return 0;
}

