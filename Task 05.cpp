#include<iostream>
using namespace std;
int main() {
	cout << "MEGA PACKAGE:(Subscription charges 599)\na) Offnet Minutes: 1500 (1.5 rupee per minute will be charges for additional minutes)\non-net minutes:2500 (0.75 rupee per minute will be charged for additional minutes\n";
	cout << "SMS: 700(0.5 rupee per message will be charged for additional messages\nMobile Data: 10GB (8.5 rupee per GB will be charged for additional data usage\n";
	cout << "SUPREME PACKAGE:(Subscription charges 1199)\na) Offnet Minutes: 2000 (1.25 rupee per minute will be charges for additional minutes)\non-net minutes:3000 (0.65 rupee per minute will be charged for additional minutes\n";
	cout << "SMS: 1000(0.45 rupee per message will be charged for additional messages\nMobile Data: 20GB (6.5 rupee per GB will be charged for additional data usage\n";
	cout << "PREMIUM PACKAGE:(Subscription charges 2500)\na) Offnet Minutes: Unlimited\non-net minutes:Unlimited\n";
	cout << "SMS: Unlimited\nMobile Data: Unlimited\n";
	int offmin, onmin, sms, data;
	float tcostoffmega = 0, tcostonmega = 0, tcostsmsmega = 0, tcostdatamega = 0, tcostoffsupreme = 0, tcostonsupreme = 0, tcostsmssupreme = 0, tcostdatasupreme = 0, tcostmega, tcostsupreme;
	cout << "\nEnter your weekly requirements:\n";
	cout << "Offnet mins: ";
	cin >> offmin;
	cout << "Onnet mins: ";
	cin >> onmin;
	cout << "SMS: ";
	cin >> sms;
	cout << "Mobile data(in GB's): ";
	cin >> data;
	if (offmin < 0 || onmin < 0 || sms < 0 || data < 0 || offmin > 10080) {
		cout << "\nInvalid input.";
		return 0;
	}
	if (offmin > 1500) {
		tcostoffmega = (offmin - 1500) * 1.5;
		if (offmin > 2000) {
			tcostoffsupreme = (offmin - 2000) * 1.25;
		}
	}
	if (onmin > 2500) {
		tcostonmega = (onmin - 2500) * 0.75;
		if (onmin > 3000)
			tcostonsupreme = (onmin - 3000) * 0.65;
	}
	if (sms > 700) {
		tcostsmsmega = (sms - 700) * 0.5;
		if (sms > 1000)
			tcostsmssupreme = (sms - 1000) * 0.45;
	}
	if (data > 10) {
		tcostdatamega = (data - 10) * 8.5;
		if (data > 20)
			tcostdatasupreme = (data - 20) * 6.5;
	}
	tcostmega = 599 + tcostoffmega + tcostonmega + tcostsmsmega + tcostdatamega;
	tcostsupreme = 1199 + tcostoffsupreme + tcostonsupreme + tcostsmssupreme + tcostdatasupreme;
	if (tcostmega < 2500) {
		if (tcostmega < tcostsupreme)
			cout << "Best economical package for you is MEGA PACKAGE\n";
		else
			cout << "Best economical package for you is SUPREME PACKAGE\n";
	}
	else if (2500 < tcostsupreme)
		cout << "Best economical package for you is PREMIUM PACKAGE\n";
	else
		cout << "Best economical package for you is SUPREME PACKAGE\n";
	return 0;
}