class Solution {
public:
    bool helper(vector<int>& counts, vector<int>& quantity, int ithCustomer) {
        // Base case
        if (ithCustomer == quantity.size()) {
            return true;
        }

        for (int i = 0; i < counts.size(); ++i) {
            if (counts[i] >= quantity[ithCustomer]) {
                counts[i] -= quantity[ithCustomer];
                if (helper(counts, quantity, ithCustomer + 1)) {
                    return true;
                }
                counts[i] += quantity[ithCustomer];
            }
        }
        return false;
    }

    bool canDistribute(vector<int>& nums, vector<int>& quantity) {
        unordered_map<int, int> countMap;
        for (auto i : nums)
            countMap[i]++;
        vector<int> counts;
        for (auto i : countMap)
            counts.push_back(i.second);
        sort(quantity.rbegin(),quantity.rend());
        return helper(counts, quantity, 0);
    }
};