class Solution {
public:
    int addDigits(int num) {
        int n=num;

        string s=to_string(num);
            int len=s.size();
        while(len!=1)
        {
            int su=0;
            for(int i=0;i<s.size();i++)
            {
                su+=s[i]-'0';
            }
            
            s=to_string(su);
            
            len=s.size();
            
        }
        return stoi(s);     
    }
};