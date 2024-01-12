#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxNumber){
    int randomLuku = rand() % maxNumber + 1;
    int pelaajanArvaamaLuku;
    int arvaustenMaara = 0;
    do{
        arvaustenMaara++;
        cout << "Guess number between 1-" << maxNumber << ":";
        cin >> pelaajanArvaamaLuku;
        if (pelaajanArvaamaLuku < randomLuku){
            cout << "Number is bigger" << endl;
        }
        else if (pelaajanArvaamaLuku > randomLuku){
            cout << "Number is smaller" << endl;
        }
    }while(pelaajanArvaamaLuku != randomLuku);
    cout << "Correct!" << endl;

    return arvaustenMaara;
}

int main()
{
    srand(time(0));
    int annettuMaxLuku;
    cout << "Give a number: ";
    cin >> annettuMaxLuku;
    int tulos = game(annettuMaxLuku);
    cout << "It took you " << tulos << " guesses to get it correct!" << endl;

    return 0;
}
