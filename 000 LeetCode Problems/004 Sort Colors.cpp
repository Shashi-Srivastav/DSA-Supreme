class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        // sort(nums.begin(),nums.end());
        // inplace 3 pinter approach
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        while (high >= mid)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};