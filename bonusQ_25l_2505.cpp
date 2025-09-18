//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	double x1, x2, x3;
//	double y1, y2, y3;
//	double a1, a2, a3;
//	cout << "Enter coordinates of line 1 (x1 y1)";
//	cin >> x1 >> y1;
//	cout << "Enter coordinates of line 2 (x2 y2)";
//	cin >> x2 >> y2;
//	cout << "Enter coordinates of line 3 (x3 y3)";
//	cin >> x3 >> y3;
//	//length of lines
//	a3 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
//	a1 = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
//	a2 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
//	double s1 = sqrt(a1);
//	double s2 = sqrt(a2);
//	double s3 = sqrt(a3);
//	//triangle or not
//	if ((y2 - y1) / (x2 - x1) != (y3 - y2) / (x3 - x2)) {
//		////equilateral
//		if ((s1 == s2) && (s2 == s3)) {
//			cout << "It is an equilateral triangle";
//		}
//		// right-angled isosceles OR right-angled
//		else if ((a1 + a2 == a3) || (a2 + a3 == a1) || (a1 + a3 == a2)) {
//			if ((s1 == s2) || (s2 == s3) || (s1 == s3)) {
//				cout << "It is a right-angled isosceles triangle";
//			}
//			else {
//				cout << "It is a right-angled  triangle";
//			}
//		}
//		//isosceles
//		else	if ((s1 == s2) || (s2 == s3) || (s1 == s3)) {
//			cout << "It is an isosceles triangle";
//
//		}
//		//scalene
//		else if (s1 != s2 && s2 != s3 && s1 != s3) {
//			cout << "it is a scalene triangle";
//		}
//
//		else {
//			cout << "These points are collinear and donot form a triangle.";
//		}
//	}
//	return 0;
//}