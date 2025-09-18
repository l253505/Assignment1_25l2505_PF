//#include<iostream>
//#include <iomanip>
//#include <stdlib.h>
//using namespace std;
//int main() {
//	int dish_code;
//	double dish_quantity;
//	double currency;
//	int meal_price, sales_tax;
//	int meals_price[] = { 1800, 2000, 2200, 500, 2500 };
//	double converted_price;
//	double price_in_pkr;
//
//	//header
//	cout << left << setw(10) << "Code" << left << setw(10) << "Meal" << right << setw(50) << "Per kg price in pakistani rupees"<<endl<<"\n";
//	//contents
//	cout << left << setw(10) << "1" << left << setw(10) << "Chicken Handi" << right << setw(20) <<meals_price[0] << endl;
//	cout << left << setw(10) << "2" << left << setw(10) << "Chicken Karahi" << right << setw(19) << meals_price[1] << endl;
//	cout << left << setw(10) << "3" << left << setw(10) << "Chicken Tikka" << right << setw(20) <<meals_price[2]<< endl;
//	cout << left << setw(10) << "4" << left << setw(10) << "Chicken Haleem" << right << setw(18) <<meals_price[3] << endl;
//	cout << left << setw(10) << "5" << left << setw(10) << "Creamy Chicken" << right << setw(19) << meals_price[4] << endl;
//	cout << "------------------------------------------------------------------------------------------------------------------------";
//	//Dish code
//	cout << "Enter a dish code from the given menu";
//	cin >> dish_code;
//	if (dish_code < 1 || dish_code>5) {
//		cout << "Invalid dish code";
//		return 0;
//	}
//	else if (dish_code == 1) {
//		cout << "Chicken Handi" << endl;
//	}
//	else if (dish_code == 2) {
//		cout << "Chicken Karahi" << endl;
//	}
//	else if (dish_code == 3) {
//		cout << "Chicken Tikka" << endl;
//	}
//	else if (dish_code == 4) {
//		cout << "Chicken Haleem" << endl;
//	}
//	else if (dish_code == 5) {
//		cout << "Creamy Chicken" << endl;
//	}
//	cout << "------------------------------------------------------------------------------------------------------------------------";
//
//	//dish quantity
//	cout << "Enter the quantity of the dish in kilograms"<<endl;
//	cin >> dish_quantity;
//	if (dish_quantity < 0) {
//		cout << "error!Quantity cannot be less than zero";
//		return 0;
//	}
//	//currency
//	cout << "------------------------------------------------------------------------------------------------------------------------";
//
//	cout << left << setw(10) << "Code" << left << setw(10) << "currency type" << endl << "\n";
//	cout << left << setw(10) << "1" << left << setw(10) << "pakistani rupee PKR" << endl;
//	cout << left << setw(10) << "2" << left << setw(10) << "euro € "<<  endl;
//	cout << left << setw(10) << "3" << left << setw(10) << "dollar $"<< endl;
//
//	cout << "Enter the currency code you want to pay with";
//	cin >> currency;
//	if (currency !=  1&&currency != 2 && currency!= 3) {
//		cout << "Invalid currency code";
//		return 0;
//	}
//	
//	//Meal price
//	switch (dish_code) {
//	case 1:
//		meal_price = meals_price[0] * dish_quantity;
//		break;
//	case 2:
//		meal_price = meals_price[1] * dish_quantity;
//		break;
//	case 3:
//		meal_price = meals_price[2] * dish_quantity;
//		break;
//case 4:
//	meal_price = meals_price[3] * dish_quantity;
//	break;
//	case 5:
//		meal_price = meals_price[4] * dish_quantity;
//		break;
//	}
//	//sales tax
//	if (meal_price <= 1000) {
//		sales_tax = 0;
//	}
//	else if (meal_price > 1000 && meal_price <= 3000) {
//		sales_tax = meal_price * 0.02;
//
//	}
//	else if (meal_price > 3000) {
//		sales_tax = meal_price * 0.05;
//	}
//	//total in pkr
//	cout << "------------------------------------------------------------------------------------------------------------------------";
//
//	price_in_pkr = meal_price + sales_tax;
//	if (currency == 1) {
//		cout << "Meal price: " << meal_price<<endl;
//		cout << "Sales tax: " << sales_tax<<endl;
//		cout << "Total price: " << price_in_pkr<< "Rs";
//	}
//	if (currency == 2) {
//		cout << "Meal price: " << meal_price << endl;
//		cout << "Sales tax: " << sales_tax << endl;
//		cout << "Total price: " << price_in_pkr/193<<" €";
//	}
//	if (currency == 3) {
//		cout << "Meal price: " << meal_price<< endl;
//		cout << "Sales tax: " << sales_tax << endl;
//		cout << "Total price: " << price_in_pkr/165<<" $";
//	}
//	
//	return 0;
//}