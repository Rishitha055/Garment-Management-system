#include <iostream>
#include "Branch.h"
#include "Admin.h"
#include "Employee.h"
#include "Order.h"
#include "Customer.h"
#include "Supplier.h"
#include "Raw_Material.h"
#include "Sales_Manager.h"
#include "Product_Manager.h"
#include "Payment.h"
#include "Inventoy.h"
#include "security_Guard.h"
using namespace std;

int main()
{
    Branch* bran1 = new Branch;
    Branch* bran2 = new Branch;
    Branch* bran3 = new Branch;
    Admin* admi = new Admin;
    Employee*eml1 = new Employee;
    Employee* eml2 = new Employee;
    Employee* eml3 = new Employee;
    Employee* eml4 = new Employee;
    Employee* eml5 = new Employee;
    Order* or1 = new Order;
    Order* or2 = new Order;
    Order* or3 = new Order;
    Customer* cucm1 = new Customer;
    Customer* cucm2 = new Customer;
    Customer* cucm3 = new Customer;
    Supplier* supl1 = new Supplier;
    Supplier* supl2 = new Supplier;
    Supplier* supl3 = new Supplier;
    Supplier* supl4 = new Supplier;
    Raw_Material* raw1 = new Raw_Material;
    Raw_Material* raw2 = new Raw_Material;
    Raw_Material* raw3 = new Raw_Material;
    Raw_Material* raw4 = new Raw_Material;
    Sales_Manager* sales = new Sales_Manager;
    Product_Manager* produ = new Product_Manager;
    Payment* payd = new Payment;
    Inventoy* inve = new Inventoy;
    Inventoy* inve2 = new Inventoy;
    security_Guard* seq1 = new security_Guard;
    //security_Guard* seq2 = new security_Guard;
    int start = 1;
    cout << "\t\t\t|-----------------------------------------------------------------|" << endl;
    cout << "\t\t\t|                    OCIZ Textile And Garment                     |" << endl;
    cout << "\t\t\t|-----------------------------------------------------------------|" << endl;
    cout << "\t\t\tyou can buy all your types of shirts, T shirts in wholesale from our site, " << endl;
   cout<<"\t\t\t\tusers can buy clothes in their required quantity" << endl;
   cout << "\t\t\t\t\t\t\t********" << endl;
    
    while (start != 'a') {
        int firstcategory;
        cout << "_________________" << endl;
        cout << "| Sytem panl    |--------->>[  1  ]" << endl;
        cout << "|_______________|" << endl;
        cout << "| Customer panl |--------->>[  2  ]" << endl;
        cout << "|_______________|" << endl;
        cout <<"Chose number: ";
        cin >> firstcategory;
        char input[20];
        cout << "Please enter the password to access the system panel: (mypassword) ";
        cin >> input;
        if (strcmp(input,"mypassword") == 0){




            if (firstcategory == 1) {
                int options1;
                cout << "___________________________" << endl;
                cout << "| show our Branch Details |---------->>[ 1 ]" << endl;
                cout << "|_________________________|" << endl;
                cout << "| Employee salarys        |---------->>[ 2 ]" << endl;
                cout << "|_________________________|" << endl;
                cout << "Chose number: ";
                cin >> options1;
                if (options1 == 1) {
                    int option2;
                    cout << "| Employee details:----------->>[ 1 ]" << endl;
                    cout << "| Branch details:------------->>[ 2 ]" << endl;
                    cout << "| Admin details:-------------->>[ 3 ]" << endl;
                    cout << "| Order details:-------------->>[ 4 ]" << endl;
                    cout << "| Customer details:----------->>[ 5 ]" << endl;
                    cout << "| Supplier details:----------->>[ 6 ]" << endl;
                    cout << "| Raw_Material details:------->>[ 7 ]" << endl;
                    cout << "| Sales_Manager:-------------->>[ 8 ]" << endl;
                    cout << "| Product_Manager:------------>>[ 9 ]" << endl;
                    cout << "| Payment option:------------->>[ 10 ]" << endl;
                    cout << "| Inventoy details:----------->>[ 11 ]" << endl;
                    cout << "| security_Guard:------------->>[ 12 ]" << endl;
                    cout << "| Chose number: ";
                    cin >> option2;
                    switch (option2) {
                    case 1:
                        eml1->employeedetails('d', "John_Doe", "E0001", "sm1@example.com", 123456789, 300);
                        eml2->employeedetails('p', "Sophie_Brown", "E0002", "sm2@example.com", 987654321, 50);
                        eml3->employeedetails('s', "Benjamin_Hall", "E0003", "sm3@example.com", 456789123, 1000);
                        eml4->employeedetails('p', "Isabella_White", "E0004", "sm4@example.com", 654321987, 79);
                        eml1->getemployeedetails();
                        eml2->getemployeedetails();
                        eml3->getemployeedetails();
                        eml4->getemployeedetails();
                        break;
                    case 2:
                        bran1->branchdetails("B001", "Branch 1", "Main_Street_Colombo");
                        bran2->branchdetails("B002", "Branch 2", "Galle_Road_Galle");
                        bran3->branchdetails("B003", "Branch 3", "Kandy_Lane_Kandy");
                        bran1->getbranchdetails();
                        bran2->getbranchdetails();
                        bran3->getbranchdetails();
                        break;
                    case 3:
                        admi->admindetails("John Doe", "AC001", "admin1@example.com", "1990-01-01", "123456789v", 500);
                        admi->getadmindetails();
                        break;
                    case 4:
                        or1->orderdetails("B001", "O0001", "2023-07-10", "2023-06-01");
                        or2->orderdetails("B002", "00002", "2023-07-11", "2023-06-02");
                        or3->orderdetails("B003", "00003", "2023-07-12", "2023-06-03");
                        or1->ordercost();
                        or2->ordercost();
                        or3->ordercost();
                        break;
                    case 5:
                        cucm1->customerdetails(1, "0114567890", "123 Main St City1", "C0001", "customer1@example.com", 1000);
                        cucm2->customerdetails(3, "0336543210", "456 Elm St City2", "C0002", "customer2@example.com", 5000);
                        break;
                    case 7:
                        supl1->supplierdetalis('f', "Supplier 1 Lastname 1", "S0001", 114567897, "Supplier Street 1 Supplier City 1", "supplier1@example.com");
                        supl2->supplierdetalis('s', "Supplier 2 Lastname 2", "S0002", 342265210, "Supplier Street 2 Supplier City 2", "supplier2@example.com");
                        raw1->rawmaterialdetails("RM001", "Cotton", 'c', "2023-06-11", 100);
                        raw2->rawmaterialdetails("RM002", "wool", 'w', "2023-06-12", 120);
                        raw1->supplierdetails(supl1, supl2);
                        raw2->supplierdetails(supl1, supl2);
                        raw1->cottondisplayrawmaterialdetails();
                        raw1->denimdisplayrawmaterialdetails();
                        raw1->fabricdisplayrawmaterialdetails();
                        raw1->woolsdisplayrawmaterialdetails();
                        raw2->cottondisplayrawmaterialdetails();
                        raw2->denimdisplayrawmaterialdetails();
                        raw2->fabricdisplayrawmaterialdetails();
                        raw2->woolsdisplayrawmaterialdetails();
                        break;
                    case 8:
                        sales->salasmanagerdetails("Andrew Taylor", "123456789v", "sm1@example.com", "SM001", "1990-01-01", 331234560);
                        sales->getsalasmanagerdetails();
                        break;
                    case 9:
                        produ->productsmanagerdetails("Robert Smith", "123456789v", "pm1@example.com", "PM001", "1990-01-01", 787891230);
                        produ->getproductmanagerdetails();
                        break;
                    case 10:
                        payd->paymentdetails("0000", "Cash or Bankdeposit", 22.0);
                        payd->getpaymentdetails();
                        break;
                    case 11:
                        inve->inventoydetails("IN-B001-01", "Raw-material", "2023-06-01");
                        inve2->inventoydetails("IN-B001-02", "Stock-After", "2023-06-19");
                        inve->getinventoydetails();
                        inve2->getinventoydetails();
                        break;
                    case 12:
                        seq1->entersecuritydetails("Andrew Smith", "Se00004", "187566789v", 777279368);
                        bran1->securitydetails(seq1);
                        bran1->displaysecurity();
                        break;
                    }
                }
                else if (options1 == 2) {
                    char optionname[20];
                    cout << "#This is a very dangerous place.Enter your name:(No space) ";
                    cin >> optionname;
                    eml1->employeerMonthlySalary();
                    payd->employeesalarycaiculat(eml1);
                    payd->displayemployeeSalary();
                    //payd->employeesalarycaiculat(eml1,eml2,eml3,eml4);
                    cout << "Thanks " << optionname << endl;
                }
            }
            
        }
        
        else if (firstcategory == 2) {
            cout << "You can place an order from us" << endl;
            char phonenumber[20];
            int cutype;
            char cuaddress[100];
            char cuemail[50];
            int cuquntity;
            cout << "Enter the Your Phone Number: +94 ";
            cin >> phonenumber;
            cout << "Our product: " << endl;
            cout << "_____________________________" << endl;
            cout << "| Men T-shirt------->>[ 1 ] |" << endl;
            cout << "-----------------------------" << endl;
            cout << "| Men shirt--------->>[ 2 ] |" << endl;
            cout << "-----------------------------" << endl;
            cout << "| Women T-shirt----->>[ 3 ] |" << endl;
            cout << "-----------------------------" << endl;
            cout << "| Women shirt------->>[ 4 ] |" << endl;
            cout << "|---------------------------|" << endl;
            cout << "Enter the number: ";
            cin >> cutype;
            cout << "The quntity you need: ";
            cin >> cuquntity;
            cout << "Enter you Email: ";
            cin >> cuemail;
            cout << "Enter your Address: (No space)";
            cin >> cuaddress;
            cout << "----------------------------------" << endl;
            cucm3->customerdetails(cutype, phonenumber, cuaddress, "10008", cuemail, cuquntity);
            cucm3->getcustomerdetails();
            payd->coustomersalary(cucm3, cucm3);
            payd->displayCustSalary();
            cout << "\n--------Thank you....--------" << endl;
            
            
            }
            char contine;
            cout << "Do you continue: (Y/N) ";
            cin >> contine;
            if (contine == 'n' || contine == 'n') {
                cout << "\n|--------********--------|" << endl;
                /**/delete bran1, delete bran2, delete bran3, delete admi, delete eml1, delete eml2, delete eml3, delete eml4, delete eml5,
                    delete or1, delete or2, delete or3, delete cucm1, delete cucm2, delete cucm3, delete supl1, delete supl2, delete supl3,
                    delete supl4, delete raw1, delete raw2, delete raw3, delete raw4, delete sales, delete produ, delete payd, delete inve,delete inve2, delete seq1;

                break;
            }



        }
        
            
    }






