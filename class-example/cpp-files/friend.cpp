#include <asm-generic/errno.h>
#include <iostream>

using namespace std;

class Employee{
    private:
            int salary;
    public:
        Employee (int s){
            salary = s;
        }
        friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp){
    cout << " Salary: " << emp.salary << "\n";
}
int main(){
    Employee mySal(20000);
    displaySalary(mySal);
    return 0;
}
