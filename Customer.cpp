#include "Customer.h"
#include<iostream>
#include<string>
using namespace std;

Customer::Customer()
{
	strcpy_s(C_number, "");
	strcpy_s(C_address, "");
	strcpy_s(C_id, "");
	strcpy_s(C_email, "");
}

void Customer::customerdetails(int ctype,const char cnumber[], const char caddress[], const char cid[], const char cemail[],int cqunt)
{
	strcpy_s(C_number,cnumber);
	strcpy_s(C_address,caddress);
	strcpy_s(C_id,cid);
	strcpy_s(C_email,cemail);
	C_quntity = cqunt;
	c_type = ctype;
}

void Customer::getcustomerdetails()
{
	cout << "Customer Details:-" << endl;
	cout << "\tCustomer number: " << C_number << endl;
	cout << "\tCustomer Address: " << C_address<< endl;
	cout << "\tCustomer ID Number: " << C_id << endl;
	cout << "\tCustomer Email Address: " << C_email << endl;
	
}

int Customer::gercustomerworkday()
{
	return C_quntity;
}

int Customer::gettcustomerOrderType()
{
	return c_type;
}

Customer::~Customer()
{
	cout << "Delete Order details" << endl;
}
