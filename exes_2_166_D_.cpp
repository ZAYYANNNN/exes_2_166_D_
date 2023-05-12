#include <iostream>
using namespace std;

int binary_search(int zyn[89], int n, int x) {
	int muhammad = 0;
	int izaaz = n - 1;
	int mid;

	while (muhammad <= izaaz) {
		mid = (muhammad + izaaz) / 2;

		if (zyn[mid] == x) {
			return mid;
		}
		else if (x < zyn[mid]) {
			izaaz = mid - 1;
		}
		else {
			muhammad = mid + 1;
		}
	}

	return -1;

}


int main() {

	int zyn[89] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int n = zyn[89];
	int x;

	cout << "Masukan Element yang ingin anda cari = ";
	cin >> x;

	int hasil = binary_search(zyn, n, x);

	if (hasil == -1) {
		cout << "Not Found" << endl;
	}
	else {
		cout << "Found" << hasil << endl;
		break;

	}


	return 0;
}



