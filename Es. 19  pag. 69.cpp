#include <iostream>
using namespace std;
int main (void) {
	int n;
	int r;
	cout << "Ecco i primi 100 numeri pari:" <<endl;
	for (n=0; n<=100; n++) {
		r=n%2;
		if (r==0){
			cout << n <<endl;
		}
	}
}
