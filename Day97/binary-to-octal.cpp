
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number in binary representation: ";
    cin>>num;
    int power=1;
    int ans=0;
    while(num){
        int digit=num%10;
        num/=10;
        ans+=digit*power;
        power*=2;
    }
    int oct_power=1;
    int oct_ans=0;
    while(ans){
        int digit=ans%8;
        ans/=8;
        oct_ans+=digit*oct_power;
        oct_power*=10;
    }
    cout<<"Octal Representation : "<<oct_ans<<endl;
}
