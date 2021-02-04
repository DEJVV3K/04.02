#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int i;
    int liczba1 = 0;
    int liczba2 = 0;
    int l1;
    int l2;

    ifstream input1;
    ifstream input2;
    input1.open("liczby1.txt");    
    input2.open("liczby2.txt");

    for(i=0; i<1000; i++) {
        input1 >> oct >> l1;
        input2 >> dec >> l2;

        if (l1 == l2) {
            liczba1++;
        } else if (l1 > l2) {
            liczba2++;
        }
    }
    cout << liczba1 << " liczby ktore maja pary" << endl;
    cout << liczba2 << " liczb wiekszych niz w 1szym pliku" << endl;

    input1.close();
    input2.close();
    
    return 0;
}
