#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {

    stack<string> macam_OS;

    cout << "Tumpukkan Bermacam OS seperti berikut";
    cout << endl;
    cout << "=====================================" << endl;
    cout << "|               MAEMO               |" << endl;
    cout << "=====================================" << endl;
    cout << "|              Symbia               |" << endl;
    cout << "=====================================" << endl;
    cout << "|                Mac                |" << endl;
    cout << "=====================================" << endl;
    cout << "|              Windows              |" << endl;
    cout << "=====================================" << endl;
    cout << "|               Iphone              |" << endl;    
    cout << "=====================================" << endl;
    cout << endl;

    cout << "Urutan Terbaru: " << endl << endl;
    macam_OS.push("Maemo 4");
    macam_OS.push("Iphone");
    macam_OS.push("Iphone 5");

    macam_OS.push("Windows");
    macam_OS.push("Windows Phone");

    macam_OS.push("Mac");
    macam_OS.push("Snowleopard");

    macam_OS.push("Symbia");
    macam_OS.push("Symbia Belle");

    macam_OS.push("Maemo");


    while (!macam_OS.empty()) {
        cout << macam_OS.top() << endl;
        macam_OS.pop();
    }

    return 0;
}
