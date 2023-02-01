#include "Span.hpp"

Span::Span() : _n(0), _arr(NULL), _size(0), _max(0), _min(0) {}

Span::Span(unsigned int n) : _n(n), _arr(new int[n]), _size(0), _max(0), _min(0) {}

Span::Span(Span const & src) : _n(src._n), _arr(new int[src._n]), _size(src._size), _max(src._max), _min(src._min) {
    for (int i = 0; i < _size; i++)
        _arr[i] = src._arr[i];
}

Span::~Span() {
    delete [] _arr;
}

Span & Span::operator=(Span const & rhs) {
    if (this != &rhs) {
        _n = rhs._n;
        _size = rhs._size;
        _max = rhs._max;
        _min = rhs._min;
        delete [] _arr;
        _arr = new int[_n];
        for (int i = 0; i < _size; i++)
            _arr[i] = rhs._arr[i];
    }
    return *this;
}

void Span::addNumber(int n) {
    if ((unsigned int)_size == _n)
        throw std::exception();
    _arr[_size] = n;
    _size++;
    if (_size == 1) {
        _max = n;
        _min = n;
    }
    else {
        if (n > _max)
            _max = n;
        if (n < _min)
            _min = n;
    }
}

int Span::shortestSpan() {
    if (_size < 2)
        throw std::exception();
    int min = _max - _min;
    for (int i = 0; i < _size; i++) {
        for (int j = i + 1; j < _size; j++) {
            int diff = _arr[i] - _arr[j];
            if (diff < 0)
                diff *= -1;
            if (diff < min)
                min = diff;
        }
    }
    return min;
}

int Span::longestSpan() {
    if (_size < 2)
        throw std::exception();
    return _max - _min;
}

