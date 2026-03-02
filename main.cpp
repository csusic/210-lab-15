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
    string getMovieTitle() const         {return movieTitle;}      
    void setMovitTitle (string m)        {movieTitle = m;} 
    int getReleaseYear() const           {return releaseYear;}      
    void setReleaseYear (int r)          {releaseYear = r;} 
    string getScreenwriter() const       {return screenwriter;}      
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
    string m;  //temp movie title
    int r; //temp release year
    string s;  //temp screenwriter
    
    if (fin.good()) {
        while (getline(fin, m)) {
            fin >> r; 
            fin.ignore();
            getline(fin, s);
            //temp class
            Movie tmp;
            tmp.setMovitTitle(m);
            tmp.setReleaseYear(r);
            tmp.setScreenwriter(s);
            movies.push_back(tmp);
        }
        fin.close();
    }
    else
        cout << "Input file not found.\n";
    
    return 0;
}