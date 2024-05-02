#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate Euclidean distance
double euclideanDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    // Coordinates of the two points
    double x1, y1, x2, y2;

    string line="================================================";
    cout <<line;
    cout << "\nCalculate the Euclidean distance between two points";
    cout << "\nEnter the value of x1: ";
    cin >> x1 ;
    cout << "\nEnter the value of x2: ";
    cin >> x2 ;
    cout << "\nEnter the value of y1: ";
    cin >> y1 ;
    cout << "\nEnter the value of y2: ";
    cin >> y2 ;
    
    
    // Calculate and display the Euclidean distance
    double distance = euclideanDistance(x1, y1, x2, y2);
    cout << "The distance between point 1 and point 2 is: " << distance << endl;
    cout << line;

    return 0;
}