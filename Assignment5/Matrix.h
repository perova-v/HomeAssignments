/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 5
 */

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <stdexcept>

template <typename T>
class Matrix
{
public:
    Matrix(size_t rows, size_t cols) : _rows(rows), _cols(cols)
    {
        if (rows == 0 || cols == 0)
        {
            throw std::invalid_argument("Size must be > 0");
        }

        _data = new T[rows * cols]();
    }


    ~Matrix()
    {
        delete[] _data;
    }


    Matrix(const Matrix& other) : _rows(other._rows), _cols(other._cols)
    {
        _data = new T[_rows * _cols];
        for (size_t i = 0; i < _rows * _cols; ++i)
        {
            _data[i] = other._data[i];
        }
    }


    Matrix& operator=(const Matrix& other)
    {
        if (this == &other)
        {
            return *this;
        }

        delete[] _data;

        _rows = other._rows;
        _cols = other._cols;
        _data = new T[_rows * _cols];

        for (size_t i = 0; i < _rows * _cols; ++i)
        {
            _data[i] = other._data[i];
        }
        return *this;
    }


    T& at(size_t r, size_t c)
    {
        if (r >= _rows || c >= _cols)
        {
            throw std::out_of_range("Index out of bounds");
        }
        return _data[r * _cols + c];
    }

    const T& at(size_t r, size_t c) const
    {
        if (r >= _rows || c >= _cols)
        {
            throw std::out_of_range("Index out of bounds");
        }
        return _data[r * _cols + c];
    }

    size_t getRows() const
    {
        return _rows;
    }
    size_t getCols() const
    {
        return _cols;
    }


    Matrix operator*(const T& val) const
    {
        Matrix result(_rows, _cols);
        for (size_t i = 0; i < _rows * _cols; ++i)
        {
            result._data[i] = _data[i] * val;
        }
        return result;
    }


    Matrix operator+(const Matrix& other) const
    {
        if (_rows != other._rows || _cols != other._cols)
        {
            throw std::invalid_argument("Dimensions mismatch");
        }
        Matrix result(_rows, _cols);
        for (size_t i = 0; i < _rows * _cols; ++i)
        {
            result._data[i] = _data[i] + other._data[i];
        }
        return result;
    }


    Matrix operator*(const Matrix& other) const
    {
        if (_cols != other._rows)
        {
            throw std::invalid_argument("Invalid dimensions for multiplication");
        }
        Matrix result(_rows, other._cols);

        for (size_t i = 0; i < _rows; ++i)
        {
            for (size_t k = 0; k < _cols; ++k)
            {
                for (size_t j = 0; j < other._cols; ++j)
                {
                    result.at(i, j) = result.at(i, j) + (at(i, k) * other.at(k, j));
                }
            }
        }
        return result;
    }


    Matrix transpose() const
    {
        Matrix result(_cols, _rows);
        for (size_t i = 0; i < _rows; ++i)
        {
            for (size_t j = 0; j < _cols; ++j)
            {
                result.at(j, i) = at(i, j);
            }
        }
        return result;
    }


    bool operator==(const Matrix& other) const
    {
        if (_rows != other._rows || _cols != other._cols) return false;
        for (size_t i = 0; i < _rows * _cols; ++i)
        {
            if (_data[i] != other._data[i]) return false;
        }
        return true;
    }

private:
    size_t _rows;
    size_t _cols;
    T* _data;
};

#endif
