#include "Order.h"
#include<iostream>
#include<string>
#include "Customer.h"
using namespace std;

Order::Order()
{
	strcpy_s(O_id, "");
	strcpy_s(deliverydade, "");
	strcpy_s(oderdate, "");
}

void Order::orderdetails(const char border[],const char oid[], const char datedely[], const char dateoder[])
{
	strcpy_s(O_id,oid);
	strcpy_s(deliverydade,datedely);
	strcpy_s(oderdate,dateoder);
	strcpy_s(branchoder, border);
}

void Order::ordercost()
{
	cout << "Order Details:-" << endl;
	cout << "\tOrder Branch: " << branchoder << endl;
	cout << "\tOrder id: " << O_id << endl;
	cout << "\tOrder delivery date: " << deliverydade<< endl;
	cout << "\tOrder date: " << branchoder << endl;
}

void Order::Entercoustomerdetails(Customer* cum1, Customer* sum2, Customer* cum3)
{
	cu[1] = cum1;
	cu[2] = sum2;
	cu[3] = cum3;
}

void Order::outcustomerdetails()
{
	for (int i = 1;i < 4;i++)
	{
		cu[i]->getcustomerdetails();
	}
}

Order::~Order()
{
	cout << "Delete Order details" << endl;
}
