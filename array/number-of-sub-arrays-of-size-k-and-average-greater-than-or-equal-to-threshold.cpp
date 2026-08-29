class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
     int n= arr.size();
     long long ans=0,sum=0;
     unordered_map<int,int> mp;
     long long avg=0;
     int l=0,r=0;
     while(l<=r && r<n){
        sum+=arr[r];
        mp[arr[r]]++;
        if(r-l+1==k){
            avg=sum/(long long)k;
            if((int)avg>=threshold) ans++;
            sum-=arr[l];
            mp[arr[l]]--;
            l++;
        }
  r++;
     }
     return (int)ans;
    }
};