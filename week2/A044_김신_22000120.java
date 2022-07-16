class Solution {
public:
    bool checkRecord(string s) {
        int late = 0;
        int absent = 0;
        
        for(int i=0 ; i<s.length() ; i++){
            if(s[i] == 'L') late++;
            else if(s[i] == 'A'){
                absent++;
                late = 0;
            }
            else if(s[i] == 'P') late = 0; 
            if(late >= 3) 
                return false;
        }
        
        
        return (absent < 2);
    }
};

//1차 풀이 여기서 개선 할 수 있는 방법을 떠올림
class Solution {
public:
    bool checkRecord(string s) {        
        if(s.find("LLL") != string::npos) return false;
        int absent = 0;        
        for(int i=0 ; i<s.length() ; i++)
            if(s[i] == 'A') absent++;
        return (absent < 2);
    }
};