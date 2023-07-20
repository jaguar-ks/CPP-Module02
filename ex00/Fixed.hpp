#pragma once

#include<string>
#include<iostream>

class Fixed {
    private:
        int f_p;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &fix);
        Fixed &operator=(const Fixed &fix);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};
