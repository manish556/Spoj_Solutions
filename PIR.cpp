#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    double u,v,w,U,V,W,a,b,c,d,x,y,z,X,Y,Z,vol;
    for(int i=0;i<t;i++)
    {
     cin>>U>>V>>w>>W>>v>>u;
     X=(w-U+v)*(U+v+w);
     x=(U-v+w)*(v-w+U);
     Y=(u-V+w)*(V+w+u);
     y=(V-w+u)*(w-u+V);
     Z=(v-W+u)*(W+u+v);
     z=(W-u+v)*(u-v+W);
     a=sqrt(x*Y*Z);
     b=sqrt(y*Z*X);
     c=sqrt(z*X*Y);
     d=sqrt(x*y*z);

     vol=sqrt((-a+b+c+d)*(a-b+c+d)*(a+b-c+d)*(a+b+c-d))/(192*u*v*w);
     printf("%.4lf\n",vol);
    }
}
