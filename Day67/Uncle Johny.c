#include <stdio.h>
int sort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }else{
                break;
            }
        }
    }
    return ;
}
int main(){
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int no_of_songs;
        scanf("%d",&no_of_songs);
        int arr[no_of_songs];
        for(int i=0;i<no_of_songs;i++){
            scanf("%d",&arr[i]);
        }
        int previous_position;
        scanf("%d",&previous_position);
        int song_length=arr[previous_position-1];
        sort(arr,no_of_songs);
        for(int i=0;i<no_of_songs;i++){
            if(arr[i]==song_length){
                printf("%d\n",i+1);
            }
        }

    }
    return 0;
}

