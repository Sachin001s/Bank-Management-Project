#include<iostream>
using namespace std;
string a,b,d,e,f,g,j,k;
int i,c,n,l,y,z,amt,wdl,totalbalance=10000;
void login();
void signin();
void forgetpass();
void exit();
void menu();
void again();
int main()
{cout<<"******************************************************"<<endl;
cout<<"*********** Welcome to Bank Managment System *********"<<endl;
cout<<"~~~~~~~~~~~ ```````````````````````````````` ~~~~~~~~~~~~~~"<<endl<<endl;
cout<<"**** Please Sign in your Bank ****"<<endl<<endl;
signin();
cout<<endl;
cout<<"**** LOGIN your Bank ****"<<endl<<endl;
cout<<endl;
login();
}
void signin()          //signin
{cout<<"Enter Your Name :";
cin>>a;
cout<<"Set your Password :";
cin>>b;
cout<<"Enter Hint in case you forget your password :";
cin>>f;
}
void login()             //login
{cout<<"Enter Username :";
 cin>>d;
 cout<<"Enter Password :";
 cin>>e;
 if(e==b)
 {
 	menu();
 }
 else
 {
 	forgetpass();
 }
}
void forgetpass()   // forgetpassword
{cout<<"Forget Password :";
 cin>>g;
 if(g==f)
 {  cout<<endl;
 	menu();
 }
 else
 {
 	cout<<"Try Again sir"<<endl;
 	forgetpass();
 }
}

