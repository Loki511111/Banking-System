#include<iostream>
using namespace std;


int main(){
 
 
 
  int balance;
 
 
  balance=5000;
 
 string first,last;
 string pass;
 string user;
 cout<<"REGISTER ACCOUNT"<<endl;
 cout<<"ENTER FIRST NAME:"<<endl;
 cin>>first;
 cout<<"ENTER LAST NAME:"<<endl;
 cin>>last;
 cout<<"USERNAME:"<<endl;
 cin>>user;
 cout<<"PASSWORD:"<<endl;
 cin>>pass;
 
 
 
 string user1;
 string pass1;
 
 int attemp=5;
 cout<<"LOGIN"<<endl;
 cout<<"ENTER USERNAME:"<<endl;
 cin>>user1;
 cout<<"ENTER PASSWORD:"<<endl;
 cin>>pass1;
 
 int deposit;
 int withdraw;
 int choice;
 if(user1==user && pass1==pass){
 
cout<<"______________________"<<endl;
 cout<<"BALANCE:$"<<balance<<endl;
cout<<"______________________"<<endl;
 
 cout<<"Hi,"<<first<<endl;
 cout<<"1.)DEPOSIT"<<endl;
 cout<<"2.)WITHDRAW"<<endl;
 cout<<"3.)CHANGE PASSWORD"<<endl;
 
 
 cout<<"CHOICE:"<<endl;
 cin>>choice;
 
 if(choice==1){
 cout<<"ENTER AMOUNT:"<<endl;
 cin>>deposit;
 
 cout<<"YOUR CURRENT BALANCE IS:"<<balance+deposit<<endl;
 }
 if(choice==2){
 
 cout<<"ENTER AMOUNT:"<<endl;
 cin>>withdraw;
 
 cout<<"YOUR CURRENT BALANCE IS:"<<balance-withdraw<<endl;
 }
 if(withdraw>balance){
 cout<<"ENTER SUFFICIENT AMMOUNT"<<endl;}
 
 if(choice==3){
 string newpass;
 string pass2;
 cout<<"ENTER CURRENT PASSWORD"<<endl;
 cin>>pass2;
 
 if(pass2==pass){
 
 cout<<"ENTER NEW PASSWORD:"<<endl;
 cin>>newpass;
 
 
 
 cout<<"YOUR NEW PASSWORD IS:"<<newpass<<endl;}
 
 
 }
 }
 
 
 
 
 
 
 else{
 cout<<"ENTER VALID USER AND PASSWORD"<<endl;
 }
    return 0;
    }
    
    
    