class Complex_number
{
   private:
    double m_real;
    double m_imag;

   public:
    Complex_number(double r = 0.0, double i = 0.0) : m_real(r), m_imag(i) {}

    /**
     * operator+
     * example:
     *     Complex_number c1(4.0, 5.0);
     *     Complex_number c2(4.0, -8.0)
     *     Complex_number c3 = c1 + c2;
     */
    Complex_number operator+(const Complex_number& other) const
    {
        // NOTE: returns a new object by copy
        return Complex_number(m_real + other.m_real, m_imag + other.m_imag);
    }

    /**
     * operator+=
     * example:
     *     Complex_number c1(4.0, 5.0);
     *     Complex_number c2(4.0, -8.0)
     *     c2 += c1;
     */
    Complex_number& operator+=(const Complex_number& other)
    {
        m_real += other.m_real;
        m_imag += other.m_imag;
        // NOTE: returns a pointer to this (the object we operate on) by reference
        // in the example above, returns the pointer to c2
        return *this;
    }
    /**
     * operator-
     * example:
     *     Complex_number c1(4.0, 5.0);
     *     Complex_number c2(4.0, -8.0)
     *     Complex_number c3 = c1 - c2;
     */
    Complex_number operator-(const Complex_number& other) const
    {
        // NOTE: returns a new object by copy
        return Complex_number(m_real - other.m_real, m_imag - other.m_imag);
    }
    /**
     * operator-=
     * example:
     *     Complex_number c1(4.0, 5.0);
     *     Complex_number c2(4.0, -8.0)
     *     c2 -= c1;
     */
    Complex_number& operator-=(const Complex_number& other)
    {
        m_real -= other.m_real;
        m_imag -= other.m_imag;
        // NOTE: returns a pointer to this (the object we operate on) by reference
        // in the example above, returns the pointer to c2
        return *this;
    }
    /**
     * operator*
     * example:
     *     Complex_number c1(4.0, 5.0);
     *     Complex_number c2(4.0, -8.0)
     *     Complex_number c3 = c1 * c2;
     */
    Complex_number operator*(const Complex_number& other) const
    {
        // Karatsuba algorithm
        double S1 = (m_real + m_imag) * (other.m_real + other.m_imag);
        double S2 = m_real * other.m_real;
        double S3 = m_imag * other.m_imag;
        // NOTE: returns a new object by copy
        return Complex_number(S2 - S3, S1 - S2 - S3);
    }

    Complex_number& operator*=(const Complex_number& other)
    {
        double S1 = (m_real + m_imag) * (other.m_real + other.m_imag);
        double S2 = m_real * other.m_real;
        double S3 = m_imag * other.m_imag;

        m_real = S2 - S3;
        m_imag = S1 - S2 - S3;

        return *this;
    }
};