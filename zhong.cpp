#include "zhong.h"

/* Zhlex function implemenations */

Zhlex::Zhlex(std::istream& in)
{
}

Zhlex::Zhlex(X begin, X end)
{
}

std::vector<wchar_t> Zhlex::list_unique_hanzi()
{
    return /* something */;
}

Zhlex Zhlex::append_words(X begin, X end)
{
}

Zhlex& Zhlex::operator+=(const Zhlex &other)
{
    return Zhlex();
}

Zhlex& Zhlex::operator-=(const Zhlex &other)
{
    return Zhlex();
}

bool Zhlex::operator!=(const Zhlex &other)
{
    return /* something */;
}

bool Zhlex::operator==(const Zhlex &other)
{
    return /* something */;
}

const Zhlex Zhlex::operator+(const Zhlex &other)
{
    return /* something */;
}

const Zhlex Zhlex::operator-(const Zhlex &other)
{
    return /* something */;
}

std::istream& operator>>(std::istream&, Zhlex&)
{
    return /* something */;
}

std::ostream& operator<<(std::ostream&, const Zhlex&)
{
    return /* something */;
}

/* Zhword function implementations */

Zhword& Zhlex::operator[](std::vector<Zhword>::size_type i)
{
    return /*something*/;
}

Zhword& Zhword::Zhword(std::istream& in)
{
}

bool Zhword::operator!=(const Zhword &other)
{
    return /* something */;
}

bool Zhword::operator==(const Zhword &other)
{
    return /* something */;
}

std::ostream& operator<<(std::ostream&, const Zhword&)
{
    return /* something */;
}
