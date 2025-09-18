//#include<iostream>
//using namespace std;
//int main() {
//	int n1, n2;
//	char op;
//	int add, sub, mul, div, mod;
//	
//	cout << "Enter a  number";
//	cin >> n1;
//		cout << "Enter an operator";
//		cin >> op;
//		cout << "Enter a  number";
//		cin >> n2;
//		switch (op)
//		{
//		case '+':
//			add = n1 + n2;
//			cout << add;
//			break;
//		
//		case '-':
//			sub = n1 - n2;
//			cout << sub;
//			break;
//		
//		case '*': 
//			mul = n1 * n2;
//			cout << mul;
//			break;
//
//		case '/': 
//			switch (n2 > 0) {
//			case 1:
//				div = n1 / n2;
//				cout << div;
//				break;
//			case 0:
//				cout << "Invalid input";
//				break;
//			}
//			break;
//		case '%':
//			switch (n2 > 0) {
//			case 1:
//				mod = n1 % n2;
//				cout << mod;
//				break;
//			case 0:
//				cout << "Invalid input ";
//				break;
//			}
//			break;
//		case '>':
//			switch (n1 > n2) {
//			case 1:
//				cout << n1 << " is greater than " << n2;
//				break;
//			case 0:
//				cout << n1 << " is not greater than " << n2;
//				break;
//			}
//			{
//			case '<':
//				switch (n1 < n2) {
//
//				case 1:cout << n1 << " is less than " << n2;
//					break;
//				case 0:
//					cout << n1 << " is not less than " << n2;
//					break;
//				}
//			}
//			{
//			case '=':
//				switch (n1 == n2) {
//				case 1:
//					cout << "both numbers are equal";
//				}
//			}
//			break;
//			{
//			case '&':
//				switch ((n1 / 2 == 0) & (n2 / 2 == 0)) {
//				case 1:
//					cout << "Both numbers are even";
//					break;
//				case 0:
//					cout << "Both numbers are not even";
//				}
//			}
//			break;
//			{
//			case '|':
//				switch ((n1 / 2 != 0) | (n2 / 2 != 0)) {
//				case 1:
//					cout << "Both numbers are odd";
//					break;
//				case 0:
//					cout << "Both numbers are not odd";
//				}
//				}
//			break;
//			}
//
//	return 0;
//}