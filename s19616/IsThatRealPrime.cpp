#include "IsThatRealPrime.hpp"
#include <cmath>
namespace s19616
 {
bool is_prime(unsigned long int x){
    int t = std::sqrt(x);
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
}
