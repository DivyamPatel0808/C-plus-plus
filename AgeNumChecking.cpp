/*

Name : Divyam Patel
Code : basic C++
Date : 26/04/202 

*/

#include <iostream>
#include<ctime> 
using namespace std;




int main() {

/*
// firstName, lastName, Age, address, pinCode, mobile num
// Age less than 10 print you are a kid, Age grater than 10 but less than 18 print focus on study (hint : inside if - &&), Age between 30 and 60 print earn money, Age 60+ relax.
// First : Divyam and Last : Patel 
// Age :  18 Goal : focus on study
// address : 54 pramukh 382007
// moblie : 9104208088 valid : yes
// Date-time: 27/04/2020 - 01:22
*/

string firstName; 
cout << "Type a First Name: "; // Type a number and press enter
cin >> firstName; // Get user input from the keyboard

string lastName; 
cout << "Type a Last Name: "; // Type a number and press enter
cin >> lastName; // Get user input from the keyboard

int Age; 
cout << "Type a Age: "; // Type a number and press enter
cin >> Age; // Get user input from the keyboard

string Goal;

string add; 
cout << "Type an Address: "; // Type a number and press enter
cin >> add; // Get user input from the keyboard

int pinCode; 
cout << "Type a PinCode: "; // Type a number and press enter
cin >> pinCode; // Get user input from the keyboard

string mobile; 
cout << "Type a Mobile Number: "; // Type a number and press enter
cin >> mobile; // Get user input from the keyboard

string valid;

if (Age <= 10) {
  Goal = "You are a kid!";
}

else if (Age >10 && Age <=18){  
  Goal = "Focus on study!";
}

else if (Age >=30 && Age <=60){
   Goal = "Earn money!";
}

else if ( Age >60){
    Goal = "Relax!";
}

if (mobile.size() == 10) {
  valid = "Yes!";
}

else {
  valid = "No!";
}

    // Declaring argument for time() 
    time_t tt; 
  
    // Declaring variable to store return value of 
    // localtime() 
    struct tm * ti; 
  
    // Applying time() 
    time (&tt); 
  
    // Using localtime() 
    ti = localtime(&tt); 

cout << "" << endl;
cout << "----------------------Summary---------------------" << endl;
cout << "" << endl;
cout << "First : " << firstName << " and Last : " << lastName << "\n";
cout << "Age : " << Age << " Goal : " << Goal << "\n";
cout << "Address : " << add << " PinCode : " << pinCode << "\n";
cout << "Mobile : " << mobile << " Valid : " << valid << "\n";
cout << "Current Day, Date and Time is = " << asctime(ti);


  return 0;
}