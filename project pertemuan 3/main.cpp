#include <iostream>

using namespace std;

int max (int a , int b) {
    if (a > b){
        cout  << a << endl;
        return a;
    } else {
        cout << b << endl;
        return b;
    }
}

int main()
{
/* int x;

    cout << "masukan jumlah yang di inginan: " ;
    cin >> x;

    for (int i=0;i < x ; i++) {
        cout << "hello word" << endl;
    }

    int y;
    y = 6;

        if( x > y) {
        cout << "x lebih dari y" << endl;
    } else if( x < y) {
        cout << "x kurang dari y" << endl;
    }else if( x == y) {
        cout << "x sama dengan y" << endl;
    }/*/


    int x = 5 ;
    int y = 20;

    for (int i =0; i < 10; i++){
        x++;
        y++;
        max(x,y);
    }

    /* if( x > y) {
        cout << x << "  lebih dari " << y << endl;
    } else if( x < y) {
        cout << x << "  kurang dari " << y << endl;
    }else {
        cout << x << "  sama dengan " << y << endl;
    }

/*/

    return 0;
}
