#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,x,y;
	    cin>>a>>b;
	    x=(100-a);
	    y=(200-(b*2));
	    if(x<y){
	        cout<<"FIRST"<<endl;
	    }
	    else if(x>y){
	        cout<<"SECOND"<<endl;
	    }
	    else{
	        cout<<"BOTH"<<endl;
	    }
	}
	return 0;
}
