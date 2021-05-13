#include <iostream>
using namespace std;

class waktu
{
private:
    int jam;
    int menit;
    int detik;

public:
    void getwaktu(void);
    void putwaktu(void);
    void addwaktu(waktu T1,waktu T2);
};
void waktu::getwaktu(void){
    cout << "Enter waktu:" << endl;
    cout << "jam : ";    cin>>jam;
    cout << "menit : ";  cin>>menit;
    cout << "detik : ";  cin>>detik;
}
void waktu::putwaktu(void){
    cout << endl;
    cout << "waktu after add: ";
    cout << jam << ":" << menit << ":" << detik << endl;
}
void waktu::addwaktu(waktu T1,waktu T2){

    this->detik=T1.detik+T2.detik;
    this->menit=T1.menit+T2.menit + this->detik/60;;
    this->jam= T1.jam+T2.jam + (this->menit/60);
    this->menit %=60;
    this->detik %=60;
}
int main(){
    waktu T1,T2,T3;
    T1.getwaktu();
    T2.getwaktu();
    T3.addwaktu(T1,T2);
    T3.putwaktu();

    return 0;
}
