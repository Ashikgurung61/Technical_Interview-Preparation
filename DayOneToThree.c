#include <stdio.h>

// int main() {
//   int i = 10;
//   do{
//     printf(" %d ", i);
//     i++;
//     l1: printf("goto");

//     if( i == 15){
//       goto l1;
//     }
//     if (i == 17){
//       continue;
//     }
//   }
//   while(i <= 10);
//   return 0;
// }

/* ----------------------Switch case -------------------*/

// int main()
// {
//   int percent;
//   printf("Enter your percentage: ");
//   scanf("%d", &percent);
//   switch(percent)
//     {
//       case 1:
//           printf("You got A+ grade");
//           break;

//       // case 2 percent >= 60:
//       // printf("You got B grade");
//       // break;
//       // case 3 percent <= 55:
//       // printf("!!Fail");
//       // break;
//       default:
//       printf("Incorrect Percentage");
//     }
//   return 0;
// }

//-------------------Day 2 -----------------------------
//----------------Continue-----------
// int main()
// {
//   int num;
//   printf("Enter a number: ");
//   scanf("%d", &num);
//   printf("Even Number: ");

//   for (int i = 0; i <= num; i++){
//     if (i % 2){
//       continue;
//       l : printf("Skip ");
//     }
//     else if(i == 0){
//       goto l;
//     }
//     printf(" %d ", i);

//   }
//   return 0;

// }

//-------------------Array--------------
// int main()
// {
// int arr[5] = {11,32,13,14,25};
// int len = sizeof(arr) / sizeof(arr[0]);
// printf("Length :  %d\n",len);
// for(int i = 0; i < len; i++){
//   printf(" %d ", arr[i]);
// }\
//----------------------Index of the array------
//   int i;
//   int temp, sum;
//   int num1, num2;
//   int arr[5];
//   int ar[5];
//   int len = sizeof(arr) / sizeof(arr[0]);
//   printf("Enter the element of the array: ");

//   for (i = 0; i < 5; i++){
//     scanf("%d\n", &arr[i]);
//   }
//   printf("Before Swap: ");
//   for(i = 0; i < 5; i++)
//   {
//   printf("%d \n", arr[i]);
//   }
//   printf("The index of the array are: ");
//   for(i = 0; i < 5; i++)
//   {
//     if (arr[i] < 35)
//     {
//         printf("%d \n", i);
//     }
//   }
//   // Swaping and adding
//   printf("Enter the index of the array to swap: ");
//   scanf("%d", &num1);
//   printf("Enter the index of the array to swap: ");
//   scanf("%d", & num2);

//   temp = arr[num1];
//   arr[num1] = arr[num2];
//   arr[num2] = temp;

//   temp = ar[num1];
//   ar[num1] = ar[num2];
//   ar[num2] = temp;

//   printf("Array after swap \n");
//   for(i = 0; i< 5; i++)
//   {
//     printf("%d \n", arr[i]);

//     printf("Sum of the two array: %d", arr[i] + ar[i]);
//   }
// }

//#####################Day 3###################################
// Write a C program to read any day number in integer and display the day name
// in word format int main()
// {
//   int date;
//   printf("Enter the date: ");
//   scanf("%d", &date);
//   switch(date)
//     {
//       case 1:
//       printf("Monday");
//       break;
//       case 2:
//       printf("Tuesday");
//       break;
//       case 3:
//       printf("Wednesday");
//       break;
//       case 4:
//       printf("Thursday");
//       break;
//       case 5:
//       printf("Friday");
//       break;
//       case 6:
//       printf("Saturday");
//       break;
//       case 7:
//       printf("Sunday");
//       break;
//       default:
//       printf("Enter date between 1 to 7");
//       break;
//     }
// }

// Write a C program to read the age of a candidate and determine whether he is
// eligible to case his/her own vote.
//  int main()
//  {
//    int age;
//    printf("Enter your age: ");
//    scanf("%d", &age);
//    if (age >= 18)
//    {
//      printf("You are eligible to vote");
//    }
//    else
//    {
//      printf("You are not eligible to vote");
//    }
//  }

// Check whether a number is positive or negative.
// int main()
// {
//   int num;
//   printf("Enter a number: ");
//   scanf("%d", &num);
//   if(num > 0)
//   {
//     printf("%d is a positive number", num);
//   }
//   else
//   {
//     printf("%d is a negative number", num);
//   }
// }

// Write a program in C to accept a grade and display the equivalent
// description.
// int main() {
//   int grade;
//   printf("\n---- Menu ----\n 1. A \n 2. G \n 3. V \n 4. E \n 5. F");
//   printf("\n Enter your grade: ");
//   scanf("%d", &grade);

//   switch (grade) {
//   case 1:
//     printf("Average");
//     break;
//   case 2:
//     printf("Good");
//     break;
//   case 3:
//     printf("Very Good ");
//     break;
//   case 4:
//     printf("Excellent");
//     break;
//   case 5:
//     printf("Fail");
//     break;
//   }
// }

// Write a C program to read the roll no, name and marks of three subjesct and
// calculate the total, percentage and division.
// int main() {
//   char name[20];
//   int uid;
//   float sub1, sub2, sub3;
//   float total;
//   float percent;
//   int division;
//   printf("\nEnter the name of the Student: ");
//   scanf("%s", name);

//   printf("\nEnter Roll Number: ");
//   scanf("%d", &uid);
//   printf("\nEnter the marks of Maths, Science and Commerse: \n");
//   scanf("%f %f %f", &sub1, &sub2, &sub3);
//   total = sub1 + sub2 + sub3;
//   percent = (total / 300) * 100;
  
//   printf("------Result-----");
//   printf("\nName: %s", name);
//   printf("\nUID: %d", uid);
//   printf("\nTotal: %f", total);
//   printf("\nPercentage : % .2f%%", percent);
  
  
//   if (percent >= 80) {
//     printf("\nDivision: 1st");
//   } else if (percent >= 60) {
//     printf("\nDivision: 2nd");
//   } else if (percent >= 45) {
//     printf("\nDivision: 3rd");
//   } else {
//     printf("\nDivision: Fail");
//   }
// }

//Write a C program to accept two integers and check whether they are equal or not.
// int main()
// {
//   int num1, num2;
//   printf("Enter the value of num1 and num2: ");
//   scanf("%d %d", &num1, &num2);
//   if(num1 == num2)
//   {
//     printf("%d = %d \n(Equal) ", num1, num2);
    
//   }
//   else
//   {
//     printf("%d != %d \n (Not Equal)", num1, num2);
//   }
// }

//Wriet a C program to determine elegibility for admission to a professional course based on the following criteria:
// int main()
// {
//   int physics, maths, chemistry, total;
//   int sub_total;
//   printf("Enter the marks of Physics, Maths and Chemistry: ");
//   scanf("%d %d %d", &physics, &maths, &chemistry);
//   total = physics + maths + chemistry;
//   sub_total = physics + maths;
//   if(physics >= 55 && maths >= 65 && chemistry >= 50 && total >= 190)
//   {
//     printf("Eligible for admission");
//   }
//   else if(physics >= 55 && maths >= 65 && chemistry >= 50 && sub_total >= 140)
//   {
//     printf("Eligible for Admission");
//   }
//   else{
//     printf("Not Eligible");
//   }
// }

//
