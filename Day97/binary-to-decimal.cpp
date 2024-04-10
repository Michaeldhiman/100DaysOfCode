
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
    cout<<"decimal Representation : "<<ans<<endl;
}
