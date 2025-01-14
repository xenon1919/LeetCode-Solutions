class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> C(n);
        unordered_set<int> setA, setB;

        for(int i = 0; i < n; ++i) {
            setA.insert(A[i]);
            setB.insert(B[i]);
            int commonCount = 0;
            for(auto num : setA) {
                if(setB.count(num)) {
                    ++commonCount;
                }
            }
            C[i] = commonCount;
        }
        return C;
        
    }
};