void menu() //menu
{ cout<<endl<<endl;
cout<<"                  "<<"````` MAIN MENU ```````"<<endl<<endl;
 cout<<"                    "<<"1. Deposit Money"<<endl;
 cout<<"                    "<<"2. Withdraw Money"<<endl;
 cout<<"                    "<<"3. Transfer Money"<<endl;
 cout<<"                    "<<"4. Account Details"<<endl;
 cout<<"                    "<<"5. Transaction Details"<<endl;
 cout<<"                    "<<"6. Balance Details"<<endl;
 cout<<"                    "<<"7. Exit"<<endl;
 cout<<"Select option :";
 cin>>c;
 cout<<endl;
 if(c==1)
 {
 	cout<<"DEPOSIT MONEY ::"<<endl;
 	cout<<"Remaining Balance :"<<totalbalance<<endl;
 	cout<<"Enter amount for Deposit :";
 	cin>>amt;
 	z=totalbalance+amt;
 	cout<<"You Successfully Deposit "<<amt<<" Rs"<<" in your Bank Account !!"<<endl;
 	cout<<"Total Balance : "<<z<<endl<<endl;	
 	again();
 }
 else if(c==2)
 {
 	cout<<"WITHDRAW MONEY ::"<<endl;
 	cout<<"Enter amount for Withdrawal :";
 	cin>>wdl;
 	y=totalbalance-wdl;
 	cout<<"You Successfully Withdrawal "<<wdl<<" Rs"<<" from your Bank Account !!"<<endl;
 	cout<<"Total Balance : "<<y<<endl<<endl;
 	again();
 }
 else if(c==3)
 {
 	cout<<"TRANSFER MONEY ::"<<endl;
 	cout<<"Enter details of User :"<<endl;
 	cout<<"Enter Account No.";
 	cin>>i;
 	cout<<"Enter AccountHolder Name :";
 	cin>>j;
 	cout<<"Enter IFSC Code :";
 	cin>>k;
 	cout<<"Enter amount for Transfer :";
 	cin>>l;
 	cout<<endl;
 	cout<<"You Succesfully Transfer "<<l<<" Rs"<<"to "<<" "<<j<<endl<<endl; 	
 	again();
 }
 else if(c==4)
 {
 	cout<<"ACCOUNT DETAILS ::"<<endl;
 	cout<<"Branch Name : SECTOR-37D,CHANDIGARH"<<endl;
 	cout<<"Customer ID : KSUD03588"<<endl;
 	cout<<"Account Number : 65447890076211"<<endl;
 	cout<<"Account Name : "<<a<<endl;
 	cout<<"Address  : H No 2412 SECTOR 38 WEST ,CHANDIGARH ,160014"<<endl;
 	cout<<"Nominee Name : Admin"<<endl;
 	cout<<"Phone : 0172-2883546"<<endl;
 	cout<<"IFSC : BADENA0SECDH [ Seventh character is Zero ]"<<endl;
 	cout<<"Account Opening Date : 25-04-2012"<<endl<<endl;
 	again();
 }
 else if(c==5)
 {
 	cout<<"TRANSACTION DETAILS"<<endl;
 	cout<<"02-05-2012  UPI 11766366563 Phone pay "<<" "<<"Debit   2000 Rs"<<endl;
 	cout<<"08-05-2012  UPI 11766766566 google pay "<<" "<<"Credit 1500 Rs"<<endl;
 	cout<<"28-05-2012  UPI 11766354563 Phone pay "<<" "<<"Credit  500  Rs"<<endl;
 	cout<<"18-07-2012  UPI 11344366565 google pay "<<" "<<"Debit  4000 Rs"<<endl;
 	cout<<"02-12-2012  UPI 11732366563 Phone pay "<<" "<<"Debit   500  Rs"<<endl;
 	cout<<"25-06-2013  UPI 11436366569 Phone pay "<<" "<<"Credit  4500 Rs"<<endl;
 	cout<<"09-12-2013  UPI 11769866563 paytm pay "<<" "<<"Debit   9000 Rs"<<endl;
 	cout<<"10-03-2014  UPI 11766369863 Phone pay "<<" "<<"Debit   200  Rs"<<endl;
 	cout<<"20-11-2014  UPI 11766366578 Phone pay "<<" "<<"Credit  6000 Rs"<<endl;
 	cout<<"01-04-2015  UPI 11766366563 paytm pay "<<" "<<"Credit  3200 Rs"<<endl;
 	cout<<"18-10-2015  UPI 11766656560 Phone pay "<<" "<<"Debit   2500 Rs"<<endl;
 	cout<<"03-06-2016  UPI 11766366763 Phone pay "<<" "<<"Credit  2000 Rs"<<endl;
 	cout<<"02-05-2017  UPI 11766366563 google pay "<<" "<<"Debit  200  Rs"<<endl;
 	cout<<"19-05-2012  UPI 11766366563 Phone pay "<<" "<<"Debit   3500 Rs"<<endl;
 	cout<<"30-05-2018  UPI 11766366563 Phone pay "<<" "<<"Credit  2600 Rs"<<endl;
 	cout<<"17-05-2019  UPI 11766366563 paytm pay "<<" "<<"Credit  900  Rs"<<endl;
 	cout<<"04-05-2019  UPI 11766366563 Phone pay "<<" "<<"Debit   6000 Rs"<<endl;
 	cout<<"02-05-2020  UPI 11766366563 google pay "<<" "<<"Debit  9700 Rs"<<endl;
 	cout<<"13-02-2021  UPI 11766366563 Phone pay "<<" "<<"Credit  2100 Rs"<<endl;
 	cout<<"19-09-2021  UPI 11766366563 google pay "<<" "<<"Debit  3400 Rs"<<endl;
 	cout<<"16-05-2022  UPI 11766366563 Phone pay "<<" "<<"Credit  6000 Rs"<<endl;
 	cout<<"08-10-2022  UPI 11766366563 paytm pay "<<" "<<"Debit   9080 Rs"<<endl;
 	cout<<"02-01-2023  UPI 11766366563 Phone pay "<<" "<<"Credit  3000 Rs"<<endl<<endl;
 	again();
 }
 else if(c==6)
 { cout<<endl;
   cout<<"TOTAL BALANCE :"<<totalbalance<<endl;
   again();
 }
 else if(c==7)
 {
 	exit();
 }
 else
 {
 	cout<<"Sir/Mam uou enter wrong input !!!!"<<endl<<endl;
 	again();
 }
}
void exit()
{
   cout<<"*~*~*~*~*~* THANKYOU FOR VISITING IN OUR BANK *~*~*~*~*~*"<<endl;
}
void again()
{
	cout<<"Sir/Mam if you want to continue press (1) and for exit press (2) :";
 cin>>n;
 if(n==1)
 {  cout<<endl;
 	menu();
 }
 else if(n==2)
 { cout<<endl;
 	exit();
 }
 else
 { cout<<endl;
 	cout<<"You Enter invalid number !!@#! --- We ask you again ::"<<endl;
 	again();
 }
}
