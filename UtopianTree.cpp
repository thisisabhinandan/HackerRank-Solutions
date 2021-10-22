#include <iostream>
using namespace std;

int main() { 
	 int t; cin>>t;
	while(t--){
		int n; 
	cin>>n;
	int h=2; int i=2;
	if(n<=1) { cout<<n+1<<endl; }
	else {
	while(i<=n)
	{ 
  if (i%2==0) { h=h+1; }
	else h=h*2; 
	i++;
	}
	cout<<h<<endl;
	}
	}
}
