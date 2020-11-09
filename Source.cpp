#include <iostream>

using namespace std;

int findInt(int tab[10], int toSearch) {
    for (int i = 0; i < 10; i++) {
        if (tab[i] == toSearch) {
            return i;
        }
    }
    return -1;
}

int main() {

    int tab[10] = { 5,9,7,4,2,8,1,6,3,10 };
    
    for(int i=0; i < 10; i++) {
        cout << "tab" << i << "] = " << tab[i] << endl;
    }
    cout <<"Trouve ? "<< findInt(tab, 6);
                
    return 0;
}