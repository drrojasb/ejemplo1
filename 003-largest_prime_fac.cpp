#include <iostream>
#include <cmath>

const long long int A = 600851475143;

bool isprime(long long int b);
void larg_prime_fac(long long int c);

int main()
{
    larg_prime_fac(A);
}

bool isprime(long long int b){
    for(long long int ii = 2; ii < b/2; ii++){
        if(b%ii == 0){
            return false;
        }
    }
    return true;
}

void larg_prime_fac(long long int c){
    for(long long int ii = 2; ii < c/2; ii++){
        if(c%ii == 0 && isprime(c/ii)){
            std::cout << c/ii << std::endl;
            break; 
        }
    }
}
