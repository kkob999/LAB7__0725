#include<iostream>
#include<string>
using namespace std;

int main(){
    int age,tall,pp;
    string status;
    cout << "Enter your age: ";
    cin >> age;


    if(age <= 20){
        cout << "Enter your height: ";
        cin >> tall;
        if(tall >= 160){
            if(tall >= 175){
            cout << "Enter your property: ";
            cin >> pp;
            if(pp > 69000000){
                status = "MARRIED";
                }
            else{
                status = "ONE-NIGHT-STAND";
                }
            }
            else if(tall < 175){
            status = "FRIEND";
            }
        }
        else{
            status = "UNFRIEND";
        }
    }
    else{
        if(age < 30){
            cout << "Enter your property: ";
            cin >> pp;
            if(pp > 10000000){
                status = "BEST FRIEND";
            }
            else{
                status = "UNFRIEND";
            }
        }
        else{
            status = "UNFRIEND";
        }
    }
    cout << "Your status = "<<status;

}