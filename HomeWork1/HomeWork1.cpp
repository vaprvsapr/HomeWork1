#include <iostream>
#include <vector>


using namespace std;

void PrintList(vector<int> v) {
	for (auto element : v) {
		cout << element << " ";
	}
}

int main() {

	vector<int> a = { 1, 2, 3, 4, 5 };
	vector<int> b = { 6, 7, 8, 9, 10 };
	vector<int> c = a;

	auto iter1 = a.rbegin();
	auto iter2 = b.begin();

	while (iter1 != a.rend()) {
		*iter1 = *iter2;

		iter1 = next(iter1);
		iter2 = next(iter2);
	}

	b = c;

	PrintList(a);
	cout << endl;
	PrintList(b);
}