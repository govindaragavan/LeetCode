class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
    vector<int> nse(n);
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()>prices[i])
        st.pop();

        nse[i]= st.empty()? 0 : st.top();

        st.push(prices[i]);
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
        ans.push_back(prices[i]-nse[i]);
    }
    return ans;
    }
};