#include <iostream>
#include <type_traits>

#ifndef COMPLEXNUMBER_HPP
#define COMPLEXNUMBER_HPP

namespace dc {
namespace jpo {

template <typename T>
requires std::is_arithmetic_v<T> //have to use cpp 20+ (g++ -std=c++20 -o zad main.cpp)
class ComplexNumber {
private:
    T m_real;
    T m_imag;

public:
    ComplexNumber(T r = 0, T i = 0) : m_real(r), m_imag(i) {}

    // Setters
    void setReal(T r) { m_real = r; }
    void setImaginary(T i) { m_imag = i; }

    // Getters
    T getReal() const { return m_real; }
    T getImaginary() const { return m_imag; }

    // Addition
    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(m_real + other.m_real, m_imag + other.m_imag);
    }
    ComplexNumber operator+(T value) const {
        return ComplexNumber(m_real + value, m_imag);
    }

    // Addition and assignment
    ComplexNumber& operator+=(const ComplexNumber& other) {
        m_real += other.m_real;
        m_imag += other.m_imag;
        return *this;
    }
    ComplexNumber& operator+=(T value) {
        m_real += value;
        return *this;
    }

    // Subtraction
    ComplexNumber operator-(const ComplexNumber& other) const {
        return ComplexNumber(m_real - other.m_real, m_imag - other.m_imag);
    }
    ComplexNumber operator-(T value) const {
        return ComplexNumber(m_real - value, m_imag);
    }

    // Subtraction and assignment
    ComplexNumber& operator-=(const ComplexNumber& other) {
        m_real -= other.m_real;
        m_imag -= other.m_imag;
        return *this;
    }
    ComplexNumber& operator-=(T value) {
        m_real -= value;
        return *this;
    }

    // Multiplication
    ComplexNumber operator*(const ComplexNumber& other) const {
        return ComplexNumber(
            m_real * other.m_real - m_imag * other.m_imag, // Real part
            m_real * other.m_imag + m_imag * other.m_real  // Imaginary part
        );
    }

    // Multiplication and assignment
    ComplexNumber& operator*=(const ComplexNumber& other) {
        T tempReal = m_real * other.m_real - m_imag * other.m_imag;
        m_imag = m_real * other.m_imag + m_imag * other.m_real;
        m_real = tempReal;
        return *this;
    }

    // Division
    ComplexNumber operator/(const ComplexNumber& other) const {
        T denominator = other.m_real * other.m_real + other.m_imag * other.m_imag;
        return ComplexNumber(
            (m_real * other.m_real + m_imag * other.m_imag) / denominator,
            (m_imag * other.m_real - m_real * other.m_imag) / denominator
        );
    }

    // Division and assignment
    ComplexNumber& operator/=(const ComplexNumber& other) {
        T denominator = other.m_real * other.m_real + other.m_imag * other.m_imag;
        T tempReal = (m_real * other.m_real + m_imag * other.m_imag) / denominator;
        m_imag = (m_imag * other.m_real - m_real * other.m_imag) / denominator;
        m_real = tempReal;
        return *this;
    }

    // Comparison
    bool operator==(const ComplexNumber& other) const {
        return m_real == other.m_real && m_imag == other.m_imag;
    }
    bool operator!=(const ComplexNumber& other) const {
        return !(*this == other);
    }

    // Output stream
    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& c) {
        os << c.m_real << (c.m_imag >= 0 ? " + " : " - ") << std::abs(c.m_imag) << "i";
        return os;
    }
};

} // namespace jpo
} // namespace dc

#endif

