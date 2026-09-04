class Solution {
public:
    int binaryGap(int n) {
        vector<int> bit;
        for(int i=0;i<32;i++)
            if((n>>i & 1)) bit.push_back(i);
        for(int x : bit) cout<<x<<" ";
int ans=0;
        for(int i=1;i<bit.size();i++){
    ans=max(ans,bit[i]-bit[i-1]);
        }
        return ans;
    }
};