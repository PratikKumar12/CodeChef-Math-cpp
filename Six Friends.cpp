#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if((a*3)<(b*2)){
	        cout<<a*3<<endl;
	    }
	    else{
	        cout<<b*2<<endl;
	    }
	}
	return 0;
}
