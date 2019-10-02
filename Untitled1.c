#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<pair<int,int>> f;
    pair<int,int> x;
    int n;
    cin>>n;
    int a[n];
    int k;
    cin>>k;
    for(int i=0;i<n-1;++i){
        for(int j=i+1;j<n;++j)
        {

            if(a[i]+a[j]==k)
                {
                    x.first=a[i];
                    x.second=a[j];
                    f.push(x);
        }
    }
    for(;!f.empty();)
    {
        cout<<f.front()<<"\n";
        f.pop();
    }
    return 0;
}
