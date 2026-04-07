class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
    unordered_set<int> s;
    
    // 1. Add everything from nums into the set
    for (int x : nums) {
        s.insert(x);
    }
    
    vector<int> result;
    // 2. Check every number from 1 to n
    for (int i = 1; i <= n; i++) {
        // 3. If 'i' is NOT in the set, it's missing!
        if (s.find(i) == s.end()) {
            result.push_back(i);
        }
    }
    
    return result;
    }
};
