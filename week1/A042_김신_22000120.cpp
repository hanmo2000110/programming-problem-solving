#include <iostream>
using namespace std;

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        char s1[s.length()];
        char s2[t.length()];

        int top1 = 0, top2 = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '#')
            {
                if (top1 != 0)
                {
                    top1--;
                    s1[top1] = '\0';
                }
            }
            else
            {
                s1[top1] = s[i];
                top1++;
            }
        }
        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] == '#')
            {
                if (top2 != 0)
                {
                    top2--;
                    s2[top2] = '\0';
                }
            }
            else
            {
                s2[top2] = t[i];
                top2++;
            }
        }
        if (top1 != top2)
            return false;
        for (int i = 0; i < top1; i++)
        {
            if (s1[i] != s2[i])
                return false;
        }

        return true;
    }
};