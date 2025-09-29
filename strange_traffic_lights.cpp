#include <iostream>
using namespace std;

int main() {

    cout << "Traffic Light!" << endl;

    int green = 20;
    int yellow = 3;
    int red = 80;
    int totalTime = green + yellow + red;

    /* Yellow light starts at 45th second 
    so that (after mod),
    red light < 25
    green light < 45
    yellow light < 48
    red light >= 49*/

    while (true){
        cout << "Input the time: ";
        int time;
        cin >> time;
        int showLight = time % totalTime;
        
        if(showLight < 25){
            cout << "[ Red Light ]" << endl;
        } else if (showLight < 45){
            cout << "[ Green Light ]" << endl;
        } else if (showLight < 49){
            cout << "[ Yellow Light ]" << endl;
        } else {
            cout << "[ Red Light ]" << endl;
        }
        
        string exit;
        cout << endl << "type \"EXIT\" to exit or press any key keep in loop: ";
        cin >> exit;
        cout << endl;
        if(exit == "EXIT" || exit == "exit" || exit == "Exit" || exit == "0"){
            cout << "Thank You" << endl;
            cout << "See Ya!" << endl;
            break;
        } else {
            cout << "Loop continues" << endl;
        }
    }
    

    return 0;

}