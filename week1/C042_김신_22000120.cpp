#include <iostream>
using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {
        int index = 0, t1 = 1, t2 = 0;
        int row = 0, level = 0;
        string str[numRows];
        string answer = "";

        if (numRows == 1 || s.length() == 1)
        {
            return s;
        }

        for (int i = 0; i < numRows; i++)
        {
            str[i] = "";
        }

        while (index < s.length())
        {
            str[row] += s[index];

            if (row == 0)
            {
                t1 = 1;
            }
            else if (row == numRows - 1)
            {
                t1 = -1;
            }
            row += t1;
            index++;
        }

        for (int i = 0; i < numRows; i++)
        {
            answer += str[i];
        }
        return answer;
    }
};