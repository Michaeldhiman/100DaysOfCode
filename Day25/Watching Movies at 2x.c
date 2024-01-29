#include <stdio.h>

int main() {
    int total_time,firstpart_time,actual_time;
    scanf("%d %d",&total_time,&firstpart_time);
    actual_time=(firstpart_time/2)+(total_time-firstpart_time);
    printf("%d\n",actual_time);
    return 0;
}

