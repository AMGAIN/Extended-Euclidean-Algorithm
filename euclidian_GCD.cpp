#include <iostream>
#include <tuple>

using namespace std;

tuple<int,int> setGreaterAndLesser(int r1,int r2){
	float a=9;
	if(r1>r2){
		return make_tuple(r1,r2);
	}
	else{
		return make_tuple(r2,r1);
	}
}

int main(){
	int r1, r2, r;
	int gr,lr;
	
	cout << "Enter 2 no.s :" << endl;
	cin >> r1 >> r2 ;
	
	tie(gr,lr) = setGreaterAndLesser(r1,r2);

	while(lr>0){
		r = gr%lr;
		gr=lr;
		lr=r;
	}
	
	cout << "GCD: " << gr << endl;
	
	return 0;
}
