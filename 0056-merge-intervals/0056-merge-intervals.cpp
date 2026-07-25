class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        if (arr.empty()) return {};

    // 1. Sort by start time
    sort(arr.begin(), arr.end());
    
    vector<vector<int>> res;

    // 2. Loop exactly once
    for (int i = 0; i < arr.size(); i++) {
        
        // If 'res' is empty OR the current interval does NOT overlap with the last one in 'res'
        if (res.empty() || arr[i][0] > res.back()[1]) {
            res.push_back(arr[i]); // Toss it in the box
        } 
        else {
            // They OVERLAP! Stretch the end of the last interval in the box
            res.back()[1] = max(res.back()[1], arr[i][1]);
        }
    }
    
    return res;
    }
};