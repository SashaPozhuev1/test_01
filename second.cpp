#include <iostream>
#include <sstream>


using namespace std;

int main()
{
    string stroka;
    getline( cin, stroka );
    
    istringstream stream(stroka);
   
    float chisla[10];
    float ch;
    
    cin >> ch;
    
    int i = 0;
    bool prav = true;
    
    while ( stream >> chisla[i]) {
        i++;
        if( chisla[ i ] < chisla[ i - 1 ] ){
            prav = false;
        }
    }
    
    if ( prav = false ){
        cout << "The input sequence must be non-decreasing.";
        cin.get();
        return 0;
    }
    else if ( i < 10 ) {
        cout << "An error has occurred while reading the input sequence.";
        cin.get();
        return 0;
    }
    
    for ( i = 0; i < 10; i++) {
        for ( int j = 0; j < 10; j++) {
            if ( ( i != j ) && ( ch == chisla[ i ] + chisla[ j ] ) ) {
                prav = true;
                cout << chisla[ i ] << " " << chisla[ j ];
                cin.get();
                return 0;
            }
            else {
                prav = false;
            }
        }
    }
    
    if ( prav = false ) {
        cout << "There is no such pair of numbers.";
    }
    
    cin.get();
    return 0;
}
