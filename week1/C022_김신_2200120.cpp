#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int flag = 0;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        for (int j = i + 1; j < nums.size() - 1; j++)
        {
            for (int z = j + 1; z < nums.size(); z++)
            {
                flag = 0;
                for (int k = 2; k < nums[i] + nums[j] + nums[z]; k++)
                {
                    if ((nums[i] + nums[j] + nums[z]) % k == 0)
                        flag = 1;
                }
                if (flag == 0)
                    answer++;
            }
        }
    }

    return answer;
}