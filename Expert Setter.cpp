#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    double a,b;
	    cin>>a>>b;
	    if((a*50)/100 <=b){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
