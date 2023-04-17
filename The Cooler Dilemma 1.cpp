#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z,a;
	    cin>>x>>y>>z;
	    a=(x*z);
	    if(a>=y){
	        cout<<"NO"<<endl;
	    }
	    else if(a<y)
	    cout<<"YES"<<endl;
	}
	return 0;
}
