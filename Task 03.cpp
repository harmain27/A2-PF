//#include<iostream>
//using namespace std;
//int main() {
//	int subs, wt, vids, views, likes;
//	bool monetization;
//	cout << "Enter number of subscribers\n";
//	cin >> subs;
//	while (subs < 0) {
//		cout << "Invalid number of subscribers. Enter again\n";
//		cin >> subs;
//	}
//	cout << "Enter the accumulated watchtime(in hours) in the past 12 months\n";
//	cin >> wt;
//	while (wt < 0) {
//		cout << "Invalid amount of watch time. Enter again\n";
//		cin >> wt;
//	}
//	cout << "Enter the least amount of videos posted in a month in the past year\n";
//	cin >> vids;
//	while (vids < 0) {
//		cout << "Invalid number of vids. Enter again\n";
//		cin >> vids;
//	}
//	cout << "Enter the least amount of views on a video\n";
//	cin >> views;
//	while (views < 0) {
//		cout << "Invalid number of views. Enter again\n";
//		cin >> views;
//	}
//	cout << "Enter the least amount of likes on a video\n";
//	cin >> likes;
//	while (likes < 0) {
//		cout << "Invalid number of likes. Enter again\n";
//		cin >> likes;
//	}
//	if (likes > views) {
//		cout << "ERROR. Invalid Information.";
//		return 0;
//	}
//	if (subs >= 1000 && wt >= 4000 && vids >= 2 && views >= 10 && likes >= (0.4 * views)) {
//		monetization = true;
//	}
//	else
//		monetization = false;
//	if (monetization) {
//		if (subs >= 10000000 && wt > 12000){
//			cout << "Channel is monetized and rewarded a Diamond button\n";
//			return 0;
//	}
//		else if (subs >= 1000000 && wt > 10000) {
//			cout << "Channel is monetized and rewarded a Gold button\n";
//			return 0;
//		}
//		else if (subs >= 100000 && wt > 8000) {
//			cout << "Channel is monetized and rewarded a Silver button\n";
//			return 0;
//		}
//		else {
//			cout << "Channel is monetized but not rewarded anything\n";
//			return 0;
//		}
//	}
//	else
//		cout << "Channel is not monetized and not rewarded anything\n";
//	return 0;
//}