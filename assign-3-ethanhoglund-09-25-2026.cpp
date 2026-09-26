#include <iostream>

using namespace std;

int main() {

string exput, name;
int quizgrade, assignmentgrade, projectgrade, desirednumgrade, finalgrade, letgrade, count = 6;
char grades[5] = {'o','A','B','C','D'};

string menu[7] = {" Welcome To The Grade Calculator | $", "   Please Enter Desired Grade    | $", "        Enter '1' for A          | $", "        Enter '2' for B          | $", "        Enter '3' for C          | $", "        Enter '4' for D          | $", "  Enter '5' to QUIT the program  | $"};

cout << "\n$ Enter Name: ";
cin >> name; 


do {

cout << "\n$ +---------------------------------+ $" << endl;
for (int n = 0; n <= count; n++) {

cout << "$ |" << menu[n] << endl;
}
cout << "$ +---------------------------------+ $" << endl;



cout << "\n$ Enter Letter Grade: ";
cin >> letgrade;

if (letgrade == 5) {
exput = "quit";
break;
}

cout << "\n$ Enter your Quiz Grade: ";
cin >> quizgrade;

cout << "\n$ Enter your Assignment Grade: ";
cin >> assignmentgrade;

cout << "\n$ Enter your Project Grade: ";
cin >> projectgrade;

if (letgrade == 1) {
desirednumgrade = 90;
}
else if (letgrade == 2) {
desirednumgrade = 80;
}
else if (letgrade == 3) {
desirednumgrade = 70;
}
else if (letgrade == 4) {
desirednumgrade = 60;
}

finalgrade = ((desirednumgrade - ((quizgrade * 0.2) + (assignmentgrade * 0.2) + (projectgrade * 0.2)))/(0.4)); 

if (finalgrade > 100){
cout << "\n$ " << name << ", you would need a score above 100 on the final. Score NOT possible." << endl;

}

else if (finalgrade <= 0){
cout << "\n$ " << name << "!! You would need a negative grade (or a zero) on the final for that score. Overachiever. You don't even need to take the test." << endl;

}

else {
cout << endl << "$ " << name << ", to get a/an " << grades[letgrade] << " on the final you would need a score of "<< finalgrade << "." << endl << endl;

}

}while (exput != "quit"); 

cout<<"\n$ " << name << ", thank you for utilizing this program and good luck on your final. If you would like to see more projects like this feel free to contact: 210-875-4613." << endl;

return 0;
}



/* 

Algorithm Design: 


- the first thing that we want to do is make sure there is an outer loop that controls the entire operation of the program so that it continues to run as long as the user wants it to. This should
	be controlled by some sort of user input that is the controlling variable in the do-while loop.
	
- Next is storing the letter grade as a certain range of scores. The value A should be from 90-100, B from 80-89, and then C 70-79 etc. These could be contained as an array of scores (?)

- Next we have to output the prompt and allow for the user to select which Letter grade they want to get from the student. this will also be contained within a for loop. 
- The next step is to intake the grades for the Quiz, Assignment, and Project average. These three are all worth 20%. So we would take the (Grade * 0.2) and then add the three grades. 
- The equation is (x * 0.2) + (y * 0.2) + (z * 0.2) + (w * 0.4) = k 
	x = Quiz score
	y = Project Score
	z = Assignment Score
	w = Final Score
	k = Desired Score. 
	
- WE ARE SOLVING FOR W.

New Reconfigured Equation = ((k - ((x * 0.2) + (y * 0.2) + (z * 0.2)))/(0.4)) = w 
IMPORTANT NOTE: x,y,z,w, and k all are positive integers between 0-100. 

- After the program runs these grades through the output it should be able to loop through the function but more importantly it should output the score needed in order to achieve the desired grade.
- However, it should contain an if-if/else statement that checks the score to make sure the score is not negative or larger than 100. IF EITHER of these are true then it would display an output that 
	lets the user know that this is an impossible and unreachable score. 
- Finally we break the outer dowhile loop when the user indicates as such and displays the end message. 


*/ 

