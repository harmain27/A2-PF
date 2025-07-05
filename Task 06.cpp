//#include<iostream>
//using namespace std;
//int main() {
//	float length, width, tcost;
//	char type, choice, crownchoice;
//	int crowns = 0;
//	cout << "Enter the length of the picture (in inches)\n";
//	cin >> length;
//	cout << "Enter the width of the picture (in inches)\n";
//	cin >> width;
//	length += 2;
//	width += 2;
//	tcost = 0.02 * (length * width) + (length * width) * 0.07;
//	cout << "Enter the type of frame\nEnter'r' for Regular or 'f' for Fancy\n";
//	cin >> type;
//	if (type != 'r' && type != 'f') {
//		cout << "Invalid input\n";
//		return 0;
//	}
//	cout << "Do you want to customize the color of your frame?\nEnter 'y' for Yes or 'n' for No\n";
//	cin >> choice;
//	if (choice != 'y' && choice != 'n') {
//		cout << "Invalid input\n";
//		return 0;
//	}
//	cout << "Do you want to put crowns on the corners?\nEnter 'y' for Yes or 'n' for No\n";
//	cin >> crownchoice;
//	if (crownchoice != 'y' && crownchoice != 'n') {
//		cout << "Invalid input\n";
//		return 0;
//	}
//	if (crownchoice == 'y') {
//		cout << "Enter number of crowns\n";
//		cin >> crowns;
//	}
//	if (choice == 'y')
//		tcost = tcost + ((0.1 * length) + (0.1 * width)) * 2;
//	if (type == 'r') {
//		tcost = tcost + ((0.15 * length) + (0.15 * width)) * 2;
//	}
//	else {
//		tcost = tcost + ((0.25 * length) + (0.25 * width)) * 2;
//	}
//	tcost = tcost + (0.35 * crowns);
//	cout << "Total cost for frame is: " << tcost;
//	return 0;
//}