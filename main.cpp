#include <iostream>
#include <ctime>
using namespace std;

void summElement(int& sum, int& sumSquart) {
	srand(time(0));
	const int n = 10;
	int R[n];
	sum = 0;
	sumSquart = 0;

	for (size_t i = 0; i < n; i++) {
		R[i] = rand() % 21 - 10;
		cout << R[i] << " ";
	}

	for (size_t i = 0; i < n; i++) {
		sum += R[i];

		if (R[i] >= 0) {
			sumSquart += sqrt(R[i]);
		}
	}

	cout << endl;
}

int main() {
	setlocale(LC_ALL, "Ru");
	int sum;
	int sumSquart;

	summElement(sum, sumSquart);

	cout << "Сумма элементов: " << sum << endl << "Сумма квадратных корней: " << sumSquart;
}