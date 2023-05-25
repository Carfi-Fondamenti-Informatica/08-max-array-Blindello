#include <iostream>
#include "Libreria.h"

using namespace std;

int main() {
    int n;
    float f;
    cout<<"inserisci dimensione array"<<endl;
    cin>>n;
    float numeri[n];
    for (int i=0; i<n; i++) {
        cin>>numeri[i];
    }
    f=funzione1(numeri, n);
    cout<<f<<endl;
    return 0;
}
