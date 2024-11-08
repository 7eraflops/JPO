#pragma once

#include <iostream>
#include <stdexcept>
#include <type_traits>
#include <concepts>

template <typename T>
concept is_number = std::integral<T> || std::floating_point<T>;

namespace mc
{
    namespace jpo
    {
        template <typename T>
            requires is_number<T>
        class Complex_number
        {
        private:
            T m_real;
            T m_imag;

        public:
            Complex_number(T r = 0.0, T i = 0.0) : m_real(r), m_imag(i) {}

            T get_real() const
            {
                return m_real;
            }

            T get_imag() const
            {
                return m_imag;
            }

            void set_real(T real)
            {
                m_real = real;
            }

            void set_imag(T imag)
            {
                m_imag = imag;
            }

            // Fast inverse square root algorithm
            static float Q_rsqrt(float number)
            {
                long i;
                float x2, y;
                const float threehalfs = 1.5F;

                x2 = number * 0.5F;
                y = number;
                i = *(long *)&y;           // Evil floating point bit-level hacking
                i = 0x5f3759df - (i >> 1); // What the fuck?
                y = *(float *)&i;
                y = y * (threehalfs - (x2 * y * y)); // First iteration
                return y;
            }

            // Normalize the complex number using fast inverse square root
            Complex_number normalize()
            {
                float inv_sqrt = Q_rsqrt(m_real * m_real + m_imag * m_imag);

                m_real *= inv_sqrt;
                m_imag *= inv_sqrt;

                return *this;
            }

            Complex_number operator+(const Complex_number &other) const
            {
                return Complex_number(m_real + other.m_real, m_imag + other.m_imag);
            }

            Complex_number operator+(T value) const
            {
                return Complex_number(m_real + value, m_imag);
            }

            Complex_number &operator+=(const Complex_number &other)
            {
                m_real += other.m_real;
                m_imag += other.m_imag;
                return *this;
            }

            Complex_number &operator+=(T value)
            {
                m_real += value;
                return *this;
            }

            Complex_number operator-(const Complex_number &other) const
            {
                return Complex_number(m_real - other.m_real, m_imag - other.m_imag);
            }

            Complex_number operator-(T value) const
            {
                return Complex_number(m_real - value, m_imag);
            }

            Complex_number &operator-=(const Complex_number &other)
            {
                m_real -= other.m_real;
                m_imag -= other.m_imag;
                return *this;
            }

            Complex_number &operator-=(T value)
            {
                m_real -= value;
                return *this;
            }

            Complex_number operator*(const Complex_number &other) const
            {
                // Karatsuba algorithm
                T S1 = (m_real + m_imag) * (other.m_real + other.m_imag);
                T S2 = m_real * other.m_real;
                T S3 = m_imag * other.m_imag;
                return Complex_number(S2 - S3, S1 - S2 - S3);
            }

            Complex_number &operator*=(const Complex_number &other)
            {
                T S1 = (m_real + m_imag) * (other.m_real + other.m_imag);
                T S2 = m_real * other.m_real;
                T S3 = m_imag * other.m_imag;

                m_real = S2 - S3;
                m_imag = S1 - S2 - S3;

                return *this;
            }

            Complex_number operator/(const Complex_number &other) const
            {
                T denominator = other.m_real * other.m_real + other.m_imag * other.m_imag;

                if (denominator == 0.0)
                {
                    throw std::runtime_error("Division by zero: denominator is zero.");
                }

                T new_real = (m_real * other.m_real + m_imag * other.m_imag) / denominator;
                T new_imag = (m_imag * other.m_real - m_real * other.m_imag) / denominator;
                return Complex_number(new_real, new_imag);
            }

            Complex_number &operator/=(const Complex_number &other)
            {
                T denominator = other.m_real * other.m_real + other.m_imag * other.m_imag;

                if (denominator == 0.0)
                {
                    throw std::runtime_error("Division by zero: denominator is zero.");
                }

                T new_real = (m_real * other.m_real + m_imag * other.m_imag) / denominator;
                T new_imag = (m_imag * other.m_real - m_real * other.m_imag) / denominator;

                m_real = new_real;
                m_imag = new_imag;
                return *this;
            }

            bool operator==(const Complex_number &other) const
            {
                return m_real == other.m_real && m_imag == other.m_imag;
            }

            bool operator!=(const Complex_number &other) const
            {
                return !(*this == other);
            }

            friend std::ostream &operator<<(std::ostream &os, const Complex_number &complex)
            {
                os << complex.m_real << (complex.m_imag >= 0 ? " + " : " - ") << std::abs(complex.m_imag) << "i";
                return os;
            }
        };
    } // namespace jpo
} // namespace mc
