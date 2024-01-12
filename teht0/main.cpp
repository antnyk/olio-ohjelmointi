#include <iostream>
#include <iomanip>



using namespace std;

void tulosta(string teksti){
    cout << teksti << endl;
}

float keskiarvo(void){
    float taulukko[5] = {1.989689586, 2.9358935798, 3.35345353535, 4.3535351, 5.14143535};

    //cout << sizeof(taulukko) << endl;

    float luku = 0.0;
    for (int i = 0; i < 5; i++){
        luku += taulukko[i];
    }

    return luku/5.0;
}


int main() {
    int a = 2;
    float b = 3.2;
    double liukuluku = 3.2213132145453;
    char c = 'a';
    string d = "SSSSSS";

    //random luku
    for (int i = 1; i < 4; i++){
        srand(time(0)/i);
        int satluku = rand() % 6 + 1;
        cout << "satunnainen luku" << satluku << endl;
    }

    //function
    tulosta("Terve");
    float tulos = keskiarvo();
    cout << setprecision(5) << tulos << endl;

    //input
    int luku = 0;
    cout << "Anna luku: ";
    cin >> luku;
    cout << "Antamasi luku: " << luku << endl;

    //Other crap
    cout << "Hello WWWWWWWWorld!" << endl;
    cout << d << endl;
    cout << liukuluku << " hei " << b << endl; //comment
    cout << liukuluku - a << endl;


    return 0;
}
