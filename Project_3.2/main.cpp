#include <iostream>
using namespace std;

int main()
{
    float s,n,m,r,p;
    cout<<"Input S,n,m: "<<endl;
    cin>>s>>n>>m;
    for(int i=1;i<10000;i++)
    {
        p=i/1000;
        r=p/100;
        float m1=(s*r*pow(1+r,n))/12*(pow(1+r,n)-1);
        if(m1>m)
        {
            cout<<"p= "<<p<<endl;
            break;
        }
    }

    return 0;
}
