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
#pragma once

#include <cstddef>

namespace euclid
{
    template<size_t M, size_t N>
    struct gcd_impl
    {
        static constexpr size_t R = (N == 0) ? 0 : (M % N);
        static constexpr size_t result = (R == 0) ? N : gcd_impl<N,R>::result;
    };

    template<size_t M>
    struct gcd_impl<M,0>
    {
        static constexpr size_t result = M;
    };

    template<size_t N>
    struct gcd_impl<0,N>
    {
        static constexpr size_t result = 0;
    };

    template<>
    struct gcd_impl<0,0>
    {
        static constexpr size_t result = 0;
    };

    template<size_t M, size_t N>
    struct gcd
    {
        static constexpr size_t value1 = (M > N) ? M : N;
        static constexpr size_t value2 = (M == value1) ? N : M;
        static constexpr size_t result = gcd_impl<value1,value2>::result;
    };
}
