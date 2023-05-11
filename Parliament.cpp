#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float a,b;
	    cin>>a>>b;
	    if(b>=a/2){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
