#include <iostream>
using namespace std;
class Employee
{
 private:
  int emp_num;
  float emp_comp;
 public:
  void entData()
  {
   cout << "Masukkan nomor karyawan ";
   cin >> emp_num;
   cout << "Masukkan gaji karyawan " ;
   cin >> emp_comp;
  }
  void tampilkan()
  {
   cout << "Karyawan nomor " << emp_num << endl;
   cout << "Karyawan gaji " << emp_comp << endl;
  }
};
int main()
{
 Employee emp1, emp2, emp3;
 cout << "Masukkan Data Untuk Karyawan 1" << endl;
 emp1.entData();
 cout << "Masukkan Data Untuk Karyawan 2" << endl;
 emp2.entData();
 cout << "Masukkan Data Untuk Karyawan 3" << endl;
 emp3.entData();
 cout << "Total Data Entered Is" << endl;
 emp1.tampilkan();
 emp2.tampilkan();
 emp3.tampilkan();
}
