#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> result = {};

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                result.push_back(mp[complement]);
                result.push_back(i);
                break;
            }

            mp[nums[i]] = i;
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solution.twoSum(nums, target);
    cout << "Indices of the two numbers that add up to " << target << ": ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}
