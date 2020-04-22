#include "StringReverse.h"

#include <algorithm>

using namespace CPPLondonUni;

StringReverse::StringReverse(const std::string& str) : revStr{str} {
	std::reverse(revStr.begin(), revStr.end());
}

bool StringReverse::empty() const noexcept {
    return revStr.empty();
}

bool StringReverse::operator==(const std::string& other) const noexcept {
    return revStr == other;
}

StringReverse::operator std::string() const {
    return {};
}
