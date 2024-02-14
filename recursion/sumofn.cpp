#include <bits/stdc++.h>
using namespace std;
int ctr =1;
int sum =0;

int test(int no){
	if(ctr>no){
		return sum;
	}
	else{
		sum+=ctr;
		ctr++;
		test(no);

	}
	return sum;
}

int main(){
	cout<<"enter no: \n";

	int x;cin>>x;

	cout<<"the sum 1-"<<x<<" is "<<test(x);


	return 0;
}