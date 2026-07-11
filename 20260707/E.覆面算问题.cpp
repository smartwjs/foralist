#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;

signed main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1==s3||s2==s3)
    {
        cout<<"UNSOLVABLE";
        return 0;
    }
    if(s1==s2)
    {
        int a,b,c;
        a=0,b=0,c=0;
        if(s3.size()==s2.size())
        {
            for(int i=1;i<=s3.size();i++)
            {
                a=a*10+1;
            }
            
            for(int i=1;i<=s3.size();i++)
            {
                b=b*10+1;
            }
            c=a+b;
            printf("%lld\n%lld\n%lld\n",a,b,c);
        }
        else
        {
            int n;
            if(s2.size()+1==s3.size())
            {
                n=s2.size();
            }
            else
            {
                n=s1.size();
            }
            for(int i=1;i<=n;i++)
            {
                a=a*50+5;
            }
            
            for(int i=1;i<=n;i++)
            {
                b=b*50+5;
            }
            c=a+b;
            printf("%lld\n%lld\n%lld\n",a,b,c);
        }
    }
    else
    {
        int a,b,c;
        a=0,b=0,c=0;
        if(s1.size()==s2.size())
        {
            if(s2.size()==s3.size())
            {
                for(int i=1;i<=s2.size();i++)
                {
                    a=a*10+1;
                }
                
                b=a+1;
                if(b>=100)
                {
                    a++,b--;
                }
                c=a+b;
                printf("%lld\n%lld\n%lld\n",a,b,c);
            }
            else
            {
                for(int i=1;i<=s2.size();i++)
                {
                    a=a*50+5;
                }
                b=a+1;
                if(b>=100)
                {
                    a++,b--;
                }
                c=a+b;
                printf("%lld\n%lld\n%lld\n",a,b,c);
            }
        }
        else
        {
            int n;
            if(s2.size()+1==s3.size())
            {
                n=s2.size();
            }
            else
            {
                n=s1.size();
            }
            for(int i=1;i<=n;i++)
            {
                a=a*50+5;
            }
            b=a+1;
            if(b>=100)
            {
                a++,b--;
            }
            c=a+b;
            printf("%lld\n%lld\n%lld\n",a,b,c);
        }
    }
    return 0;
}