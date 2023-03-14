#include "message.h"

std::string MessageBook::empty_string;

MessageBook::MessageBook() {
    // Do Nothing
}

MessageBook::~MessageBook() {
    // Do Nothing
}

void MessageBook::AddMessage(int number, const std::string& message) {
    message[number] = message;
}

void MessageBook::DeleteMessage(int number) {
    auto iter = message.find(number);
    if (iter != message.end()) {
        message.erase(iter);
    }
}

std::vector<int> MessageBook::GetNumbers() const {
    std::vector<int> keys;
    keys.reserve(message.size());

    for (auto const& map_pair : message) {
        keys.emplace_back(map_pair.first);
    }
    return keys;
}

const std::string& MessageBook::GetMessage(int number) const {
    auto iter = message.find(number);
    if (iter != message.end()) {
        return (*iter).second;
    }
    return empty_string;
}