class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);

        int first = findFirst(nums, target);

        int last = (first == -1) ? -1 : findLast(nums, target);

        result[0] = first;
        result[1] = last;

        return result;
        
    }

    int findFirst(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int index = -1;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] == target) {
                index = mid; 
                right = mid - 1;
            }

            else if(nums[mid] < target) {
                left = mid + 1;
            }

            else {
                right = mid - 1;
            }
        }

        return index;
    }

    int findLast(vector<int>& nums, int target){
        int left = 0;
        int right = nums.size() - 1;
        int index = -1;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] == target) {
                index = mid;
                left = mid + 1;
            }

            else if(nums[mid] < target) {
                left = mid + 1;
            }

            else {
                right = mid - 1;
            }
        }

        return index;
    }
};