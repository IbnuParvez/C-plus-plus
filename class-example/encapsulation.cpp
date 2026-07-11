#include <iostream>
#include <string>

using namespace std;

class Employee {
    private:
        int salary;
        string dob;
    public:
        string name;
        void setSalary(int s){
            salary = s;
        }
        int getSalary(){
            return salary;
        }
};

int main(){
    Employee emp;
    emp.setSalary(10000);
    emp.name = "John Doe";

    cout << emp.name << " " << emp.getSalary() << " \n";
    return 0;
}
