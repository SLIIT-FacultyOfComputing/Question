#include <iostream>
#include <cstring>
#include "emp.h"
using namespace std;


void Employee::setEmployeeDetails(int id, char ename[])
{
  id=employeeID;
  strcpy(employeename,ename);
}
void Employee::displayEmployeeDetails()
{
  cout<<"Employee Id: "<<employeeID<<endl;
  cout<<"Employee name: "<<employeename<<endl;
}
void Employee::setOTHours(int OTH)
{
  OTHours=OTH;
}
void Employee::setOTRate(int OTR)
{
  OTRate=OTR;
}
int Employee::calculateOTPayment()
{
  int OTP=OTRate*OTHours;
  return OTP;
} 