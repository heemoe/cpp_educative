#include <iostream>


void getReference(const char *str = nullptr) {
    std::cout << (str == nullptr ? "no arguments" : str) << std::endl;
}

// lamda
auto good = [](int a) {
    return a;
};


std::function<int(int)> makeLambda(int value) {
    return [value](int a) {
        return value + a;
    };
}


void print(auto args) {
    std::cout << args << std::endl;
}


int main() {
    std::vector arr = {1, 2};

    int num = 100;
    int *num2 = &num;
    int *numPtr = &num;
    int *num2Ptr = num2;

    int &numRef = num;
    int &num2Ref = *num2;

    *numPtr = 99;

    // alias
    print(numRef);

    num2Ref = 10;
    print(num2Ref);

    // address

    print(numPtr);
    print(num2Ptr);


    return 0;
};

