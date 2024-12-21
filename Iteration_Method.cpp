#include <iostream>
#include <iomanip>

using namespace std;

const float exactNum = 3.2300;

float newNum(float prevX) {
	return ((4 * log(prevX) + 5) / 3);
}

int main() {
	for (float i = 2.0; ; i = newNum(i)) {
		cout << setprecision(5) << i << endl;
		if (i == newNum(i))
			break;
	} 
	return 0;
}

