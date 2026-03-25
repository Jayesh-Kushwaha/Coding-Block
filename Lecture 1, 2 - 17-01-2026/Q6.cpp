// Grade Card Program (Based on Marks)
#include <iostream>
using namespace std;
int main(){
    int marks;
    cout <<"enter your marks :"<<endl;

    cin >> marks;
    
    if (marks >= 90) {
        cout << "grade a" << endl;
    } 
    else if (marks >= 80) {
        cout << "grade b" << endl;
    } 
    else if (marks >= 70) {
        cout << "grade c" << endl;
    } 
    else if (marks >= 60) {
        cout << "grade d" << endl;
    } 
    else {
        cout << "grade f" << endl;
    }
}