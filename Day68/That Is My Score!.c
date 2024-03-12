#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int no_ofsubmission;
        scanf("%d",&no_ofsubmission);
        int arr[11];
        for(int i=0;i<11;i++){
            arr[i]=0;
        }
    for(int i=1;i<=no_ofsubmission;i++){
        int question_submission,score;
        scanf("%d %d",&question_submission,&score);
        if(score>arr[question_submission-1]){
            arr[question_submission-1]=score;
        }
        }
        int total_score=0;
        for(int i=0;i<11;i++){
            if((i+1)!=9 && (i+1)!=10 && (i+1)!=11){
                total_score+=arr[i];
            }
        }
        printf("%d\n",total_score);
    }
    return 0;
}

