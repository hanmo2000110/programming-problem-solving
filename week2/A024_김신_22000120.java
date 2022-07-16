class Solution {
public:
    bool lemonadeChange(vector<int>& a ){
        int n=a.size();
        int c=0,d=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==5)
                c+=1;
            else if(a[i]==10)
            {
                if(c<1)
                    return false;
                else
                {
                   c--;
                   d+=1;
                }  
                
            }
            else if(a[i]==20)
            {
                if(c<1)
                    return false;
                else if(c>=1 && d>=1)
                {  c--; d--; }
                else if(c>=3)
                    c-=3;
                else
                    return false;
            }
        }
        return true;
    }
};