class Solution {
public:
    int trap(vector<int>& height) {
        int res=0,n=height.size();
            int lmax[n],rmax[n];
           lmax[0]=height[0];
           for(int j=1;j<n;j++)
           lmax[j]=max(height[j],lmax[j-1]);
           rmax[n-1]=height[n-1];
           for(int j=n-2;j>=0;j--)
           rmax[j]=max(height[j],rmax[j+1]);
           for(int  i=0;i<n;i++)
           res=res+min(lmax[i],rmax[i])-height[i];
           return res;
    }
};