class Employee
{
  private:
   int employeeID;
   char employeename[20];
   int OTHours;
   int OTRate;
  public:
   void setEmployeeDetails(int id, char ename);
   void displayEmployeeDetails();
   void setOTHours(int OTH);
   void setOTRate(int OTR);
   int calculateOTPayment();
};