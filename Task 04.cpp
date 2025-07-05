//#include<iostream>
//using namespace std;
//int main() {
//	int date, month, year;
//	cout << "Enter current date\n";
//	cin >> date;
//	if (date <= 0 || date > 31) {
//		cout << "Error.Invalid date.";
//		return 0;
//	}
//	cout << "Enter current month\n";
//	cin >> month;
//	if (month > 12 || month <= 0) {
//		cout << "Error. Invalid month.";
//		return 0;
//	}
//	if (month == 2) {
//		if (date < 1 || date > 29) {
//			cout << "Invalid date for given month.";
//			return 0;
//		}
//	}
//	if (month == 4 || month == 6 || month == 9 || month == 11) {
//		if (date < 1 || date > 30) {
//			cout << "Invalid date for given month.";
//			return 0;
//		}
//	}
//	else if (date < 1 || date > 31) {
//			cout << "Invalid date for given month.";
//		return 0;
//	}
//	cout << "Enter current year\n";
//	cin >> year;
//	if (year < 1000 || year > 9999) {
//		cout << "Invalid.Year should be a four digit number.";
//		return 0;
//	}
//	if (month * date == year % 100) {
//		cout << "Its a magical date\n";
//	}
//	else
//		cout << "Its not a magical date\n";
//	if (month == 2 && date == 29) {
//		cout << "Its a leap year\n";
//	}
//	else
//		cout << "Its not a leap year\n";
//	return 0;
//}