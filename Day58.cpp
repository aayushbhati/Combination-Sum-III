class Solution {
public:
    void combinationSum(int k, int n, int sum, vector<vector<int>>& result, vector<int>& subsets, int start) {
        if (subsets.size() == k) {
            if (sum == n) result.push_back(subsets);
            return; 
        }
        for (int i = start; i <= 9; ++i) {
            if (sum + i > n) break;
            subsets.push_back(i);
            combinationSum(k, n, sum + i, result, subsets, i + 1);
            subsets.pop_back(); 
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> subsets;
        combinationSum(k, n, 0, result, subsets, 1);
        return result;
    }
};
