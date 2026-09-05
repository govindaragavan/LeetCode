class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int ans=0;
        int i=people.size()-1;
        for(i=people.size()-1;i>=0;i--){
            if(limit==people[i]) ans++;
            else break;
        }
        if(i==-1) i=people.size()-1;
        int l=0,r=i;
        while(l<r){
        if(people[l]+people[r]<=limit){
            ans++;
            l++;
            r--;
        }
        else break;
        }
        ans+=(r-l+1);
        return ans;
    }
};