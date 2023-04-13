#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void backtrack(vector<int>& nums, vector<vector<int>>& res, vector<int>& path, vector<bool>& used) {
    if (path.size() == nums.size()) {
        res.push_back(path);
        return;
    }
    for (int i = 0; i < nums.size(); i++) {
        if (used[i] || (i > 0 && nums[i] == nums[i-1] && !used[i-1])) continue;
        used[i] = true;
        path.push_back(nums[i]);
        backtrack(nums, res, path, used);
        path.pop_back();
        used[i] = false;
    }
}

vector<vector<int>> permuteUnique(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    vector<int> path;
    vector<bool> used(nums.size(), false);
    backtrack(nums, res, path, used);
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<vector<int>> res = permuteUnique(nums);
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < n; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
