#include<stdio.h>
#include<stdlib.h>


inline void scanint(int *x)
{
	register char c = getchar_unlocked();
	*x = 0;
	for(; (c<48)||(c>57);c = getchar_unlocked());
	for(; (c>47)&&(c<58);c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48);
}

int main()
{
    int n,temp,S[1000],D[1000],before,after,test=0;
    while(1)
    {
        test++;
        scanint(&n);
        if(n==0)
            break;
        else
        {
            int i,j;
            for(i=0;i<n;i++)
                S[i]=D[i]=0;
            before=after=0;
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                   {
                       scanint(&temp);
                       S[i]+=temp;
                       D[j]+=temp;
                   }
            }

            for(i=0;i<n;i++)
              {
                  before+=S[i]+D[i];
                  after+=abs(S[i]-D[i]);
              }
            before/=2;
            after/=2;

            printf("%d. %d %d\n",test,before,after);
        }
    }
    return 0;
}
