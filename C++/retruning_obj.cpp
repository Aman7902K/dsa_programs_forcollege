#include <iostream>

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r, double i) {
        real = r;
        imag = i;
    }
    Complex add(Complex c) {
        double r = real + c.real;
        double i = imag + c.imag;
        return Complex(r, i);
    }
    void print() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex sum = c1.add(c2);
    sum.print(); 
    return 0;
}
