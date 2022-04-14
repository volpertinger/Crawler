#include <string>
#include <nlohmann/json.hpp>

#ifndef CRAWLER_ITEM_H
#define CRAWLER_ITEM_H


namespace Item {

    enum Persons {
        UndefinedPerson, Man, Woman, Boy, Girl
    };

    enum Sizes {
        UndefinedSize, XXS, XS, S, M, L, X, XL, XXL, XXXL
    };

    class Clothe {
    private:
        // стоимость товара
        std::size_t cost;
        // название товара
        std::string title;
        // ссылка на страницу, где искать товар
        std::string url;
        // для кого предназначен товар
        Persons person;
        // размер одежды
        Sizes size;

    public:

        // Конструкторы

        Clothe();

        explicit Clothe(int cost_ = 0, const std::string &title_ = "", const std::string &url_ = "",
                        Persons person_ = UndefinedPerson, Sizes size_ = UndefinedSize);

        Clothe(Clothe const &copyItem);

        // Get методы

        std::size_t getCost() const;

        std::string getTitle() const;

        std::string getUrl() const;

        Persons getPerson() const;

        Sizes getSize() const;

        // Set методы

        void setCost(std::size_t newCost);

        void setTitle(const std::string &newTitle);

        void setURL(const std::string &newURL);

        void setPerson(Persons newPerson);

        void setSize(Sizes newSize);

        // Перегрузка операторов

        Clothe &operator=(const Clothe &copyItem);

        // Остальные методы

        // возвращает True, если поля равны полям по умолчанию (в конструкторе по умолчанию)
        bool isEmpty() const;

        // возвращает json представление класса

        nlohmann::json getJson() const;

    };
}
#endif //CRAWLER_ITEM_H
