#pragma once

class Library {
  private:
    Book* books = nullptr;
    int sz = 0;
  public:
    Library() = default;

    // Constructor Copia
    Library(const Library& other);
    // Operador asignacion Copia
    Library& operator=(const Library other);
    // Destructor
    ~Library();
    
    //Métodos
    void addBook(const Book& book);
    void showLibrary();
};

