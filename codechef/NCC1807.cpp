#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int k;
		cin>>n>>k;
		sum = (n-1)*k;
		sum += (n*(n+1))/2;
		cout<<sum<<endl;
	}
	return 0;
}