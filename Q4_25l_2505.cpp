//#include<iostream>
//using namespace std;
//int main() {
//	int x, y;
//	cout << "enter x coordinate";
//	cin >> x;
//	cout << "enter y coordinate";
//	cin >> y;
//	if (x == 0) {
//		if (y == 0) {
//			cout << "The point(" << x << "," << y << ") lies at origin";
//		}
//		else if (y < 0) {
//			cout << "The point(" << x << "," << y << ") lies on negative y-axis";
//		}
//		else {
//			cout << "The point(" << x << "," << y << ") lies on positive y-axis";
//		}
//		return 0;
//	}
//	else if (y == 0) {
//		if (x > 0) {
//			cout << "The point(" << x << "," << y << ") lies on positive x-axis";
//		}
//		else {
//			cout << "The point(" << x << "," << y << ") lies on negative x-axis";
//		}
//		return 0;
//	}
//
//	 switch(x>0) {
//	 case 1:
//		 switch (y > 0) {
//		 case 1:
//			 cout << "The point(" << x << "," << y << ") lies in Quadrant 1";
//			 break;
//
//		 case 0:
//			 cout << "The point(" << x << "," << y << ") lies in Quadrant 4";
//			 break;
//		 }
//		 break;
//	 case 0:
//		 switch (y > 0) {
//		 case 1:
//			 cout << "The point(" << x << "," << y << ") lies in Quadrant 2";
//			 break;
//		 case 0:
//			 cout << "The point(" << x << "," << y << ") lies in Quadrant 3";
//			 break;
//		 }
//		 break;
//		}
//	
//	return 0;
//}