#include <iostream>
using namespace std;

int main() {
    cout<<"Введите количество элементов массива: ";
    int size;
    cin>>size;
    cout<<"Введите элементы: ";
    char a[size], b[sizeof (a)/sizeof (char)], *pa, *pb;
    for (int i = 0; i < size; ++i) {
        cin>>a[i];
    }
    pa=&a[0];
    for(int i=0;i<sizeof (a)/sizeof (char);i+=4){
        b[i+2]=*(pa+i);
        b[i+3]=*(pa+i+1);
        b[i]=*(pa+i+2);
        b[i+1]=(*pa+i+3);
    }
    pb=&b[0];
    for (int i = 0; i <sizeof (b)/sizeof (char) ; i++) {
        cout<<*(pb+i);
    }
    return 0;
}
