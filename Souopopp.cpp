# include <iostream>
#include <ctime>
using namespace std;
int main() {
	//const int n = 10;
	//int m[n];
	////srand(time(nullptr));
	////for (int i = 0; i < n; i++) {
	////	m[i] = rand()%51;
	////	cout << m[i] << ' ';
	//}
	//cout << endl;
	//for (int i = n - 1; i >= 0; i-=2) {
	//	cout << m[i] << ' ';
	//}
	//1
	/*const int s = 5;
	int m[s];
	srand(time(nullptr));
	for (int i = 0; i < s; i++) {
		m[i] = rand() % 21 - 10;
		cout << m[i] << ' ';
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < s; i--) {
		if (m[i] % 2 == 0) {
			sum +=m[i];
		}

	}
	cout << sum;*/
	//2
	const int n = 8;
	int m[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		m[i] = rand() % 31 - 20;
		cout << m[i] << ' ';
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i--) {
		if (m[i] % 3 == 0) {
			cout << m[i] << ' ';
		}
	}
}
