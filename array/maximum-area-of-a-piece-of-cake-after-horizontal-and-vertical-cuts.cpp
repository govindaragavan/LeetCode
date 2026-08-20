class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        long long max1=0,max2=0;
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        max1 = max(max1, (long long)horizontalCuts[0]);
max2 = max(max2, (long long)verticalCuts[0]);

        max2=max(max2,(long long)w-verticalCuts[verticalCuts.size()-1]); 
        max1=max(max1,(long long)h-horizontalCuts[horizontalCuts.size()-1]); 
            for(int i=1;i<horizontalCuts.size();i++){
            max1=max(max1,(long long)horizontalCuts[i]-horizontalCuts[i-1]);
       }
        for(int i=1;i<verticalCuts.size();i++){
            max2=max(max2,(long long)verticalCuts[i]-verticalCuts[i-1]);
        }
    long long mod = 1e9 + 7;
        return (max1*max2)%mod;
    }
};