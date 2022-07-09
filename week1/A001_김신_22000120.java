class Solution
{
public
    int findContentChildren(int[] g, int[] s)
    {
        int answer = 0;
        int G = 0, S = 0;

        Arrays.sort(g);
        Arrays.sort(s);

        while (G < g.length && S < s.length)
        {
            if (g[G] <= s[S])
            {
                G++;
                S++;
                answer++;
            }
            else
                S++;
        }
        return answer;
    }
}