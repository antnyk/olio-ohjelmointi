#include <iostream>
#include <iomanip>
#include <cstdlib>  //???? toimii ilman tätäkin
#include <postilaatikko.h>

using namespace std;
//1
void tulosta(string teksti){
    cout << teksti << endl;
}
//2
void tarkista(int num){
    if (num > 0){
        std::cout << "positiivinen" << endl;
    }
    if (num < 0){
        std::cout << "negatiivinen" << endl;
    }
    else std::cout << "nolla" << endl;
}
//3
void terveiset(int num) {
    // Tähän sisälle oma koodi
    for (int i = 1; i <= num; i++){
        std::cout << "Terve " << i << std::endl;
    }
}
//5
void kertoma(int num) {
    if (num > 10) std::cout << "Luku on liian iso" << std::endl;
    else if (num < 1) std::cout << "Ei voida laskea" << std::endl;
    else{
        int arvo = num;
        for (int i = (num-1);i > 0; i--){
            arvo *= i;
        }
        std::cout << arvo << endl;
    }
}
//6 ja 7
void tarkista_jaollisuus(int jaettava, int jaollinen) {
    (jaettava % jaollinen == 0) ? std::cout << "jaollinen" :  std::cout << "ei jaollinen";
}

//8
void sarja(int sluku) {
    std::srand(sluku);
    int satunnainenLuku;
    for (int i = 0; i < 5; i++){
        satunnainenLuku = rand() % 19;
        std::cout << satunnainenLuku << std::endl;
    }
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
    Postilaatikko pl;
    pl.lisaaPosti(5);
    pl.lisaaPosti(6);
    pl.otaPosti(1);
    Postilaatikko kl;
    kl.lisaaPosti(3);
    kl.otaPosti(3);

    printf("\n**********************************\n");
    int lukua = 1;
    int lukub = 5;
    lukua = lukub;
    lukua += 6;
    printf("%d", lukua);
    printf("\n**********************************\n");
    //th6
    tarkista_jaollisuus(5,4);
    //8
    srand(15);
    int satunnaisluku = rand() % 10;
    sarja(8);

    //th1 esitehtävät
    int x = 4;
    int y = 5;
    int z = x*y;
    z = z * 2;
    z += 1;
    cout << z << endl;
    //4
    cout << "?" << endl;
    int arvo = 0;
    cin >> arvo;
    arvo *= 2;
    cout << arvo << endl;





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
