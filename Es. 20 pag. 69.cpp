#include <iostream>
using namespace std;
int main (void) {
	int n;
	int r;
	cout << "Ecco i numeri pari:" <<endl;
		for (n=0; n>=0; n++) {
		r=n%2;
		if (r==0){
			cout << n <<endl;
		}
	}
}
