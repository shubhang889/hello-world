#include <iostream>
using namespace std;

int main() {
	int t,r,c,x,y;
	cin>>t;
	for(;t>0;--t)
	{
	    y=0;
	    cin>>r>>c;
	    for(int i=0;i<r;++i)
	    {
	        for(int j=0;j<c;++j)
	        {
	          cin>>x;
	          if((i==0&&(j==0||j==c-1)&&x>=2)||(i==r-1&&(j==0||j==c-1)&&x>=2)||((i==0||i==r-1)&&j!=0&&j!=c-1&&x>=3)||((j==0||j==c-1)&&i!=0&&j!=r-1&&x>=3)||(i!=0&&i!=r-1&&j!=c-1&&j!=0&&x>=4))
	          {
	              y=1;
	              cout<<"Unstable\n";
	              break;
	          }
	        }
	        if(y==1)
	        break;
	    }
	    if(y==0)
	        cout<<"Stable\n";
	}
	return 0;
}

