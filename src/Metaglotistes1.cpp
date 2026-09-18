#include <random>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void grammarZ();
void grammarK();
void grammarG();
void grammarM();


void grammarZ() {
    cout << "Βήμα: Z -> K\n";
    grammarK();
};

void grammarK() {
    cout << "Βήμα: K -> G \n";
        grammarG();
    cout << "Βήμα: K -> M \n";
        grammarM();
};

void grammarG() {
    int choice = 1 + rand() % 2;
    
    if (choice == 1) {
        cout << "Βήμα: G -> a \n";
        return;
    }
    else {
        cout << "Βήμα: G -> Z \n";
        grammarZ();
    };

};

void grammarM() {
    int choice = 1 + rand() % 3;
    
    if (choice == 1) {
        cout << "Βήμα: M -> - \n";
        grammarK();
    }
    else if (choice == 2)  {
        cout << "Βήμα: M -> + \n";
        grammarK();
    }
    else {
        return;
    }

};

int main() {
    srand(time(nullptr));
    grammarZ();
    return 0;
};