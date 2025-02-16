class Solution {
public:
    vector<int> res;  
    vector<bool> used;
    int size;

    bool backtrack(int index, int n) {
    
        if (index == size) return true;

        
        if (res[index] != 0) return backtrack(index + 1, n);

        
        for (int num = n; num >= 1; --num) {
            if (used[num]) continue;

            
            if (num == 1) {
                res[index] = 1;
                used[num] = true;
                if (backtrack(index + 1, n)) return true;
                used[num] = false;
                res[index] = 0;
            } 
            
            else if (index + num < size && res[index + num] == 0) {
                res[index] = res[index + num] = num;
                used[num] = true;
                if (backtrack(index + 1, n)) return true;
                used[num] = false;
                res[index] = res[index + num] = 0;
            }
        }
        return false;
    }

    vector<int> constructDistancedSequence(int n) {
        size = 2 * n - 1;
        res.resize(size, 0);
        used.resize(n + 1, false);
        backtrack(0, n);
        return res;
    }
};
        

