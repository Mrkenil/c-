#include <iostream>
#include <string>
using namespace std;

class Admin {
protected:
  string company_name;
  double manager_salary;
  double employee_salary;
  int total_staff;
  double total_annual_revenue;

private:
  bool can_terminate;

public:
  // Constructor
  Admin(string name, double manager_salary, double employee_salary, int total_staff, double total_annual_revenue) :
    company_name(name), manager_salary(manager_salary), employee_salary(employee_salary), total_staff(total_staff), total_annual_revenue(total_annual_revenue), can_terminate(true) {}

  // Overridden myAccess() method
  virtual void myAccess() {
    cout << "Company name: " << company_name << endl;
    cout << "Manager salary: " << manager_salary << endl;
    cout << "Employee salary: " << employee_salary << endl;
    cout << "Total staff: " << total_staff << endl;
    cout << "Total annual revenue: " << total_annual_revenue << endl;
    cout << "Can terminate: " << can_terminate << endl;
  }
};

class Manager : public Admin {
public:
  // Constructor
  Manager(string name, double manager_salary, double employee_salary, int total_staff, double total_annual_revenue) :
    Admin(name, manager_salary, employee_salary, total_staff, total_annual_revenue) {}

  // Overridden myAccess() method
  void myAccess() override {
    cout << "Manager access:" << endl;
    cout << "Company name: " << company_name << endl;
    cout << "Manager salary: " << manager_salary << endl;
    cout << "Employee salary: " << employee_salary << endl;
    cout << "Total staff: " << total_staff << endl;
    cout << "Total annual revenue: " << total_annual_revenue << endl;
  }
};

class Employee : public Manager {
public:
  // Constructor
  Employee(string name, double manager_salary, double employee_salary, int total_staff, double total_annual_revenue) :
    Manager(name, manager_salary, employee_salary, total_staff, total_annual_revenue) {}

  // Overridden myAccess() method
  void myAccess() override {
    cout << "Employee access:" << endl;
    cout << "Company name: " << company_name << endl;
    cout << "Employee salary: " << employee_salary << endl;
  }
};

int main(){
	Employee a;
	
	a.myAccess();
}
