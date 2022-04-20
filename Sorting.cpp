#include <array>
#include <iostream>

using std::endl;
using std::cout;
using std::cin;
using namespace std;

void insert(int a[], int n) {
	
	for (int i = 0; i < n; i++) {
		int pop = i;
		
		
		for (int j = i + 1; j < n; j++) {

			//from lower to higher number " < ".
			if (a[j] < a[pop]) {
				pop = j;
			}
		}
		int hold = a[i];
		a[i] = a[pop];
		a[pop] = hold;

		cout << a[i] << " ";
	}
}


int main() {

	int c = 4;
	int b[] = { 500,2000,11010,99 };

	insert(b, c);

}