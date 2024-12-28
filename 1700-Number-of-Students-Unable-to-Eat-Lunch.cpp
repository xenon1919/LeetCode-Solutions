class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int zeroCount = count(students.begin(), students.end(), 0);
        int oneCount = students.size() - zeroCount;

        for (int i = 0; i < sandwiches.size(); i++) {
            if (sandwiches[i] == 0) {
                if (zeroCount > 0) {
                    zeroCount--;
                } else {
                    return oneCount;
                }
            } else {
                if (oneCount > 0) {
                    oneCount--;
                } else {
                    return zeroCount;
                }
            }
        }

        return 0; 
    }
};
