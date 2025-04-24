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
	int q ,r1, r2, r;
	int s1=1, s2=0, s;
	int t1=0, t2=1, t;
	int gr,lr;
	int gcd,org1, org2;
	
	cout << "Enter 2 no.s :" << endl;
	cin >> r1 >> r2 ;
	
	tie(gr,lr) = setGreaterAndLesser(r1,r2);
	
	org1=gr;
	org2=lr;

	while(lr>0){
		q = gr/lr;
		r = gr%lr;
		gr=lr;
		lr=r;
		
		s = s1-s2*q;
		t = t1-t2*q;
		s1=s2;
		s2=s;
		
		t1=t2;
		t2=t;
	}
	
	gcd = org1*s1+org2*t1;
	cout << "GCD: " << gr << endl;
	cout << "a*s+b*t:" << gcd << endl;
	return 0;
}
