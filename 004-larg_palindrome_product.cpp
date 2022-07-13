#include <iostream>
#include <cmath>
#include <vector>


bool ispalindrome_5(int a);
bool ispalindrome_6(int b);
int divisible(int c);

int main()
{
    for(int ii = 998001; ii >= 10000; ii--){
        if(ii >= 100000){
            if(ispalindrome_6(ii)){
                if(divisible(ii) != 0){
                    std::cout << "The largest palindrome product of two 3-digit numbers is:" << '\n';
                    std::cout << ii/divisible(ii) << " * " << divisible(ii) << " = " << ii << '\n';
                    break;
                }
            }

        }
        else{
            if(ispalindrome_5(ii)){
                if(divisible(ii) != 0){
                    std::cout << "The largest palindrome product of two 3-digit numbers is:" << '\n';
                    std::cout << ii/divisible(ii) << " * " << divisible(ii) << " = " << ii << '\n';
                    break;
                }
            }
        }
    }
}

bool ispalindrome_5(int a){
    std::vector<int> digits;
    digits.resize(5);
    digits[0] = a/10000;
    digits[1] = (a%10000)/1000;
    digits[3] = (((a%10000)%1000)%100)/10;
    digits[4] = (((a%10000)%1000)%100)%10;
    if(digits[0] == digits[4] && digits[1] == digits[3]){
        return true;
    }
    else{
        return false;
    }
}

bool ispalindrome_6(int b){
    std::vector<int> digits;
    digits.resize(6);
    digits[0] = b/100000;
    digits[1] = (b%100000)/10000;
    digits[2] = ((b%100000)%10000)/1000;
    digits[3] = (((b%100000)%10000)%1000)/100;
    digits[4] = ((((b%100000)%10000)%1000)%100)/10;
    digits[5] = ((((b%100000)%10000)%1000)%100)%10;
    if(digits[0] == digits[5] && digits[1] == digits[4] && digits[2] == digits[3]){
        return true;
    }
    else{
        return false;
    }
}

int divisible(int c){
    for (int jj = 100; jj<= 999; jj++){
        if (c%jj == 0 && c/jj < 1000){
            return jj;
        }
    }
    return 0;
}