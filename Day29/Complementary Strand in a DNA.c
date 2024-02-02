#include <stdio.h>

int main() {
    int test_case,length;
    scanf("%d",&test_case);
    while(test_case--){
        scanf("%d",&length);
        char dna[length+1];
        scanf("%s",dna);
        for(int i=0;dna[i]!='\0';i++){
            if(dna[i]=='A'){
                dna[i]='T';
            }
            else if(dna[i]=='T'){
                dna[i]='A';
            }
            else if(dna[i]=='C'){
                dna[i]='G';
            }
            else if(dna[i]=='G'){
                dna[i]='C';
            }
           
        }
        printf("%s\n",dna);
    }
    return 0;
}

