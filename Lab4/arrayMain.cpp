#include <iostream>
#include "arrayList.h"
using namespace std;

int main() {

    arrayList<int> ilist(100);
    arrayList<string> slist;
    int n; // inputted number
    cout << "Let's enKter 6 numbers, followed by a return after each";
    for (int i = 0 ; i < 6 ; i++){
        cin >> n;
        ilist.insertAt(i,n);
    }
    ilist.print();
    cout << "\nbefore removeAt\n";
    ilist.removeAt(3); // removing
    cout << "after removeAt\n";
    ilist.print();
    cout << "Above is your list, which num do you want to clear from it?\nType it and hit return";
    cin >> n;
    ilist.removeAll(n);

    cout << "...removing.."<< n << endl;
    ilist.print();

    return 0;
}
