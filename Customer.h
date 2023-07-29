#pragma once
class Customer
{
private:
	int c_type;
	char C_number[20];
	char C_address[50];
	char C_id[20];
	char C_email[50];
	int C_quntity;
public:
	Customer();
	void customerdetails(int ctype,const char cnumber[],const char caddress[],const char cid[], const char cemail[],int cwork);
	void getcustomerdetails();
	int gercustomerworkday();
	int gettcustomerOrderType();
	~Customer();


};

