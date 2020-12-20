#include<iostream>
#include<string>


using namespace std;

class Imbracaminte {

private:
    string tipImbracaminte;
    int pret;
    char* marime;
    static string culoare;
public:
    Imbracaminte()
    {
        this->tipImbracaminte = "100";
        this->pret = 10;
        this->marime = new char[strlen(marime) + 1];
        strcpy_s(this->marime, strlen(marime) + 1, marime);
        culoare = "alb";
    }

    Imbracaminte(string tipImbracaminte, int pret)
    {
        this->tipImbracaminte = tipImbracaminte;
        this->pret = pret;
        this->marime = new char[strlen(marime) + 1];
        strcpy_s(this->marime, strlen(marime) + 1, marime);
    }

    Imbracaminte(int pret)
    {
        this->pret = pret;
    }

    Imbracaminte(const Imbracaminte& i)
    {
        this->tipImbracaminte = i.tipImbracaminte;
        this->pret = i.pret;
        if (marime != nullptr)
        {
            this->marime = new char[strlen(i.marime) + 1];
            strcpy_s(this->marime, strlen(i.marime) + 1, marime);
        }
        else
        {
            this->marime = nullptr;
        }
        culoare = i.culoare;
    }

    ~Imbracaminte();

    string getTipImbracaminte()
    {
        return this->tipImbracaminte;
    }
    int getPret()
    {
        return this->pret;
    }
    char* getMarime(){

        return this->marime;
    }
    static string getCuloare() {
        return culoare;

    }
    void setTipImbracaminte(string tipImbracaminte)
    {
        if (!tipImbracaminte.empty() ) {
            this->tipImbracaminte = tipImbracaminte;
        }
        
    }
    void setPret(int pret)
    {
        if (pret > 0) {
            this->pret = pret;
        }
    }
    void setMarime(char* marime)
    {
        if (marime != nullptr)
        {
            this->marime = new char[strlen(marime) + 1];
            strcpy_s(this->marime, strlen(marime) + 1, marime);
        }
        else
        {
            this->marime = nullptr;
        }
    }
    void setCuloare(static string c) {
        culoare = c;
    }

    Imbracaminte& operator=(const Imbracaminte& s)
    {
        this->tipImbracaminte = s.tipImbracaminte;
        this->pret = s.pret;
        if (marime != nullptr)
        {
            this->marime = new char[strlen(marime) + 1];
            strcpy_s(this->marime, strlen(marime) + 1, marime);
        }
        else
        {
            this->marime = nullptr;
        }
        culoare = s.culoare;
        return *this;
    }

    void afisare() {
        cout << "Tipul imbracamintei este:" << tipImbracaminte << endl;
        cout << "Pretul este: " << pret << endl;
        cout << "Culoarea este: " << culoare << endl;
    }
    friend istream& operator>>(istream& intrare, Imbracaminte& i)
    {
        intrare >> i.culoare;
        intrare >> i.tipImbracaminte;
        intrare >> i.marime;
        intrare >> i.pret;

        return intrare;
    }

    friend ostream& operator<<(ostream& iesire, Imbracaminte& i) {

        iesire << "culoarea este: " << i.culoare << endl;
        iesire << "tipul imbracamintei este" << i.tipImbracaminte << endl;
        iesire << "marimea este: " << i.marime << endl;
        iesire << "pretul este: " << i.pret << endl;


        return iesire;
    }

    char& operator[](int pozitie) {
        if (pozitie >= 0 && pozitie < 100) {
            return marime[pozitie];
        }
    }

    Imbracaminte operator+(Imbracaminte i) {
        Imbracaminte im;
        int x = 10 ;
        im.pret = i.pret + x;

        return i;
    }

    bool operator== (const Imbracaminte& x) const {
        return (pret == x.pret );
    }

    Imbracaminte operator++(int) {
        Imbracaminte aux = *this;
        this->pret++;
        return aux;
    }
    bool operator>=(Imbracaminte p) {
        return this->pret >= p.pret;
    }

};



Imbracaminte::~Imbracaminte() {

    if (marime != nullptr) {
        delete[] this->marime;
    }
    
}






int main() {

}