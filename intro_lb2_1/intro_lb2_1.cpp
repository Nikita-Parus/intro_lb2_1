#include <iostream>

using namespace std;

bool isodd(int a) {
	return a % 2 != 0 ? 1 : 0;
}

int main()
{
	setlocale(0,".1251");
	int n, sum_even = 0, sum_odd = 0, sum = 0;
	cin >> n;
	// print all even numbers from 1 no N
	for (int i = 1; i <= n; i++) {
		if (!isodd(i)) {
			cout << i << endl;
			sum_even += i;
		}
		else {
			sum_odd += i;
		}
		sum += i;
	}
	printf("sum_even = %d, sum_odd = %d, sum = %d\n",sum_even, sum_odd, sum);

	double sum_of_sums = sum_even + sum_odd + sum;
	cout << "sum_of_sums / 2 = " << sum_of_sums / 2 << endl;
}