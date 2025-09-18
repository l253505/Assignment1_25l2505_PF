//#include<iostream>
//using namespace std;
//int main() {
//	int bd, bm, by; //birth date,birth month,birth year
//	int cd, cm, cy; //current date,current month,current year
//	cout << "Enter date of birth (dd mm yyyy) ";
//	cin >> bd >> bm >> by;
//	cout << "Enter current date (dd mm yyyy) ";
//	cin >> cd >> cm >> cy;
//	//validation
//	if ((by > cy) || (by == cy && bm > cm) || (by == cy && bm == cm && bd > cd)) {
//		cout << "Your Birthdate is in the future";
//	}
//	//birth month is greater than current month
//	if (bm > 12||bd>31||cm>12 || cd>31) {
//		cout << "Invalid input";
//		return 0;
//	}
//	if (bm > cm) {
//		//birthdate greater than current date
//		if (bd > cd) {
//			if ((bm == 1) || (bm == 3) || (bm == 5) || (bm == 7) || (bm == 8) || (bm == 10) || (bm == 12)) {
//				cout << "Your age is " << (cy - by) - 1 << " years " << (12 - bm + cm) - 1 << " months " << (31 - bd + cd) - 1 << " days ";
//			}
//			else if ((bm == 4) || (bm == 6) || (bm == 9) || (bm == 11)) {
//				cout << "Your age is " << (cy - by) - 1 << " years " << (12 - bm + cm) - 1 << " months " << (30 - bd + cd) - 1 << " days ";
//			}
//			else if (bm == 02) {
//				if ((by % 400 == 0) || ((by % 100 != 0) && (by % 4 == 0))) {
//					cout << "Your age is " << (cy - by) - 1 << " years " << (12 - bm + cm) - 1 << " months " << (29 - bd + cd) - 1 << " days ";
//				}
//				else
//					cout << "Your age is " << (cy - by) - 1 << " years " << (12 - bm + cm) - 1 << " months " << (28 - bd + cd) - 1 << " days ";
//			}
//		}
//		//birthdate less than current date
//		else if (bd < cd) {
//			cout << "Your age is " << (cy - by)-1 << " years " << 12 - bm + cm << " months " << (cd - bd) << " days ";
//		}
//		//birthdate is equal to current date
//		else
//			cout << "Your age is " << (cy - by)-1 << " years " << 12 - bm + cm << " months " << (cd - bd) << " days ";
//}
//	//birth month is less than current month
//	else if (bm < cm) {
//		//birthdate greater than current date
//		if (bd > cd) {
//			if ((bm == 1) || (bm == 3) || (bm == 5) || (bm == 7) || (bm == 8) || (bm == 10) || (bm == 12)) {
//				cout << "Your age is " << (cy - by) << " years " << (cm - bm) - 1 << " months " << (31 - bd + cd) << " days ";
//			}
//			else if ((bm == 4) || (bm == 6) || (bm == 9) || (bm == 11)) {
//				cout << "Your age is " << (cy - by) << " years " << (cm - bm) - 1 << " months " << (30 - bd + cd) << " days ";
//			}
//			else if (bm == 2) {
//				if ((by % 400 == 0) || ((by % 100 != 0) && (by % 4 == 0))) {
//					cout << "Your age is " << (cy - by) << " years " << (cm - bm) - 1 << " months " << (29 - bd + cd) << " days ";
//				}
//				else
//					cout << "Your age is " << (cy - by) << " years " << (cm - bm) - 1 << " months " << (28 - bd + cd) << " days ";
//			}
//		}
//		//birthdate less than or equal to current date
//		else if ((bd < cd)||(bd==cd)) {
//				cout << "Your age is " << (cy - by) << " years " << (cm - bm) << " months " << (cd - bd) << " days ";
//			}		
//	}
//	//when birth month is equal to current month
//	else if (bm == cm) {
//			//birthdate greater than current date
//			if (bd > cd) {
//				if ((bm == 1) || (bm == 3) || (bm == 5) || (bm == 7) || (bm == 8) || (bm == 10) || (bm == 12)) {
//					cout << "Your age is " << (cy - by) - 1 << " years " << (12 - bm + cm) - 1 << " months " << (31 - bd + cd)  << " days ";
//				}
//				else if ((bm == 4) || (bm == 6) || (bm == 9) || (bm == 11)) {
//					cout << "Your age is " << (cy - by) - 1 << " years " << (12 - bm + cm) - 1 << " months " << (30 - bd + cd)  << " days ";
//				}
//				else if (bm == 2) {
//					if ((by % 400 == 0) || ((by % 100 != 0) && (by % 4 == 0))) {
//						cout << "Your age is " << (cy - by) - 1 << " years " << (12 - bm + cm) - 1 << " months " << (29 - bd + cd)  << " days ";
//					}
//					else
//						cout << "Your age is " << (cy - by) - 1 << " years " << (12 - bm + cm) - 1 << " months " << (28 - bd + cd) << " days ";
//				}
//			}
//			//birthdate less than or equal to current date
//			else if ((bd < cd) || (bd == cd))  {
//				cout << "Your age is " << (cy - by) << " years " << (cm - bm) << " months " << (cd - bd) << " days ";
//			}
//		}
//	return 0;
//}