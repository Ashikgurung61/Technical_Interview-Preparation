// ###################Week-2_Day-1#########################
// Write a simple program to perform encapculation
// #include <iostream>
// using namespace std;

// class bus
// {
//     private:
//         int salary;
//     public:
//         void setSalary(int fulltime, int overtime)
//         {
//           salary = fulltime + overtime;
//         }
//         void getSalary()
//         {
//           cout << "Salary of an Employee: " << salary;
//         }
// };
// int main() {
//   bus obj;
//   obj.setSalary(10000, 1000);
//   obj.getSalary();
// }

// Write a C program to perform encapculation using the student details. 

#include<iostream>
using namespace std;

class student
{
  private:
    string name;
    string uid;
    int age, standard, section;
  public:
    void setDetail(string na, string u, int a, int stand, int sect)
  {
    name = na;
    uid = u;
    age = a;
    standard = stand;
    section = sect;
  }
  void getDetail()
  {
    cout<< "Name: \t\t" << name << "\nuid: \t\t" << uid << "\nage: \t\t" << age <<"\nStandard: \t" << standard << "\nSection: \t" << section;
  }
};
int main()
{
  student obj;
  obj.setDetail("Spidy George", "23MCI10169", 23, 10, 2);
  obj.getDetail();
}
