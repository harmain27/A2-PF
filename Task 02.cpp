//#include<iostream>
//using namespace std;
//int main() {
//	int d, m;
//	string day, month;
//	cout << "Enter a day\n";
//	cin >> d;
//	while (d > 7 || d < 1) {
//		cout << "Invalid number. Enter a valid day\n";
//		cin >> d;
//	}
//	cout << "Enter a month\n";
//	cin >> m;
//	while (m > 12 || m < 1) {
//		cout << "Invalid month. Enter a valid month\n";
//		cin >> m;
//	}
//	switch (d) {
//	case 1:
//		day = "Monday";break;
//	case 2:
//		day = "Tuesday";break;
//	case 3:
//		day = "Wednesday";break;
//	case 4:
//		day = "Thursday";break;
//	case 5:
//		day = "Friday";break;
//	case 6:
//		day = "Saturday";break;
//	default:
//		day = "Sunday";break;
//	}
//	switch (m) {
//	case 1:
//		month = "January";break;
//	case 2:
//		month = "February";break;
//	case 3:
//		month = "March";break;
//	case 4:
//		month = "April";break;
//	case 5:
//		month = "May";break;
//	case 6:
//		month = "June";break;
//	case 7:
//		month = "July";break;
//	case 8:
//		month = "August";break;
//	case 9:
//		month = "September";break;
//	case 10:
//		month = "October";break;
//	case 11:
//		month = "November";break;
//	default:
//		month = "December";break;
//	}
//	cout << "Day: " << day << ", Month: " << month;
//	return 0;
//}