#include <stdio.h>
#include<limits.h>
int main(void) {
	int test_case;
	scanf("%d",&test_case);
	while(test_case--){
	    int total_friends;
	    scanf("%d",&total_friends);
	    int arr[total_friends];
	    for(int i=0;i<total_friends;i++){
	        scanf("%d",&arr[i]);
	    }
	    int count[10]={0};
	    for(int i=0;i<total_friends;i++){
	        count[arr[i]-1]++;
	    }
	    int smax=INT_MIN;
	    int max=INT_MIN;
	    int value1=0,value2=0;
	    for(int i=0;i<10;i++){
	        if(count[i]>max){
	            smax=max;
	            max=count[i];
	            value1=i+1;
	          
	        }else if(count[i]>smax ){
	            smax=count[i];
	        }
	    }
	 if(smax==max) printf("CONFUSED\n");
	 else printf("%d\n",value1);
	}
	return 0;
}

