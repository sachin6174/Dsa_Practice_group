#include <iostream>


int add (int a, int b){
    return a+b;
}

int main(int argc, char** argv) {
    std::cout << "Number of arguments: " << argc << std::endl;
    
    for (int i = 0; i < argc; i++) {
        std::cout << "Argument " << i << ": " << argv[i] << std::endl;
    }
    
    
    getchar();
    return 0;
}