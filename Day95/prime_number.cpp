
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    if(number<2){
        cout<<"Not Prime";
        return 0;
    
    }else{

        for(int i=2;i<number;i++){
            if(number%i==0){
                cout<<"Not Prime";
                return 0;
            }
        }
        cout<<"Prime";
    }
    return 0;
}
