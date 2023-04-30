#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(10*a>=b){
	        cout<<b*c<<endl;
	    }
	    else{
	        cout<<10*a*c<<endl;
	    }
	}
	return 0;
}
