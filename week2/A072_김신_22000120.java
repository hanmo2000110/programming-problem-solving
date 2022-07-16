class Solution {
public:
    int dayOfYear(string date) 
    {
        int y = stoi(date.substr(0, 4)), m = stoi(date.substr(5, 2)), d = stoi(date.substr(8, 2));
        d += m < 9 ? (m/2) * 31 : ((m + 1)/2) * 31;
        if(m >= 3)d += 28, d += m < 9 ? max(0, (((m + 1)/2) - 2) * 30) : (((m/2) - 2) * 30);
        if(y % 4 == 0 && m > 2)++d;
        return d;
    }
};