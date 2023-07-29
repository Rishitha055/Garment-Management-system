#include "Payment.h"
#include<iostream>
#include<string>
using namespace std;

Payment::Payment()
{
	strcpy_s(pay_id, "");
	strcpy_s(pay_type, "");
	pay_amount = 0.00;
}

void Payment::paymentdetails(const char patid[], const char paytype[], float payamount)
{
	strcpy_s(pay_id,pay_id);
	strcpy_s(pay_type,paytype);
	pay_amount= payamount;
	
}

void Payment::getpaymentdetails()
{
	cout << "Payment option Details:-" << endl;
	cout << "\tPayment Method: " << pay_type<< endl;
}

void Payment::coustomersalary(Customer* cp, Customer* ct)
{
	customerday = cp->gercustomerworkday();
	customertype = ct->gettcustomerOrderType();
}

void Payment::displayCustSalary()
{
	if (customertype == 1) {
		cout << "Your oder are Men T-shirt" << endl;
		cout << "Your order quntity: " << customerday << endl;
		cout << "The price for one of our shirt is Rs 1000/-" << endl;
		cout << "Total Amount is : " << 1000 * customerday << endl;
	}
	else if (customertype == 2) {
		cout << "Your oder are Men Shirt" << endl;
		cout << "Your order quntity: " << customerday << endl;
		cout << "The price for one of our shirt is Rs 800/-" << endl;
		cout << "Total Amount is : " << 800 * customerday << endl;
	}
	else if (customertype == 3) {
		cout << "Your oder are Women T-shirt" << endl;
		cout << "Your order quntity: " << customerday << endl;
		cout << "The price for one of our shirt is Rs 2000/-" << endl;
		cout << "Total Amount is : " << 2000 * customerday << endl;
	}
	else if (customertype == 4) {
		cout << "Your oder are Women Shirt" << endl;
		cout << "Your order quntity: " << customerday << endl;
		cout << "The price for one of our shirt is Rs 1200/-" << endl;
		cout << "Total Amount is : " << 1200 * customerday << endl;
	}
	cout << "----------------------------------------------------------" << endl;
}

void Payment::employeesalarycaiculat(Employee* emp1)
{
	emploday = emp1->getemplloyeeworkday();
}

void Payment::displayemployeeSalary()
{
	float salarym;
	cout << "Employee ID: ";
	cin >> emploname;
	cout << "Employee potions category: " << endl;
	cout << "Designer---------->>[ d ]"<<endl;
	cout << "Pattern marker---->>[ p ]" << endl;
	cout << "Sample marker----->>[ s ]" << endl;
	cout << "Cutter------------>>[ c ]" << endl;
	cout << "Presser----------->>[ r ]" << endl;
	cout << "Marketing--------->>[ m ]" << endl;
	cout << "Enter------->>: ";
	cin >> emplobasic;
	if (emplobasic == 'd' || emplobasic == 'D') {
		salarym = 10000.00;
	}
	else if (emplobasic == 'P' || emplobasic == 'p') {
		salarym = 12000.00;
	}
	else if (emplobasic == 's' || emplobasic == 'S') {
		salarym = 45000.00;
	}
	else if (emplobasic == 'c' || emplobasic == 'C') {
		salarym = 200000.00;
	}
	else if (emplobasic == 'r' || emplobasic == 'R') {
		salarym = 50000.00;
	}
	else if (emplobasic == 'm' || emplobasic == 'M') {
		salarym = 80000.00;
	}
	cout << "ID No:- "<<emploname << endl;
	if (emploday < 200) {
		cout << "Your Full salary: " << salarym << endl;
		cout << "No Bones" << endl;
		cout << "----------------------------------" << endl;
	}
	else {
		cout << "Your Full salary: " << salarym+(salarym*0.2) << endl;
		cout << "your  Bones amount is " << salarym * 0.2<<" more than the initial salary"<<endl;
		cout << "----------------------------------" << endl;
	}
}

Payment::~Payment()
{
	cout << "Delete payment details" << endl;
}
