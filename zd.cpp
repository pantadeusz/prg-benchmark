#include <iostream>

using namespace std;

bool is_prime(unsigned long int x) {
    if(x%2==0 || x%3==0) {
        return false;
    } else {
        return true;
    }
}

int main() {
    unsigned long int liczba;
    cout<<"podaj liczbe do sprawdzenia"<<endl;
    cin>>liczba;
    cout<<is_prime(liczba)<<endl;
}