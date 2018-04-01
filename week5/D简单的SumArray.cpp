#include <iostream>
#include <string>
using namespace std;
template <class T>
T SumArray(T *a, T *b) {
	T res;
	for(; a != b; a++)
		res += *a;
	return res;
}
int main() {
	string array[4] = { "Tom","Jack","Mary","John"};
	cout << SumArray(array,array+4) << endl;
	int a[4] = { 1, 2, 3, 4};  //��ʾ��1+2+3+4 = 10
	cout << SumArray(a,a+4) << endl;
	return 0;
}
