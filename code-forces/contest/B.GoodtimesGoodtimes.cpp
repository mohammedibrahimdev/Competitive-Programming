#include<iostream>
using namespace std;
int main ()
{
    int loop;
    cin >> loop;

    while(loop--)
    {
        int  y = 1, xy = 1;
        int x, ynum = 1, xynumber =0;
        cin >> x;

        if(ynum >= 10)
        {
            string len;
            int copy = ynum;
            while(copy>0)
            {
                int digit = copy%10;
                len += digit;
                copy = copy/10;
            }


            for(int i = 0;i<(len.size());++i)
            if(len[0] != len[i])
            y++;
        }
        
        string xynumbers;
        xynumber = x*ynum;
        while(xynumber>0)
        {
            int digit = xynumber%10;
            xynumbers += digit;
            xynumber = xynumber/10;
        }

        for(int i = 0;i<xynumbers.size();++i)
        if(xynumbers[0] != xynumbers[i]);
        xy++;

        if(y <= 2 && xy <= 2)
        {
            printf("%d\n", ynum);
        }




    }
    return 0;
}