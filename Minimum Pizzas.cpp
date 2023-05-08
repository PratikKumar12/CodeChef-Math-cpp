#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float x,y,a;
	    cin>>x>>y;
	    a=x*y;
	    cout<<ceil(a/4)<<endl;
	}
	return 0;
}
