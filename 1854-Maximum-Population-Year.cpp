class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> population(2051, 0);

        for(const auto& log : logs) {
            population[log[0]]++;
            population[log[1]]--;
        }

        int maxPopulation = 0;
        int currentPopulation = 0;
        int earliestYear = 1950;

        for(auto year = 0; year <= 2050; year++) {
            currentPopulation += population[year];

            if(currentPopulation > maxPopulation) {
                maxPopulation = currentPopulation;
                earliestYear = year;
            }
        }

        return earliestYear;
        
    }
};