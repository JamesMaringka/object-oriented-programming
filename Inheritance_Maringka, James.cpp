#include <iostream>

using namespace std;

class Person{
	protected:
		string name;
		char gender;

	public:
		Person(){
		};
		void setName(string Jim){
			name = Jim;
		}
		void setGender(char Gender){
			gender =  Gender;
		}
		string getName(){
			return name;
		}
		char getGender(){
			return gender;
		}
};

class Teacher : public Person{
	private:
		int nik;
		string faculty;

	public:
		void setNik(int NIK){
			nik = NIK;
		}
		void setFaculty(string Faculty){
			faculty = Faculty;
		}
		int getNik(){
			return nik;
		}
		string getFaculty(){
			return faculty;
		}
		void setData(){
		}
		displayData(){
		}
};

class Student : public Person{
	private:
		int nim;
		string registration_number;
		string prodi;

	public:
		void setNim(int NIM){
			nim = NIM;
		}
		void setRegistraionNumber(string No_Reg){
			registration_number = No_Reg;
		}
		void setProdi(string Prodi){
			prodi = Prodi;
		}
		int getNim(){
			return nim;
		}
		string getRegistrationNumber(){
			return registration_number;
		}
		string getProdi(){
			return prodi;
		}
};

int main(){
	
	
	return 0;
}
