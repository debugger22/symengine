#include <stdexcept>

#include "add.h"

namespace CSymPy {

Add::Add(const Dict_int& dict)
{
    this->dict = dict;
}

std::size_t Add::__hash__() const
{
    throw std::runtime_error("Not implemented yet.");
}

bool Add::__eq__(const Basic &o) const
{
    throw std::runtime_error("Not implemented yet.");
}

} // CSymPy
