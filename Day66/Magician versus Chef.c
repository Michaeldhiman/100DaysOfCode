#include <stdio.h>

int main(){
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int total_boxes,total_swaps,coin_position;
        scanf("%d %d %d",&total_boxes,&coin_position,&total_swaps);
        int arr[total_boxes];
        // assumming box cotaining gold coin be 1 else 0;
        for(int i=0;i<total_boxes;i++){
            if(i==(coin_position-1)) arr[i]=1;
            else arr[i]=0;
        }
        int swap_pos1,swap_pos2;
        while(total_swaps--){
            scanf("%d %d",&swap_pos1,&swap_pos2);
            int temp=arr[swap_pos1-1];
            arr[swap_pos1-1]=arr[swap_pos2-1];
            arr[swap_pos2-1]=temp;
        }
        for(int i=0;i<total_boxes;i++){
            if(arr[i]==1) printf("%d\n",i+1);
        }
        
    }
    return 0;
}

