class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int ans=0,n=people.size();
       int i=0;
       while(i<n){
        int sum=0;
        while(sum<=limit && i<n){
            if(sum==limit) break;
            if(sum+people[i]<=limit)
            sum+=people[i];
            else break;
            i++;
        }
        ans++;
              }       cout<<i;
        return ans;
    }
};