#include <stdio.h>

int main() {
    int test_case;
    scanf("%d", & test_case);
    while (test_case--) {
        long long int n;
        scanf("%lld", & n);
        //considering A to be odd and B to be even 
        long long odd_numbers=(n+1)/2;
        long long even_numbers=n/2;
        long long  total_pairs=2*even_numbers*odd_numbers;
        printf("%lld\n",total_pairs);
    }

    return 0;
}

