/**
MIT License

Copyright (c) 2021 Dan McLeran

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#include <iostream>

#include "euclid.hpp"

int main()
{
    using std::cout;
    using std::endl;

    cout << "GCD of 0, 0 = " << euclid::gcd<0,0>::result << endl;
    cout << "GCD of 6, 4 = " << euclid::gcd<6,4>::result << endl;
    cout << "GCD of 36, 24 = " << euclid::gcd<36,24>::result << endl;
    cout << "GCD of 270, 192 = " << euclid::gcd<270,192>::result << endl;
    cout << "GCD of 4, 6 = " << euclid::gcd<4,6>::result << endl;
    cout << "GCD of 24, 36 = " << euclid::gcd<24,36>::result << endl;
    cout << "GCD of 192, 270 = " << euclid::gcd<192, 270>::result << endl;

    return 0;
}
