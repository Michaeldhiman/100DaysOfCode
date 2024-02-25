#include <stdio.h>
#include<limits.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
   int max_alice=INT_MIN,smax_alice=INT_MIN,max_bob=INT_MIN,smax_bob=INT_MIN;  
        int alice[3];
        int bob[3];
        for(int i=0;i<3;i++){
            scanf("%d",&alice[i]);
        }
        for(int i=0;i<3;i++){
            scanf("%d",&bob[i]);
        }
for(int i=0;i<3;i++){
    if(alice[i]>max_alice){
        smax_alice = max_alice;
        max_alice = alice[i];
    } else if(alice[i] > smax_alice) {
        smax_alice = alice[i];
    }
}

for(int i=0;i<3;i++){
    if(bob[i]>max_bob){
        smax_bob = max_bob;
        max_bob = bob[i];
    } else if(bob[i] > smax_bob) {
        smax_bob = bob[i];
    }
}
   int alice_sum=max_alice+smax_alice;
        int bob_sum=max_bob+smax_bob;
      
        if(alice_sum>bob_sum) printf("Alice\n");
        else if(bob_sum>alice_sum) printf("Bob\n");
        else printf("Tie\n");
        
    }
    return 0;
}

