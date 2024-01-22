#include <stdio.h>

int main(void) {
    int topic_1,topic_2,topic_3,topic_choose;
    scanf("%d %d %d %d",&topic_1,&topic_2,&topic_3,&topic_choose);
   if(topic_choose==topic_1) printf("yes\n");
   else if(topic_choose==topic_2) printf("yes\n");
   else if(topic_choose==topic_3) printf("yes\n");
   else printf("no\n");
}

