#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
    while(t--){
        float x,y,z,a;
        cin>>x>>y>>z;
        a=(x+y)/2;
        //cout<<a<<"\n";
        if(a>z){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
	return 0;
}
