class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        long long total = 0;
        long long mx = 0;
        for(int x : milestones){
            total+=x;
            mx=max(mx,(long long)x);
        }
        long long other = total-mx;
        long long ans=min(total,(2*other+1));
         return ans;
    }
};