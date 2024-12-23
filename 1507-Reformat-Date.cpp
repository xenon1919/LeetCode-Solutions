class Solution {
public:
    string reformatDate(string date) {
        unordered_map<string, string> monthMap = {
           {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"},
            {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"},
            {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}  
        };
        string day, month, year;
        int firstSpace = date.find(' ');
        int secondSpace = date.find( ' ', firstSpace + 1);

        day = date.substr(0, firstSpace);
        month = date.substr(firstSpace + 1, secondSpace - firstSpace - 1);
        year = date.substr(secondSpace + 1);

        day = day.substr(0, day.size() - 2);
        if(day.size() == 1) {
            day = "0" + day;
        }

        return year + "-" + monthMap[month] + "-" + day;
        
    }
};