int main() {
    Matrix a(2, 2);
    a(0, 0) = 1;
    a(0, 1) = 2;
    a(1, 0) = 3;
    a(1, 1) = 4;
    std::cout << a << std::endl;

    Matrix b(2, 2);
    b(0, 0) = 5;
    b(0, 1) = 6;
    b(1, 0) = 7;
    b(1, 1) = 8;
    std::cout << b << std::endl;

    Matrix c = a + b;
    std::cout << c << std::endl;

    Matrix d = a - b;
    std::cout << d << std::endl;

    Matrix e = a * b;
    std::cout << e << std::endl;

    if (a == b) {
        std::cout << "a is equal to b" << std::endl;
    }
    else {
        std::cout << "a is not equal to b" << std::endl;
    }

    Matrix f = a;
    std::cout << f << std::endl;
}
