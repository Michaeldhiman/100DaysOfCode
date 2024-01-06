#include <stdio.h>
void calculate_the_maximum(int n, int k) {
  int i=1,ans=0,ans2=0,ans3=0;
  while(i<=n){
      int a=i;
      int b=a+1;
      while(b<=n){
            int and=a&b;
            if(and>ans && and<k) ans=and;
            int or=a|b;
            if(or>ans2 && or<k) ans2=or;
            int exor=a^b;
            if(exor>ans3 && exor<k) ans3=exor;
            b++;
      }
      i++;
  }
   
      printf("%d\n",ans);
      printf("%d\n",ans2);
      printf("%d\n",ans3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
