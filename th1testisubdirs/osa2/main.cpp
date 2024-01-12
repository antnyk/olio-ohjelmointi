#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void numeronArvaus(){
    int randomLuku = rand() % 20 + 1;
    int pelaajanArvaamaLuku;
    do{
        cout << "Guess number between 1-20:";
        cin >> pelaajanArvaamaLuku;
        if (pelaajanArvaamaLuku < randomLuku){
            cout << "Number is bigger" << endl;
        }
        else if (pelaajanArvaamaLuku > randomLuku){
            cout << "Number is smaller" << endl;
        }
    }while(pelaajanArvaamaLuku != randomLuku);
    cout << "Correct!" << endl;
}

int main()
{
    srand(time(0));
    numeronArvaus();

    return 0;
}
