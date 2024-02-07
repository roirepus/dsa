#include <bits/stdc++.h>
using namespace std;


void test(){
	int ctr =0;
	if(ctr >=2){
		return ;
	}
	else{
		cout<<"1\n";
		ctr++;
		test();
	}
	return ;
}

int main(){

	test();

	return 0;
}