#include <stdio.h>
int min(int a, int b){
    if(a>b) return b;
    else return a;
}
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int total_movie;
        scanf("%d",&total_movie);
        int length[total_movie];
        int rating[total_movie];
        for(int i=0;i<total_movie;i++){
            scanf("%d",&length[i]);
        }
        for(int i=0;i<total_movie;i++){
            scanf("%d",&rating[i]);
        }
        int max_movie=length[0]*rating[0];
        int max_rating=rating[0];
        int max_index=1;
        int value=0;
        for(int i=1;i<total_movie;i++){
            long long product=length[i]*rating[i];
            if(product>max_movie){
                value=i;
                max_movie=product;
                max_index=i+1;
                max_rating=rating[i];
            }else if(product==max_movie){
                if(rating[i]>max_rating){
                    value=i;
                    max_index=i+1;
                    max_rating=rating[i];
                }else if(rating[i]==max_rating){
                    max_index=min(i+1,value+1);
                }
            }
        }
        printf("%d\n",max_index);
    }
    return 0;
}

