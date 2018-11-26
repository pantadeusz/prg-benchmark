#include "zd.hpp"
namespace s19376 {
bool is_prime(unsigned long int x) {
    if(x%2==0 || x%3==0 || x==1) {
        return false;
    } else {
        return true;
    }
}
}

