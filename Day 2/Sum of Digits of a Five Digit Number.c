#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int sum=0;
    while(n){
     int digit=n%10;
     n/=10;
     sum+=digit;
    }
     printf("%d",sum);
    return 0;
}
