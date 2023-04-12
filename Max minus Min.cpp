#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,mx=0,mn=0;
	    cin>>a>>b>>c;
	    //cout<<max({a,b,c})-min({a,b,c})<<endl;
	    mx = max(max(a,b),c);
	    mn = min(min(a,b),c);
	    cout<<mx-mn<<endl;
	}
	return 0;
}
