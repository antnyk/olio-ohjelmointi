#include <iostream>
#include <cstdlib>
#include <ctime>
//toimii ilman <ctime>:a, mutta miksi?

using namespace std;

int main()
{
    srand(time(0));
    int randomLuku = rand() % 20 + 1;
    int pelaajanArvaamaLuku;
    do{
        cout << "Guess number between 20-1:";
        cin >> pelaajanArvaamaLuku;
        if (pelaajanArvaamaLuku < randomLuku){
            cout << "Number is bigger" << endl;
        }
        else if (pelaajanArvaamaLuku > randomLuku){
            cout << "Number is smaller" << endl;
        }
    }while(pelaajanArvaamaLuku != randomLuku);
    cout << "Correct!" << endl;

    return 0;
}
