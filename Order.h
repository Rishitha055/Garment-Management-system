#pragma once
#include "Customer.h"
class Order
{
private:
	char O_id[20];
	char deliverydade[20];
	char oderdate[20];
	char branchoder[20];
	Customer* cu[5];
public:
	Order();
	void orderdetails(const char border[],const char oid[], const char datedely[], const char dateoder[]);
	void ordercost();

	void Entercoustomerdetails(Customer* cum1, Customer* sum2, Customer* cum3);
	void outcustomerdetails();
	~Order();

};

