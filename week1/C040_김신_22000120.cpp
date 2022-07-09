#include <iostream>
using namespace std;

class Solution
{
public:
    int repeatedStringMatch(string a, string b)
    {
        int count = 1, flag = 0;
        string s = "";
        if (a.length() == 1 && b.find(a) != string::npos)
        {
            for (int i = 0; i < 26; i++)
            {
                if (b.find('a' + i) != string::npos && ('a' + i) != a[0])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                return b.length();
            }
        }
        else if (a.length() > b.length())
        {
            if (a.find(b) != string::npos)
                return count;
            a += a;
            count++;
            if (a.find(b) != string::npos)
                return count;
        }
        else
            while (s.length() < 2 * b.length())
            {
                s += a;
                if (s.find(b) != string::npos)
                    return count;
                count++;
            }
        return -1;
    }
};