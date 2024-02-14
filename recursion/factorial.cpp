#include <bits/stdc++.h>
using namespace std;
int ctr =1;
int factorial =1;

int test(int no){
	if(ctr>no){
		return factorial;
	}
	else{
		factorial*=ctr;
		ctr++;
		test(no);

	}
	return factorial;
}

int main(){
	cout<<"enter no: \n";

	int x;cin>>x;

	cout<<"factorial of 1-"<<x<<" is "<<test(x);


	return 0;
}