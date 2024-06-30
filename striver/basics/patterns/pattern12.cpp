#include <bits/stdc++.h>
using namespace std;

int main(){

	for(int i=1;i<5;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}

		for(int j=4;j<=4-i;j--){
			cout<<" ";
		}

		for(int j=4;j<=4-i;j--){
			cout<<" ";
		}

		for(int j=0;j<=i;j++){
			cout<<j-i;
		}


		cout<<"\n";


	}
	
	

	return 0;
}		