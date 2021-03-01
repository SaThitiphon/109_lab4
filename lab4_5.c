#include <stdio.h>
#include <string.h>
int main()
{
    int g[4],n,i,a,b,c,d,k,j;
    scanf("%d",&n);
    int s[n];
    char r[200];
    for(i=0;i<n;i++)
    {
        g[4] = (0,0,0,0);
        g[0] = 1;
        strcpy(r," ");
        scanf("%s",r);
        for(j=0;j<200;j++)
        {
            if(r[j]=='\0')
                break;
            if(r[j]=='A')
            {
                a = g[1];
                b = g[2];
                g[1] = b;
                g[2] = a;
            }
            else if(r[j]=='B')
            {
                a = g[0];
                b = g[3];
                g[0] = b;
                g[3] = a;
            }
            else if(r[j]=='C')
            {
                a = g[0];
                b = g[2];
                g[0] = b;
                g[2] = a;
                c = g[1];
                d = g[3];
                g[1] = d;
                g[3] = c;
            }
            else if(r[j]=='D')
            {
                a = g[0];
                b = g[1];
                g[0] = b;
                g[1] = a;
                c = g[2];
                d = g[3];
                g[2] = d;
                g[3] = c;
            }
            else if(r[j]=='E')
            {
                a = g[0];
                b = g[3];
                g[0] = b;
                g[3] = a;
                c = g[1];
                d = g[4];
                g[1] = d;
                g[4] = c;
            }
        }
        for(j=0;j<n;j++)
        {
            for(k=0;k<4;k++)
            {
                if(g[k]==1)
                {
                    s[i] = k + 1;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",s[i]);
    }
    return 0;
}
