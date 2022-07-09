#include <string>
#include <vector>
using namespace std;

int solution(string skill, vector<string> skill_trees)
{
    int snum[26];
    int answer = 0, flag = 0;
    string s;

    if (skill.size() == 1)
        return skill_trees.size();

    for (int i = 0; i < skill_trees.size(); i++)
    {
        s = skill_trees[i];

        for (int j = 0; j < skill.size(); j++)
        {
            if (s.find(skill[j]) != string::npos)
                snum[j] = s.find(skill[j]);
            else
                snum[j] = skill.size() * 2 + j;
        }

        flag = 0;
        for (int j = 1; j < skill.size(); j++)
        {
            if (snum[j - 1] > snum[j])
                flag = 1;
        }
        if (flag != 1)
            answer++;
    }
    return answer;
}