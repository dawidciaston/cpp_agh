#include <iostream>
#ifndef COMPLEXNUMBER_HPP
#define COMPLEXNUMBER_HPP

class ComplexNumber{
    private:
        double m_real;
        double m_imag;
    public: 
        ComplexNumber(double r = 0.0, double i = 0.0): m_real(r), m_imag(i) {}

        //setters
        void setReal(double r) {
            r = m_real;
        }
        void setImaginary(double i){
            i = m_imag;
        }
        //getters
        double getReal() const{
            return m_real;
        }
        double getImaginary() const{
            return m_imag;
        }

        //adding
        ComplexNumber operator+(const ComplexNumber& other) const {
            return ComplexNumber(m_real + other.m_real, m_imag + other.m_imag);
        }

        ComplexNumber operator+(double value) const {
            return ComplexNumber(m_real + value, m_imag);
        }

        //adding and assign +=
        ComplexNumber& operator+=(const ComplexNumber& other) {
            m_real += other.m_real;
            m_imag += other.m_imag;
            return *this;
        }

        ComplexNumber& operator+=(double value) {
            m_real += value;
            return *this;
        }

        //subtraction 
        ComplexNumber operator-(const ComplexNumber& other) const {
            return ComplexNumber(m_real - other.m_real, m_imag - other.m_imag);
        }
        
        ComplexNumber operator-=(double value) const {
            return ComplexNumber(m_real - value, m_imag);
        }

        //subtraction and assign 
        ComplexNumber& operator-=(const ComplexNumber& other) {
            m_real -= other.m_real;
            m_imag -= other.m_imag;
            return *this;
        }

        ComplexNumber& operator-=(double value) {
            m_real -= value;
            return *this;
        }

        //multiplication (z1*z2 = (a*c-b*d) + (a*d+b*c)i)
        ComplexNumber operator*(const ComplexNumber& other) const {
            return ComplexNumber(
                m_real * other.m_real - m_imag * other.m_imag, //re
                m_real * other.m_imag + m_imag * other.m_real); //im
        }
        
        //multiplication and assign 
        ComplexNumber& operator*=(const ComplexNumber& other) {
            double tempReal = m_real * other.m_real - m_imag * other.m_imag; //temporary real part
            m_imag = m_real * other.m_imag + m_imag * other.m_real;
            m_real = tempReal;
            return *this;
        }

        //divasion 
        ComplexNumber operator/(const ComplexNumber& other) const {
            double denominator = other.m_real * other.m_real + other.m_imag * other.m_imag; //(c^2 + d^2)
            return ComplexNumber((
                m_real * other.m_real + m_imag * other.m_imag) / denominator,
                (m_imag * other.m_real - m_real * other.m_imag) / denominator);
        }

        //divasion and assign
        ComplexNumber& operator/=(const ComplexNumber& other) {
            double denominator = other.m_real * other.m_real + other.m_imag * other.m_imag; //(c^2 + d^2)
            double tempReal = (m_real * other.m_real + m_imag * other.m_imag) / denominator; //temporary real part
            m_imag = (m_imag * other.m_real - m_real * other.m_imag) / denominator;
            m_real = tempReal;
            return *this;
        }

        //comparison
        bool operator==(const ComplexNumber& other) const {
            return m_real == other.m_real && m_imag == other.m_imag;
        }

        //not comprision
        bool operator!=(const ComplexNumber& other) const {
            return !(*this == other);
        }

        //assign
        ComplexNumber& operator=(const ComplexNumber& other) {
            if (this != &other) {
                m_real = other.m_real;
                m_imag = other.m_imag;
        }
            return *this;
        }

        friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& c) {
            os << c.m_real << (c.m_imag >= 0 ? " + " : " - ") << std::abs(c.m_imag) << "i";
            // NOTE: returns os (output stream) which allows chaining outputs
            return os;
        }

};

#endif
