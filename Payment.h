#pragma once
#include "Customer.h"
#include "Employee.h"
class Payment
{
private:
	char pay_id[20];
	char pay_type[20];
	float pay_amount;
	int customerday;
	int customertype;
	int emploday;
	char emplobasic;
	char emploname[20];
public:
	Payment();
	void paymentdetails(const char patid[],const char paytype[],float payamount);
	void getpaymentdetails();

	void coustomersalary(Customer*cp,Customer*ct);
	void displayCustSalary();

	void employeesalarycaiculat(Employee* emp1);
	void displayemployeeSalary();

	~Payment();
};

