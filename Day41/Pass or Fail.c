#include <stdio.h>

int main() {
	int test_case,total_questions,question_correct,passing_marks;
	scanf("%d",&test_case);
	while(test_case--){
	    scanf("%d %d %d",&total_questions,&question_correct,&passing_marks);
	    int question_incorrect=total_questions-question_correct;
	    int marks_scored=3*question_correct+(-1*question_incorrect);
	    if(marks_scored>=passing_marks){
	        printf("pass\n");
	    }else{
	        printf("fail\n");
	    }
	}
    return 0;
}
