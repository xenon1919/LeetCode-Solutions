class Solution {
public:
    int pivotInteger(int n) {
        // Calculate the total sum of numbers from 1 to n
        int totalSum = n * (n + 1) / 2;

        int leftSum = 0; // Initialize left sum

        // Iterate through each possible pivot value
        for (int x = 1; x <= n; ++x) {
            leftSum += x; // Update the left sum
            
            // Calculate right sum based on left sum and total sum
            int rightSum = totalSum - leftSum;

            // Check if the left sum equals the right sum
            if (leftSum == rightSum + x) {
                return x; // Found the pivot integer
            }
        }
        
        return -1; // No pivot integer found
    }
};
