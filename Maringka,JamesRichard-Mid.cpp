#include <iostream>
using namespace std;

class Student{
	private:
		string grades;
		int Ass, Quiz, Att, Mid, Final, Grade;

	public:
		void Nilai(int n_ass_, int n_quiz, int n_att, int n_mid, int n_final);
		void huruf();
		void printNilai(int a);
};

void Student::huruf(){
	Grade = Ass + Quiz + Att + Mid + Final;

	if (Grade>=91 && Grade<=100){
		grades ="A";
	}
	else if (Grade>=85 && Grade<=90){
		grades ="A-";
	}
	else if (Grade>=82 && Grade<=84){
		grades ="B+";
	}
	else if (Grade>=78 && Grade<=81){
		grades ="B";
	}
	else if (Grade>=75 && Grade<=77){
		grades ="B-";
	}
	else if (Grade>=70 && Grade<=74){
		grades ="C+";
	}
	else if (Grade>= 67 && Grade<=69){
		grades ="C";
	}
	else if (Grade>=60 && Grade<=66){
		grades ="C-";
	}
	else if (Grade>=40 && Grade<=59){
		grades ="D";
	}
	else if (Grade>=0 && Grade<=39){
		grades ="F";
	}
}

void Student::Nilai(int n_ass, int n_quiz, int n_att, int n_mid, int n_final){
	Ass =(n_ass * 20) /100;
	Quiz =(n_quiz * 10) /100;
	Att =(n_att * 10) /100;
	Mid =(n_mid * 30) /100;
	Final =(n_final * 30) /100;
}

void Student::printNilai(int a){
	cout <<a <<"\t\t" <<Grade <<"(" <<grades <<")" <<endl;
	cout <<"-----------------------" <<endl;
	cout <<"Thank You!";
}

int main()
{
	int i,j,mhs;
	int tugas,kuis,kehadiran,mid,final;

	cout <<"-WELCOME TO GRADING SYSTEM-"<< endl;
	cout <<"---------------------------"<< endl;
	cout <<"Enter number of Student : "; cin >> mhs;

	Student grade[mhs];
	for(i=0; i<mhs; i++){
		cout <<endl;
		cout <<"Enter grade for Student " << i+1 << endl;
		cout <<"Assignment:";
		cin  >>tugas;
		cout <<"Quiz      :";
		cin  >>kuis;
		cout <<"Attendance:";
		cin  >>kehadiran;
		cout <<"Mid Exam  :";
		cin  >>mid;
		cout <<"Final Exam:";
		cin  >>final;
		cout <<endl;

		grade[i].Nilai(tugas, kuis, kehadiran, mid, final);

		grade[i].huruf();
	}

	cout <<"-----------------------" <<endl;
	cout <<"Student Grade" <<endl;
	cout <<"-----------------------" <<endl;
	cout <<"Mahasiswa    	 Nilai" <<endl;
	cout <<"-----------------------" <<endl;


	for(j=0; j<mhs; j++){
		grade[j].printNilai(j+1);
	}

	return 0;
}
