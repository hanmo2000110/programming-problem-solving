#include <string>
#include <vector>

using namespace std;

bool solution(int x)
{
    bool answer = true;
    int nTemp = x;
    int nSum = 0;
    while (nTemp > 0)
    {
        nSum += nTemp % 10;
        nTemp /= 10;
    }

    return x % nSum == 0 ? true : false;
}