#include <iostream>

using namespace std;

int main()
{
  // deklarasi variabel array yang bisa menampung lima nilai/elemen
  int grades[5] = {90, 85, 99, 70, 79};
  int rerata = 0, total = 0;
  int tertinggi = grades[0], terendah = grades[0];

  // nilai rata-rata
  for(int i=0; i<5; i++) {
    total += grades[i];
  }
  rerata = total / 5;
  cout << "Nilai rata-rata: " << rerata << endl;

  // nilai tertinggi
  for(int i=1; i<5; i++) {
    if(grades[i] > tertinggi) {
      tertinggi = grades[i];
    }
  }
  cout << "Nilai tertinggi: " << tertinggi << endl;

  // nilai terendah
  for(int i=1; i<5; i++) {
    if(grades[i] < terendah) {
      terendah = grades[i];
    }
  }
  cout << "Nilai terendah: " << terendah << endl;

  return 0;
}
