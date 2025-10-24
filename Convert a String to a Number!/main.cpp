#include <string>

int string_to_number(const std::string &s) {
    return (int)strtol(s.c_str(), NULL, 10);
}

int string_to_number(const std::string &s) {
    return stoi(s);
}