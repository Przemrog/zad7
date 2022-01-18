// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;


// ZAD 1


/*

int decNaBin(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return (n % 2 + 10 * decNaBin(n / 2));
	}
}

int main() {
	int n;
	cin >> n;
	cout << decNaBin(n);
	return 0;
}

*/



// ZAD 2


/*

int NWD(int a, int b) {
	if (b != 0) {
		return NWD(b, a % b);
	}
	else {
		return a;
	}
}

int main() {

	int a;
	int b;

	cout << "Podaj a: ", cin >> a;
	cout << "Podaj b: ", cin >> b;

	cout << "NWD: " << NWD(a, b);

	return 0;


}

*/

// ZAD 3


/*

int ciagFib(int a) {
	if ((a == 1) || (a == 0)) {
		return a;
	}
	else {
		return (ciagFib(a - 1) + ciagFib(a - 2));
	}
}

int main() {

	int a; 

	int i = 0;

	cout << "Podaj dlugosc ciagu : ", cin >> a;

	while (i < a) {
		cout << " " << ciagFib(i);
		i++;
	}
	return 0;
}

*/

// ZAD 4

/*

int silnia(int n){
	if (n > 1){
		return n * silnia(n - 1);
	}
	else{ 
		return 1;
	}
}


int main()
{
	int n;

	cout << "Podaj liczbe: ", cin >> n;

	cout << "Silnia podanej liczby:  " << silnia(n);

	return 0;
}

*/


// ZAD 5


/*





int ciag(int a) {
	if (a == 1){
		return 0;
	}
	else if (a == 2) {
		return 0.5;
	}
	else if (a>2){
		return (ciag(a - 1) * ciag(a - 2));
	}
}

int main() {

	int a;


	cout << "Podaj numer elementu ciagu : ", cin >> a;

	cout << " " << ciag(a);

	return 0;
}



*/