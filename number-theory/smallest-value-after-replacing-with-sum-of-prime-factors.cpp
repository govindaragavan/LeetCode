class Solution {
public:
    int smallestValue(int n) {
        vector<int> v=SumPrime(n);
int ans = *max_element(v.begin(),v.end());
return ans;
    }
    private: 
    vector<int> SumPrime(int n){
        vector<int> v;
        for(int i=2;i*i<=n;i++){
            while(n%i==0){
       v.push_back(i);
       n/=i;
            }
        }
        if(n>1) v.push_back(n);

        return v;
    }
};