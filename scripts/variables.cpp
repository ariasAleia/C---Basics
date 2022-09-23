// Just some variables
#include <iostream>

using namespace std;


int main() {

    string characterName = "Tomasitito"; // strings
    int characterAge; // integers 
    char grade = 'A'; // character
    double gpa = 4.5; // decimal point. This type of variable is bigger than float
    characterAge = 9;
    bool isMale = false;


    cout << "This all will be" ;
    cout << " in the same line" << endl;
    cout << "And this will be \nin another line" <<endl;
    cout << grade <<endl;

    cout << characterName.length() << endl;
    cout << characterName[1] << endl;
    cout << characterName.find("as", 1) <<endl;
    cout << characterName.substr(1, 7) << endl;
    cout << "There once was a man named " << characterName << endl;
    cout << "He was "<< characterAge <<" years old" << endl;
    cout << "He liked the name "<< characterName << endl;
    cout << "But did not like being " << characterAge << endl;
    return 0;
}