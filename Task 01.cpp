//#include<iostream>
//using namespace std;
//int main() {
//	float team1level, team2level, team3level, t1acr, t2acr, t3acr;
//	team1level = (0.1) * 23 + (0.1) * 124 + (0.1) * 56 + (0.1) * 67 + (0.1) * 98;
//	team2level = (0.1) * 102 + (0.1) * 90 + (0.1) * 23 + (0.1) * 76 + (0.1) * 34;
//	team3level = (0.1) * 134 + (0.1) * 91 + (0.1) * 79 + (0.1) * 119 + (0.1) * 78;
//	t1acr = (1.0 * (23 + 124 + 56 + 67 + 98)) / 5;
//	t2acr = (1.0 * (102 + 90 + 23 + 76 + 34)) / 5;
//	t3acr = (1.0 * (134 + 91 + 79 + 119 + 78)) / 5;
//	cout << "ACR of team one: " << t1acr;
//	cout << "\nACR of team two: " << t2acr;
//	cout << "\nACR of team three: " << t3acr << "\n";
//	if (t1acr > t2acr && t1acr > t3acr)
//		cout << "Strongest squads ACR: " << t1acr;
//	else if (t2acr > t1acr && t2acr > t3acr)
//		cout << "Strongest squads ACR: " << t2acr;
//	else
//		cout << "Strongest squads ACR: " << t3acr;
//	if (t1acr < t2acr && t1acr < t3acr)
//		cout << "\nWeakest squads ACR: " << t1acr;
//	else if (t2acr < t1acr && t2acr < t3acr)
//		cout << "\nWeakest squads ACR: " << t2acr;
//	else
//		cout << "\nWeakest squads ACR: " << t3acr;
//	cout << "\n----Standings----\n";
//	if (team1level > team2level && team1level > team3level) {
//		cout << "Team2 VS Team3\nTBD VS Team1";
//	}
//	else if (team2level > team1level && team2level > team3level) {
//		cout << "Team1 VS Team3\nTBD VS Team2";
//	}
//	else
//		cout << "Team1 VS Team2\nTBD VS Team3";
//	return 0;
//}