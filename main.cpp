#include<iostream>

using namespace std;

int main() {
    double a, b, c;
    string command;
    int newCommand;

    cout << "Hi!" << endl;
    cout << "Enter 'Quit' if u want to quit the app at any time in the command section!" << endl;
    cout << "_________________________________________________________________________" << endl << endl;

    do {
        cout << "enter the first num :";
        cin >> a;

        cout << "enter the second num :";
        cin >> b;

        cout << "enter the command :";
        cin >> command;

        if (command == "+") {
            c = a + b;
            cout << "result :" << c << endl;
            cout << endl;
        } else if (command == "-") {
            c = a - b;
            cout << "result :" << c << endl;
            cout << endl;
        } else if (command == "/") {
            c = a / b;
            cout << "result :" << c << endl;
            cout << endl;
        } else if (command == "*") {
            c = a * b;
            cout << "result :" << c << endl;
            cout << endl;
        } else if (command == "Quit") {
            cout << endl << "Have a nice Day!";
            exit(1);
        } else {
            cout << "invalid command!" << endl;
            continue;
        }

        while (true) {
            //cout << "Do you want to continue with latest result?" << endl;
            cout << "1) Continue" << endl;
            cout << "2) Clear" << endl;
            cin >> newCommand;

            if (newCommand == 2)
                break;

            else if (newCommand == 1) {
                cout << "c =" << c << endl;

                cout << "enter ur num :";
                cin >> a;

                cout << "enter the command :";
                cin >> command;

                if (command == "+") {
                    cout << "result :" << c + a << endl;
                    cout << endl;
                } else if (command == "-") {
                    cout << "result :" << c - a << endl;
                    cout << endl;
                } else if (command == "/") {
                    cout << "result :" << c / a << endl;
                    cout << endl;
                } else if (command == "*") {
                    cout << "result :" << c * a << endl;
                    cout << endl;
                } else if (command == "Quit") {
                    cout << endl << "Have a nice Day!";
                    exit(1);
                }else
                    cout << "invalid command!" << endl;
            } else
                cout << "invalid command!" << endl;
        }
    } while (command != "Quit");
}