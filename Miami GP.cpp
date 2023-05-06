#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    double a,b,x;
	    cin>>a>>b;
	    x=a*1.07;
	    if(x>=b){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
