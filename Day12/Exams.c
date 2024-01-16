#include <stdio.h>

int main(void) {
    int test_cases,total_schools,students,student_passed;
    scanf("%d",&test_cases);
    for(int i=1;i<=test_cases;i++){
      scanf("%d %d %d",&total_schools,&students,&student_passed);
      float total_students=(students*total_schools*50)/100;
      
      if(student_passed>total_students){
          printf("yes\n");
      }else{
          printf("no\n");
      }
    }

}
