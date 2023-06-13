#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(b==0 || a==b)
	    cout<<0<<endl;
	    else if(a-b>b)
	    cout<<b<<endl;
	    else
	    cout<<a-b<<endl;
	}
	return 0;
}
