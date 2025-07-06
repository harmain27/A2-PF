//#include<iostream>
//using namespace std;
//int main() {
//	int choice;
//	cout << "Enter '1' for car\nEnter '2' for auto\nEnter '3' for bike\n";
//	cin >> choice;
//	if (choice != 1 && choice != 2 && choice != 3) {
//		cout << "Invalid input.\n";
//		return 0;
//	}
//	string v_type;
//	if (choice == 1)
//		v_type = "car";
//	else if (choice == 2)
//		v_type = "auto";
//	else
//		v_type = "bike";
//	int bfare, wtime, tjourneytime, distance;
//	cout << "Enter Base Fare for your ride\n";
//	cin >> bfare;
//	cout << "Enter waiting time (in minutes)\n";
//	cin >> wtime;
//	cout << "Enter total journey time (in minutes)\n";
//	cin >> tjourneytime;
//	cout << "Enter distance from pickup to destination (in kilo meters)\n";
//	cin >> distance;
//	char pcode;
//	cout << "Do you have a promo code?\nEnter 'y' for Yes or Enter 'n' for No\n";
//	cin >> pcode;
//	if (pcode != 'y' && pcode != 'Y' && pcode != 'n' && pcode != 'N') {
//		cout << "Invalid input\n";
//		return 0;
//	}
//	int permin, perkm, discount, tdistancecharge, tjourneycharge;
//	cout << "Enter per minute charges\n";
//	cin >> permin;
//	if (permin < 0) {
//		cout << "Invalid input\n";
//		return 0;
//	}
//	cout << "Enter per km charges\n";
//	cin >> perkm;
//	if (perkm < 0) {
//		cout << "Invalid input\n";
//		return 0;
//	}
//	tdistancecharge = distance * perkm;
//	tjourneycharge = tjourneytime * permin;
//	cout << "Enter the integer percentage for the amount of discount with your promo code\n";
//	cin >> discount;
//	if (discount < 0 || discount>99) {
//		cout << "Invalid input for discount\n";
//		return 0;
//	}
//	char surge = 'n';
//	string ampm;
//	int surchargerate, hours, mins;
//	cout << "Enter the surcharge rate\n";
//	cin >> surchargerate;
//	cout << "Enter current time:\nIs it pm or am?\n";
//	cin >> ampm;
//	if (ampm != "am" && ampm != "pm") {
//		cout << "Invalid input\n";
//		return 0;
//	}
//	cout << "Enter the hours (from 1 to 12)\n";
//	cin >> hours;
//	if (hours < 1 || hours>12) {
//		cout << "Invalid input\n";
//		return 0;
//	}
//	cout << "Enter the minutes (from 0 to 59)\n";
//	cin >> mins;
//	if (mins < 0 || mins>59) {
//		cout << "Invalid input\n";
//		return 0;
//	}
//	if (ampm == "pm") {
//		if (hours == 1 || hours == 2 || hours == 7 || hours == 8) {
//			surge = 'y';
//		}
//		if (hours == 3 || hours == 9) {
//			if (mins == 0) {
//				surge = 'y';
//			}
//		}
//	}
//	float tcost = 0;
//	int wcharge = 0;
//	if (wtime > 3) {
//		wcharge = 50;
//	}
//	if (choice == 3) {
//		tcost = tcost + bfare + tjourneycharge + tdistancecharge + wcharge;
//	}
//	else if (choice == 2) {
//		tcost = (tcost + bfare + tjourneycharge + tdistancecharge + wcharge) * 2;
//	}
//	else {
//		tcost = (tcost + bfare + tjourneycharge + tdistancecharge + wcharge) * 3;
//	}
//	float surgerate = 0;
//	if (surge == 'y') {
//		surgerate = (surchargerate / 100) * tcost;
//		tcost = tcost + surgerate;
//	}
//	float discountvalue = 0;
//	if (pcode == 'y' || pcode == 'Y') {
//		discountvalue = ((discount / 100.0) * tcost);
//	}
//	tcost = tcost - discountvalue;
//	float driver = 0.7 * tcost;
//	float company = 0.2 * tcost;
//	float tax = 0.1 * tcost;
//	cout << "Type of vehicle: " << v_type << "\nBase fare: " << bfare << "\nDistance charges: " << tdistancecharge << endl;
//	cout << "Time charges: " << tjourneycharge << "\nWaiting penalty: " << wcharge << "\nSurge charges: " << surgerate << endl;
//	cout << "Discount: " << discountvalue << "\nTrip fare: " << tcost << "\n";
//	cout << "Share of driver: " << driver << "\nShare of company: " << company << "\nTax: " << tax << endl;
//	return 0;
//}