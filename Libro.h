#ifndef LIBRO_H
#define LIBRO_H

#include<string>

class Book {
	private:
		std :: string title;
		std :: string author;
		int year = 0;
	public:
		Book() = default;
    Book(const std::string& title, const std::string& author, int year);
		void showInfo();	
};

#endif // LIBRO_H
