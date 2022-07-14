#include <iostream>

bool divisible_1_to_20(int a);
int main(){
    int N = 2520; //the smallest multiple of all the numbers from 1 to 10 is 2520 
    while(N){
        if(divisible_1_to_20(N)){
            std::cout << "The smallest multiple of all the numbers from 1 to 20 is: " << N << std::endl;
            break;
        }
        N = N + 2;
    }
}

bool divisible_1_to_20(int a){
    for(int jj = 2; jj <= 20; jj++){
        if(a%jj != 0){
            return false;
        }
    }
    return true;
}