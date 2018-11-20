#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;
 vector<unsigned long int> calkowite;
bool is_prime(unsigned long int x){
    int t = sqrt(x);
    if(x>=2 && x<49){
        if((x%2!=0 && x%3!=0 && x%5!=0) || (x==2) || (x==3) || (x==5)) return true;
        else return false;
    }
    if(x>=49){
        int check = 0;
        for(int i=2;i<(t+2);i++){
            if(x%i==0){
                check++;
            }
        }
        if(check>0)return false;
        else return true;
    }
}
unsigned long int x,y;
int main(){
    string ans;
    scanf("%d", &x);
       printf("Set or one integer");
    cin >> ans;
    if(ans == "set"){
        for(int i=2;i<=x;i++){
            if(is_prime(i) == true){
            calkowite.push_back(i);
            }
        }
    for (auto i = calkowite.begin(); i != calkowite.end(); ++i)
        cout << *i << ' ';
    }
    else if(ans == "one"){
        if(is_prime(x) == true){
                cout << x << " is prime.." << endl;
        }
        if(is_prime(x) == false){
            cout << x << " is not prime.." << endl;
        }
    }
    return 0;
}
