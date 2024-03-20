#include <stdio.h>
int sum(int num){
    int ans=0;
    while(num){
       int digit=num%10;
       ans+=digit;
       num/=10;
    }
    return ans;
}
int main() {
	int test_case;
	scanf("%d",&test_case);
	while(test_case--){
	    int cards;
	    scanf("%d",&cards);
	    int chef[cards],morty[cards];
	    for(int i=0;i<cards;i++){
	        scanf("%d %d",&chef[i],&morty[i]);
	    }
	    int chef_points=0,morty_points=0;
	    for(int i=0;i<cards;i++){
	        if(sum(chef[i])>sum(morty[i])){
	            chef_points++;
	        }else if(sum(chef[i])<sum(morty[i])){
	            morty_points++;
	        }else{
	            morty_points++;
	            chef_points++;
	        }
	    }
	    if(chef_points>morty_points) printf("%d %d\n",0,chef_points);
	    else if(chef_points<morty_points) printf("%d %d\n",1,morty_points);
	    else printf("%d %d\n",2,morty_points);
	}
	return 0;
}

