#include <iostream>
using namespace std;

int main() {

    int a, n, i;

    do {

        cout << "a= "; cin >> a;
        cout << "n= "; cin >> n;

    }
    while ( a<0 && n<0 );

    for ( i=1; i<=n; i++ ) {

        if ( i%2==0 ) {

            a = a-i*i;

        }
        else {

            a = a+i*i;

        }

    }

    cout << "a=" << a;

}