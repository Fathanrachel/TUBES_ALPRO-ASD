	#include <iostream>
	#include <queue>
	#include <string>

	using namespace std;

	int main() {
        char pilih;
   
    queue<string> OS_queueFT;
    OS_queueFT.push("Maemo");
    OS_queueFT.push("Symbian");
    OS_queueFT.push("Mac");
    OS_queueFT.push("Windows");
    OS_queueFT.push("Iphone");

cout << "Silahkan Pilih pertanyaan yang ingin ditampilkan jawabannya" << endl;
    cout << "a. Bagaimana cara menambahkan Maemo 4 yang paling bawah dengan menghapus Mac " << endl;
    cout << "b. Bagaimana cara menambahkan Windows Mobile dibawah Windows dengan menghapus Iphone" << endl;
    cout << "c. Bagaimana cara menambahkan Java Midlet dibawah Symbian dengan menghapus Maemo" << endl;
    cout << "d. Bagaimana cara menambahkan Lion OS X dibawah Mac dengan menghapus Maemo" << endl;
    cout << "e. Bagaimana cara menambahkan Android dibawah Iphone dengan menghapus Maemo" << endl;
    cout << endl;
    cout << "Masukkan opsi perubahan: ";  cin >> pilih;
    

    switch (pilih) {
        case 'a': {
            
            while (!OS_queueFT.empty()) {
                if (OS_queueFT.front() == "Mac") {
                    OS_queueFT.pop();
                    break;
                }
                OS_queueFT.push(OS_queueFT.front());
                OS_queueFT.pop();
            }

           
            OS_queueFT.push("Maemo 4");

            
            while (!OS_queueFT.empty()) {
                cout << OS_queueFT.front() << endl;
                OS_queueFT.pop();
            }
            break;
        }
        case 'b': {
            
            while (!OS_queueFT.empty()) {
                if (OS_queueFT.front() == "Windows") {
                    
                    OS_queueFT.pop();

                    OS_queueFT.push("Windows Mobile");
                    break;
                }
                OS_queueFT.push(OS_queueFT.front());
                OS_queueFT.pop();
            }

           
            while (!OS_queueFT.empty()) {
                cout << OS_queueFT.front() << endl;
                OS_queueFT.pop();
            }
            break;
        }
        case 'c': {
           
            while (!OS_queueFT.empty()) {
                if (OS_queueFT.front() == "Symbian") {
                    
                    OS_queueFT.pop();
                   
                    OS_queueFT.push("Java Midlet");
                    break;
                }
                OS_queueFT.push(OS_queueFT.front());
                OS_queueFT.pop();
            }

            
            while (!OS_queueFT.empty()) {
                cout << OS_queueFT.front() << endl;
                OS_queueFT.pop();
            }
            break;
        }
		case 'd' : {
			while (!OS_queueFT.empty()) {
                if (OS_queueFT.front() == "Maemo") {
                    OS_queueFT.pop();
                    break;
                }
                OS_queueFT.push(OS_queueFT.front());
                OS_queueFT.pop();
            }

            
            bool nambah = false;
            queue<string> new_queueFT;
            while (!OS_queueFT.empty()) {
                if (OS_queueFT.front() == "Mac") {
                    new_queueFT.push(OS_queueFT.front());
                    OS_queueFT.pop();
                    new_queueFT.push("Lion OS X");
                    nambah = true;
                } else {
                    new_queueFT.push(OS_queueFT.front());
                    OS_queueFT.pop();
                }
            }
            if (!nambah) {
                new_queueFT.push("Lion OS X");
            }
            OS_queueFT = new_queueFT;

            
            while (!OS_queueFT.empty()) {
                cout << OS_queueFT.front() << endl;
                OS_queueFT.pop();;
            }
			break;
		}
		case 'e' : {
			
            while (!OS_queueFT.empty()) {
                if (OS_queueFT.front() == "Maemo") {
                    OS_queueFT.pop();
                    break;
                }
                OS_queueFT.push(OS_queueFT.front());
                OS_queueFT.pop();
            }

           
            bool nambah = false;
            queue<string> new_queueFT;
            while (!OS_queueFT.empty()) {
                if (OS_queueFT.front() == "Iphone") {
                    new_queueFT.push(OS_queueFT.front());
                    OS_queueFT.pop();
                    new_queueFT.push("Android");
                    nambah = true;
                } else {
                    new_queueFT.push(OS_queueFT.front());
                    OS_queueFT.pop();
                }
            }
            if (!nambah) {
                new_queueFT.push("Android");
            }
            OS_queueFT = new_queueFT;

            
            while (!OS_queueFT.empty()) {
                cout << OS_queueFT.front() << endl;
                OS_queueFT.pop();
		}
		break;
		}
        default: 
            cout << "Opsi tidak valid" << endl;
            break;
        }
 return 0;
    }

