#include <stdio.h>
#include<math.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int total_square,side;
        scanf("%d %d",&total_square,&side);
        int square_root=sqrt(total_square);
        printf("%d\n",square_root*side);
    }
    return 0;
}

