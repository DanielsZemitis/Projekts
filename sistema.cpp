#include <iostream>
using namespace std;

// Sadaļa kas uzglabā datus

class student
{
    int rollno;
    char vards[30];
    int anglu_atzime, matematikas_atzime, bio_atzime, latviesu_atzime, vestures_atzime;
    double videja;
    std::string atzime;

public:
    void getdata();
    void showdata() const;
    void calculate();
}; // Sadaļa beidzas šeit

void student::calculate()
{
    videja = (anglu_atzime + matematikas_atzime + bio_atzime + latviesu_atzime + vestures_atzime) / 5.0;
    if (videja >= 95)
        atzime = "10";
    else if (videja >= 85)
        atzime = '9';
    else if (videja >= 75)
        atzime = '8';
    else if (videja >= 65)
        atzime = '7';
    else if (videja >= 55)
        atzime = '6';
    else if (videja >= 45)
        atzime = '5';
    else if (videja >= 35)
        atzime = '4';
    else if (videja >= 25)
        atzime = '3';
    else if (videja >= 15)
        atzime = '2';
    else if (videja >= 5)
        atzime = '1';
    else
        atzime = "n/v";
}

void student::getdata()
{
    std::cout << "\nIevadīt studenta kārtas numuru: ";
    std::cin >> rollno;
    std::cout << "\n\nIevadīt studenta vārdu: ";
    std::cin.ignore();
    std::cin.getline(vards, 30);
    std::cout << "\nVisām atzīmēm jābūt 100 procentu skalā";
    std::cout << "\nIevadiet atzīmi: ";
    std::cout << "\nIevadiet atzīmi angļu valodā: ";
    std::cin >> anglu_atzime;
    std::cout << "\nIevadiet atzīmi matemātikā: ";
    std::cin >> matematikas_atzime;
    std::cout << "\nIevadiet atzīmi bioloģijā: ";
    std::cin >> bio_atzime;
    std::cout << "\nIevadiet atzīmi latviešu valodā: ";
    std::cin >> latviesu_atzime;
    std::cout << "\nIevadiet atzīmi vesturē: ";
    std::cin >> vestures_atzime;

    calculate();
}
void ::student::showdata() const
{
    std::cout << "\nStudenta kārtas numurs: " << rollno;
    std::cout << "\nStudenta vārds: " << vards;
    std::cout << "\nAngļu valoda: " << anglu_atzime;
    std::cout << "\nMatemātika: " << matematikas_atzime;
    std::cout << "\nBioloģija: " << bio_atzime;
    std::cout << "\nLatviešu valoda:" << latviesu_atzime;
    std::cout << "\nVesture: " << vestures_atzime;
    std::cout << "\nVidēji iegūtie procenti mācību priekšmetos: " << videja<<'%';
    std::cout << "\nStudenta atzīme ir: " << atzime;
}

//Main
int main()
{
  student students;
    char ch;
    do
    {
        char ch;
        int num;
        std::cout << "\n\n\n\tMenu";
        std::cout << "\n\n\t1. Izveidot ierakstu par studentu";
        std::cout << "\n\n\t2. Parādit izveidoto ierakstu";
        std::cin >> ch;
        switch (ch)
        {
        case '1':
            students.getdata();
            break;
        case '2':
            students.showdata();
        }
       
    }
         while(true);  

        return 0;
}