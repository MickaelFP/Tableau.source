#include <iostream>

using namespace std;

//tabelau
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

//naviguer dans le tableau -> cas
    int a = 5;
    
    switch (a) {
    case 0:
        cout << " je suis le cas 0 " << endl;
        break;
    case 1:
        cout << " je suis le cas 1 " << endl;
        break;
    case 2:
        cout << " je suis le cas 2 " << endl;
        break;
    case 3:
        cout << " je suis le cas 3 " << endl;
        break;
    default:
        cout << 'je suis le cas default" << andl;
        break;
    }
