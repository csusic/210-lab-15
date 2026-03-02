// COMSC-210 | Lab 15 | Christine Susic

#include <iostream>
#include <iomanip>
using namespace std;

const int W1 = 10, W2 = 8;

class Movie {
private:
    string screenwriter, movieTitle;
    int releaseYear;
public:
    //setter and getter functions
    int getScreenwriter() const          {return screenwriter;}      
    void setScreenwriter (string s)      {screenwriter = s;}
    int getMovieTitle() const            {return movieTitle;}      
    void setMovitTitle (string s)        {movieTitle = m;} 
    int getReleaseYear() const           {return releaseYear;}      
    void setReleaseYear (string s)       {releaseYear = r;} 
    //print function
    void print() {
        cout << left;
        cout << setw(W1) << "Screenwriter: ";
        cout << setw(W2) << screenwriter << endl;
        cout << setw(W1) << "Movie Title: ";
        cout << setw(W2) << movieTitle << endl;
        cout << setw(W1) << "Release Year: ";
        cout << setw(W2) << releaseYear << endl;
        cout << endl;
    }
};

int main() {
    
    
    return 0;
}