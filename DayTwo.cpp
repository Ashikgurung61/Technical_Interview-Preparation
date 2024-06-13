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
// Write a c++ program to implement a class called student that has private member variables for name, class, roll number, and marks . Include member fuctiontot calculate the grade based on the marks and display the student's information

// class student{
//   private:
//     string name, classes, roll_no;
//     int maths, science, English;
//     int total;
//     string grade;

//   public:
//     void setGrade(string x, string y, string z, int a, int b, int c)
//     {
//        maths = a;
//        science = b;
//        English = c;
//        name = x;
//        classes = y;
//        roll_no = z;
//        total = (a + b + c);
//        if(total >= 120)
//        {
//            grade = "A";
//        }
//        else if(total >= 100)
//        {
//            grade = "B";
//        }
//        else
//        {
//            grade = "Pass";
//        }
//     }

//     void showResult()
//     {
//       cout << "\nName: " << name << "\nClass: " << classes << "\nRoll_no: " << roll_no<< "\nGrade: " << grade;
//     }
// };
// int main()
// {
//   student obj;
//   obj.setGrade("Modi", "X", "23MCI10169", 45,34,23);
//   obj.showResult();
// }


// Write a c++ program to find the two repeating elements in a given array of integers

int main()
{
  int arr[5] = {4,5,2,2,1};
  int count = 0;
  for(int i = 0; i< 5; i++)
    {
      for(int j = i + 1; j < 5; j++)
        {
            if(arr[i] == arr[j])
            {
                count = arr[i];
            }
        }
    }
    cout << "Repeating: " << count;
}

