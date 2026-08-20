class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
        int l=0,r=0;
        int len=0,ans=INT_MIN;
        int zeroes=0;
        while(l<=r && r<a.size()){
            if(a[r]==0)
            zeroes++;
            len++;
            while(zeroes>k){
                if(a[l]==0)
                zeroes--;
                l++;
                len--;
            }
            ans=max(len,ans);
            r++;
        }
        return ans;
    }
};