class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans;
        int count=0;
      for(int i=0;i<grid.size();i++)  {
        int low=0,high=grid[i].size()-1;
        int neg=grid[i].size();
        while(low<=high){
            int mid= low + (high-low)/2;
            if(grid[i][mid]<0){
            neg=mid;
            high=mid-1;
            }
            else
            low=mid+1;
        }
        count+=(grid[i].size()-neg);}
        return count ;
    }
};