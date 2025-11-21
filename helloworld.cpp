#include<iostream>

int main(){
    std::cout << "Hello, World!" << std::endl;
    int sum=0;
    for(int i=1; i<=10; ++i){
        sum += i;
    }
    std::cout << "Sum of first 10 natural numbers is: " << sum << std::endl;
    return 0;
}