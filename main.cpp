#include <iostream>
#include <string>

template<typename T>
T Minimum(T &x,T &y){
    return (x < y ? x : y);
}

template<typename T>
T Maximum(T &x,T &y){
    return (x > y ? x : y);
}


int main() {
    int a=10,b=5;
    std::cout <<"\nfor integer:\n"<< "min is " << Minimum<int>(a, b) << std::endl;
    std::cout << "max is " << Maximum<int>(a, b) << std::endl;


    float a1=10.5,b1=5.5;
    std::cout <<"\nfor float:\n" <<"min is " << Minimum<float>(a1, b1) << std::endl;
    std::cout << "max is " << Maximum<float>(a1, b1) << std::endl;


    std::string a2="hello",b2="world!";
    std::cout <<"\nfor string:\n" <<"min is " << Minimum<std::string>(a2, b2) << std::endl;
    std::cout << "max is " << Maximum<std::string>(a2, b2) << std::endl;
    return 0;
}