#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,x;
	    cin>>a>>b>>c>>d;
	    x=a+c*d;
	    if(x>b){
	        cout<<"overFlow"<<endl;
	    }
	    else if(x<b){
	        cout<<"Unfilled"<<endl;
	    }
	    else{
	        cout<<"filled"<<endl;
	    }
	}
	return 0;
}
