class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int value;
        const int n = nums.size();
        vector<vector<int>> res;
        for(int i=0; i < (1 << n); i++) {
            vector <int> aset;
            for(int j=0; j < n; j++) {
                value = (1 << j) & i;
                if(value) {
                    aset.push_back(nums[j]);
                }
            }
            res.push_back(aset);
        }
        return res;
    }
};


// improved 
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int value;
        const int n = nums.size(), p = (1<<n);
        vector<vector<int>> res(p);
        for(int i=0; i < p; i++) {
            for(int j=0; j < n; j++) {
                value = (i >> j) & 1;
                if(value) {
                    res[i].push_back(nums[j]);
                }
            }
        }
        return res;
    }
};
