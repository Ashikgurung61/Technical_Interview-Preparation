#include <iostream>
using namespace std;

// C++ program to find the maximum number in an array of integers.
// int main()
// {
//   int arr[10] = {5,6,3,11, 12, 15, 90, 34, 8, 10};
//   int length = 10;
//   int left = 0;
//   int greatest = 0;
//   int right = length - 1;
//   while(left < right)
//     {
//       if(arr[left] < arr[right])
//       {
//         greatest = arr[right];
//         left = left + 1;
//       }
//       else
//       {
//         greatest = arr[left];
//         right = right - 1;
//       }
//     }
//   cout << "Greatest: " << greatest;
// }

// C++ program to swap two number without using the third variable

// int main()
// {
//   int a = 10;
//   int b = 20;
//   cout << "Befor Swap \n a: " << a << "\tb: " << b;
//   a = a + b; // 30
//   b = a - b; // 10
//   a = b + b; //
//   cout << "\nAfter Swap \n a: " << a << "\tb: " << b;
// }

// C++ program to convert a decimal number to binary equivalent.

// int main()
// {
//   int decimal = 10, binary = 0;
//   int product = 1, remainder;

//   while(decimal != 0)
//     {
//       remainder = decimal % 2;
//       binary = binary + (remainder * product);
//       decimal = decimal / 2;
//       product = product * 10;
//     }
//   cout << "Decimal: \t10" << "\nBinary: \t" << binary;
// }

// Write a prgram in C++ to convert a celsius to kelvin.

// int main()
// {
//   float celsius, kelvin;
//   cout << "Enter the value of Celcius: ";
//   cin >> celsius;
//   kelvin = celsius + 273.15;
//   cout << "Kelvin: \t" << kelvin;
// }

// Write a program in C++ to display n terms of natural numbers and their sum

// int main()
// {
//   int nums;
//   int count= 0;
//   cout<<"Enter the number of terms: ";
//   cin >> nums;
//   cout <<"The Natural number of terms: " << nums << "\n";
//   for(int i = 1; i <= nums; i++)
//     {
//       cout << " " << i << " ";
//       count = count + i;
//     }
//   cout << "\nCount: " << count;
// }

// Write a C++ program to create a class called Person that has private member
// variables for name, age and country. Implement member functions to set and
// get the values of these variables.

// class Person
// {
//   private:
//     string name, age, country;
//   public:
//     void setData(string a, string b, string c)
//     {
//       name = a;
//       age = b;
//       country = c;
//     }
//     void getData()
//     {
//       cout <<"Name: \t\t" << name << "\nAge: \t\t" << age << "\nCountry: \t"
//       << country;
//     }

// };
// int main()
// {
//   Person obj;
//   obj.setData("Ashik","23","India");
//   obj.getData();
// }

// Write a C++ program to implement a class called Bank Acconunt number and
// balance. Include member function to deposit and withdraw money from the
// account.

// class BankAccount {
// private:
//   int accountNumber;
//   int balance;

// public:
//   void setAcc(int x, int y) {
//     balance = x;
//     accountNumber = y;
//   }
//   void deposti(int a) { balance = balance + a; }
//   void withdraw(int b) { balance = balance - b; }
//   void showBalance() {
//     cout << "\n ------Balance------\n\t\t" << balance
//          << "\n-----Account Number-----\n\t\t" << accountNumber;
//   }
// };

// int main() {
//   BankAccount obj;
//   obj.setAcc(500, 938237);
//   obj.deposti(500);
//   obj.withdraw(20);
//   obj.showBalance();
// }
