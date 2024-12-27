#include<iostream>
#include<string>

using namespace std;

string checkGrade(int score) {
    // Function to determine the grade based on the score
    if (score >= 90 && score <= 100) {
        return "A"; // Return grade 'A' for scores in the range of 90-100
    } else if (score >= 80 && score < 90) {
        return "B"; // Return grade 'B' for scores in the range of 80-89
    } else if (score >= 70 && score < 80) {
        return "C"; // Return grade 'C' for scores in the range of 70-79
    } else if (score >= 60 && score < 70) {
        return "D"; // Return grade 'D' for scores in the range of 60-69
    } else if (score < 60 && score >= 0) {
        return "F"; // Return grade 'F' for scores below 60
    } else {
        return "Invalid score"; // Handle invalid input
    }
}

int main() {
    int score;
    // Input from the user
    cout << "Enter the student's score (0-100): ";
    cin >> score;

    // Call the function and display the grade
    string grade = checkGrade(score);
    cout << "The student's grade is: " << grade << std::endl;

    return 0;
}