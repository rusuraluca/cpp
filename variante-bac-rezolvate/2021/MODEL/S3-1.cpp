/*
Subprogramul prime are trei parametri:
• n, prin care primește un număr natural (n∈[4,10^9]);
• x și y, prin care furnizează cele mai mari două numere prime din intervalul [1,n), x<y.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=49, în urma apelului x=43, y=47.
*/

#include <iostream>
using namespace std;

void prime(int n, int& x, int& y) {
    int maxx = 0, maxx2 = 0;
    for(int i = 1; i < n; i++) {
        bool prim = true;
        for(int d = 2;  d*d <= i; d++) {
            if(i % d == 0) {
                prim = false;
                break;
            }
        }
        if(prim == true && i > maxx)
            maxx = i;
    }

    y = maxx;

    for(int i = 1; i< maxx; i++) {
        bool prim = true;
        for(int d = 2; d*d <= i; d++){
            if(i % d ==0) {
                prim = false;
                break;
            }
        }
        if(prim == true && i > maxx2)
            maxx2 = i;
    }
    x = maxx2;
}

int main(){
    int x, y;
    prime(49, x, y);
    cout << x << " " << y;
    return 0;
}
