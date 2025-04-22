// 100 e kdar sayıyı çağırır 70 den büyük eşitleri ve 5'e tam bölünenleri yazdırmaz, en sonda i'nin son değerini yazar
#include <iostream>
using namespace std;
int main()
{
	int i = 0;

	for (i = 1; i <= 100; i++) {
		if (i % 5 == 0) {
			continue;
		}
		else if (i >= 70) {
			break;
		}
		cout << i << endl;

	}
	cout << "i : " << i;

	return 0;
}