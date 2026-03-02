// COMSC-210 | Lab 15 | Christine Susic

#include <iostream>
#include <iomanip>
using namespace std;

const int W1 = 10, W2 = 8;

class Movie {
private:
    string movieTitle, screenwriter;
    int releaseYear;
public:
    //setter and getter functions
    int getMovieTitle() const            {return movieTitle;}      
    void setMovitTitle (string s)        {movieTitle = m;} 
    int getReleaseYear() const           {return releaseYear;}      
    void setReleaseYear (string s)       {releaseYear = r;} 
    int getScreenwriter() const          {return screenwriter;}      
    void setScreenwriter (string s)      {screenwriter = s;}
    //print function
    void print() {
        cout << left;
        cout << "Movie: ";
        cout << movieTitle << endl;
        cout << setw(W1) << "Year released: ";
        cout << setw(W2) << releaseYear << endl;
        cout << setw(W1) << "Screenwriter: ";
        cout << setw(W2) << screenwriter << endl;
        cout << endl;
    }
};

int main() {
    vector<Movie> movies;
    ifstream fin ("input.txt");
    
    return 0;
}