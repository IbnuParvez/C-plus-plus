#include <iostream>

using namespace std;

class Employee {
    protected:
        int salary;
};

class Programmer: public Employee {
    public:
            int bonus;
            void setSalary(int x){
                    salary = x;
            }
            int getSalary(){
                return salary;
            }
            int totalSalary(){
                return salary + bonus;
            }
};

int main(){
    Programmer mySal;
    mySal.setSalary(60000);
    mySal.bonus = 15000;
    cout << "salary: " << mySal.getSalary() << ", bonus is: " << mySal.bonus << "\n";
    cout << "The total salary, inclusive of bonuses, will therefore be: " <<  mySal.totalSalary() << "\n";
    return 0;
}
