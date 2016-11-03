#include <iostream>

using namespace std;

int main (void) {
	int n;
	int e;
	cout << "Inserire numero di valori desiderati, rimanendo al di sotto dei 100" <<endl;
	cin >> n;
		if (n>100) {
			cout << "Inserire un altro valore" <<endl;
		}
		else {
				cin >> e;
				if (e>0) {
				cout << e/2 <<endl;
				cout << e%2 <<endl;
			}
	cout << "Inserire un numero intero" <<endl;
}
}
