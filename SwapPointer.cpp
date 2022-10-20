#include <iostream>

void swap_pointer(int&, int&);

int main()
{
    int a = 10;
    int b = 20;
    std::cout << "A and B before swap: A-" << a << " B-" << b << std::endl;
    swap_pointer(a, b);
    std::cout << "A and B after swap: A-" << a << " B-" << b << std::endl;
}

void swap_pointer(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

}
