class Solution {
public:


int peakIndexInMountainArray(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] < arr[mid + 1])
            left = mid + 1;  // Move right (ascending part)
        else
            right = mid;  // Move left (descending part)
    }
    
    return left;  // Peak index
}

};