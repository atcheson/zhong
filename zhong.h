#include <vector>
#include <string>
#include <iostream>

class Zhword {
    public:
        Zhword(std::istream& in);

        const std::vector<wchar_t> hanzi;
        const std::vector<std::string> english_defns;
        const std::vector<wchar_t> pinyin;
        
        wchar_t& operator[](std::vector<wchar_t>::size_type i);
        bool operator==(const Zhword &other);
        bool operator!=(const Zhword &other); 
};
std::ostream& operator<<(std::ostream&, const Zhword&);
 
class Zhlex {
    public:
        Zhlex(std::istream& in);
        template<class X> Zhlex(X begin, X end);

        template <class X> Zhlex append_words(X begin, X end);
        std::vector<wchar_t> list_unique_hanzi();
        Zhlex remove_duplicates();

        Zhword& operator[](std::vector<Zhword>::size_type i);
        bool operator==(const Zhlex &other);
        bool operator!=(const Zhlex &other);
        Zhlex& operator+=(const Zhlex &other);
        Zhlex& operator-=(const Zhlex &other);
        const Zhlex operator+(const Zhlex &other);
        const Zhlex operator-(const Zhlex &other);

    private:
        std::vector<Zhword> words;
        
};
std::istream& operator>>(std::istream&, Zhlex&);
std::ostream& operator<<(std::ostream&, const Zhlex&);

