//Afham Bashir. Assignment 5.Distance Travled. 
#include <iostream>
#include <iomanip>      
using namespace std; 

int main() {
int speed;            //integer variable for the speed of the vehcile traveling
int hours_traveled;   //variable for the hours the vechile travels 
int distance;         //variable to contain calculated distnace traveled 
int count = 1;        // count value for do while loop that outputs distance, initallized as as the minimum number of hours valid for input is 1.  

do {                  // do while loop allows the program to output prompts for the user to input the speed, and repeat if and only if the speed doesnt fit the valid parameters. 
cout << "Enter the speed (mph) of the vechile: ";  // prompt for vechile speed
cin >> speed;                                      // assigns value to speed variable
if (speed < 10 || speed > 120)                     // selection loop that allows the program to test for input validation, the conditions being the speed not be below 10 or above 120. 
 { 
   cout << endl;                                                  // extra line 
   cout << "A valid speed must be from 10 to 120 mph." <<endl;    //if the speed satifies the conditions of the selection loop and is invalid, then the program prompts the reader, letting them know their input was invalid.  
 }
} while (speed < 10 || speed > 120);    // if the speed is either below 10 or above 120, its invalid and thus the do while loop repeats, prompting the user to once again put in the speed, untill its valid and fails to meet the while post test conditionss. 

cout << endl;    // for neat spacing. 

do {  // o while loop allows the program to output prompts for the user to input the hours, and repeat if and only if the time doesnt fit the valid parameters.
cout << "Enter the hours traveled: ";   // prompt for vechile hours traveled 
cin >> hours_traveled;                  // assigns valu to hours traveled 
if (hours_traveled < 1 || hours_traveled > 24)  //selection loop that allows the program to test for input validation, the conditions being the hours not be below 1 or above 24.  
 {  
   cout << endl;    
   cout << "A valid time must be from 1 to 24 hours." <<endl;  //if the hours satifies the conditions of the selection loop and is thus invalid, then the program prompts the reader, letting them know their input was invalid.  
 }
} while (hours_traveled < 1 || hours_traveled > 24);    // if the value of hours is either below 1 or above 24, its invalid and thus the do while loop conditions are satified, prompting the user to once again put in the hours the vechile travleed, untill its valid and fails to meet the while post test conditionss. 

cout << endl;                         // line space 
cout << "Hour    Distance" << endl;   // headers for the output 

do {                                 // a loope that will allow the program to output the distance traveled in increaments of every hour, with the loop repeating for outputing distance every hour. 
  distance = count*speed;              // distance is calculated by mulitpying speed by the number of hours, which is represented by the count variable here as each loop of output while be esstenially for one hour. 
  cout << setw(2)<< right<< count << "        "   //  right alligned count value is outputed, with one count value being equal to one hour. 
       << setw(4)<< right << distance <<endl;    //right alligned disntance travel is outputed. 
  count++;                                       // with each loop, the count is increamented by one, as each loop is repesented by one hour, a reptition of the loop represents one additional hour. 
} while (count <= hours_traveled);    // the loop will continue as lonn as the condition is satisfeid with the count variable value being less than or equalt to the hours, thus repeating calculating disance and output a total distnace value for every hour increament for th total hours_traveled. 

return 0; 
}