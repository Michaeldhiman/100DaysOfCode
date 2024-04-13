class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0;
        int power=1;
        if(n==0) return 1;
        while(n){
            int digit=n%2;
            n/=2;
            if(digit==1) digit=0;
            else digit=1;
            ans=digit*power+ans;
            power*=2;
        }
        return ans;
        
    }
};
