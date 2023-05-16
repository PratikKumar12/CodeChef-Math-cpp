#include <iostream>
using namespace std;

int main() {
	int a,count,count1;
	 count=0;
	 count1=0;
	cin>>a;
	int arr[a];
	for(int i=0;i<a;i++){
	    cin>>arr[i];
	    if(arr[i]%2==0){count++;}
	    else{count1++;}
	}
	if(count>count1){cout<<"READY FOR BATTLE";}
	else{cout<<"NOT READY";}
	
	return 0;
}
