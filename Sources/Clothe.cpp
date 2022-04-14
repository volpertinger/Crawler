#include "../Headers/Clothe.h"

using Item::Clothe;

Clothe::Clothe() {
    cost = 0;
    title = "";
    url = "";
    person = UndefinedPerson;
    size = UndefinedSize;
}

Clothe::Clothe(const int cost_, const std::string &title_, const std::string &url_, const Persons person_,
               const Sizes size_) {
    cost = cost_;
    title = title_;
    url = url_;
    person = person_;
    size = size_;
}

Clothe::Clothe(const Clothe &copyItem) {
    cost = copyItem.cost;
    title = copyItem.title;
    url = copyItem.url;
    person = copyItem.person;
    size = copyItem.size;
}

std::size_t Clothe::getCost() const {
    return cost;
}

std::string Clothe::getTitle() const {
    return title;
}

std::string Clothe::getUrl() const {
    return url;
}

Item::Persons Clothe::getPerson() const {
    return person;
}

Item::Sizes Clothe::getSize() const {
    return size;
}

void Clothe::setCost(const std::size_t newCost) {
    cost = newCost;
}

void Clothe::setTitle(const std::string &newTitle) {
    title = newTitle;
}

void Clothe::setURL(const std::string &newURL) {
    url = newURL;
}

void Clothe::setPerson(const Item::Persons newPerson) {
    person = newPerson;
}

void Clothe::setSize(const Item::Sizes newSize) {
    size = newSize;
}

bool Clothe::isEmpty() const {
    return (cost == 0 && title.empty() && url.empty() && person == UndefinedPerson && size == UndefinedSize);
}

Clothe &Clothe::operator=(const Clothe &copyItem) = default;
