#include <bits/stdc++.h>
using namespace std;

int main(){
	for(int i=4;i>=0;i--){
		for(int j=1;j<=5-i;j++){
			cout<<" ";
		}
		for(int j=0;j<2*i+1;j++){
			cout<<"*";
		}
		cout<<"\n";
	}

	return 0;
}		