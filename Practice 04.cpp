////Binomial coefficient nCr
//#include<iostream>
//using namespace std;
//int N(int n) {
//	int factn = 1;
//	for (int i = 1;n >= i;n--) {
//		factn = factn * n;
//	}
//	return factn;
//}
//int R(int r) {
//	int factr = 1;
//	for (int i = 1;r >= i;r--) {
//		factr = factr * r;
//	}
//	return factr;
//}
//int A(int n, int r) {
//	int a = n - r;
//	int facta = 1;
//	for (int i = 1;a >= i;a--) {
//		facta = facta * a;
//	}
//	return facta;
//}
//int nCr(int n, int r) {
//	int nCr = (N(n)) / ((R(r)) * (A(n, r)));
//	return nCr;
//}
//int main() {
//	int n, r;
//	cout << "Enter n\n";
//	cin >> n;
//	cout << "Enter r\n";
//	cin >> r;
//	cout << n << "C" << r << "= " << nCr(n, r) << endl;
//	return 0;
//}