#include<iostream>
#include<string>


using namespace std;

class Imbracaminte {

private:
    string tipImbracaminte;
    char* marime;
    static string culoare;
    int pret;
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




    void CREATETABLE_Imbracaminte(string tipImbracaminte)
    {
        if (!tipImbracaminte.empty()) {
            this->tipImbracaminte = tipImbracaminte;
        }

    }

    void DROPTABLE_Imbracaminte(){

        tipImbracaminte = "";
        marime = nullptr;
        culoare = "";
        pret = 0;
    }

    void DISPLAYTABLE_Imbracaminte() {

        cout << tipImbracaminte << endl;
        cout << marime << endl;
        cout << culoare << endl;
        cout << pret << endl;
    }

    void INSERTINTO_Imbracaminte(string tipImbracaminte, char* marime, static string culoare, int pret) {

        this->tipImbracaminte = tipImbracaminte;
        this->marime = new char[strlen(marime) + 1];
        strcpy_s(this->marime, strlen(marime) + 1, marime);
        culoare = culoare;
        this->pret = pret;
    }


    void DELETEFROM_Imbracaminte() {
        if (tipImbracaminte == "tipImbracaminte")
            tipImbracaminte = "";
    }

    void SELECT_Imbracaminte() {
        if(tipImbracaminte == "tipImbracaminte") cout << tipImbracaminte;
        if(marime == "marime") cout << marime;
        if(culoare == "culoare") cout << culoare;
        if(pret != 0) cout << pret;
    }
    void UPDATE_Imbracaminte(string tipImbracaminte) {
        if (tipImbracaminte == "tipImbracaminte") this->tipImbracaminte = tipImbracaminte;
     }

};

Imbracaminte::~Imbracaminte() {

    if (marime != nullptr) {
        delete[] this->marime;
    }
    
}






class Incaltaminte {

private:
    string tipIncaltaminte;
    int pret;
    char* marime;
    static string culoare;
public:
    Incaltaminte()
    {
        this->tipIncaltaminte = "100";
        this->pret = 10;
        this->marime = new char[strlen(marime) + 1];
        strcpy_s(this->marime, strlen(marime) + 1, marime);
        culoare = "alb";
    }

    Incaltaminte(string tipIncaltaminte, int pret)
    {
        this->tipIncaltaminte = tipIncaltaminte;
        this->pret = pret;
        this->marime = new char[strlen(marime) + 1];
        strcpy_s(this->marime, strlen(marime) + 1, marime);
    }

    Incaltaminte(int pret)
    {
        this->pret = pret;
    }

    Incaltaminte(const Incaltaminte& i)
    {
        this->tipIncaltaminte = i.tipIncaltaminte;
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

    ~Incaltaminte();

    string getTipIncaltaminte()
    {
        return this->tipIncaltaminte;
    }
    int getPret()
    {
        return this->pret;
    }
    char* getMarime() {

        return this->marime;
    }
    static string getCuloare() {
        return culoare;

    }
    void setTipIncaltaminte(string tipIncaltaminte)
    {
        if (!tipIncaltaminte.empty()) {
            this->tipIncaltaminte = tipIncaltaminte;
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

    Incaltaminte& operator=(const Incaltaminte& s)
    {
        this->tipIncaltaminte = s.tipIncaltaminte;
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
        cout << "Tipul incaltamintei este:" << tipIncaltaminte << endl;
        cout << "Pretul este: " << pret << endl;
        cout << "Culoarea este: " << culoare << endl;
    }
    friend istream& operator>>(istream& intrare, Incaltaminte& i)
    {
        intrare >> i.culoare;
        intrare >> i.tipIncaltaminte;
        intrare >> i.marime;
        intrare >> i.pret;

        return intrare;
    }

    friend ostream& operator<<(ostream& iesire, Incaltaminte& i) {

        iesire << "culoarea este: " << i.culoare << endl;
        iesire << "tipul incaltamintei este" << i.tipIncaltaminte << endl;
        iesire << "marimea este: " << i.marime << endl;
        iesire << "pretul este: " << i.pret << endl;


        return iesire;
    }

    char& operator[](int pozitie) {
        if (pozitie >= 0 && pozitie < 100) {
            return marime[pozitie];
        }
    }

    Incaltaminte operator+(Incaltaminte i) {
        Incaltaminte im;
        int x = 10;
        im.pret = i.pret + x;

        return i;
    }

    bool operator== (const Incaltaminte& x) const {
        return (pret == x.pret);
    }

    Incaltaminte operator++(int) {
        Incaltaminte aux = *this;
        this->pret++;
        return aux;
    }
    bool operator>=(Incaltaminte p) {
        return this->pret >= p.pret;
    }





    void CREATETABLE_Incaltaminte(string tipIncaltaminte)
    {
        if (!tipIncaltaminte.empty()) {
            this->tipIncaltaminte = tipIncaltaminte;
        }

    }

    void DROPTABLE_Incaltaminte() {

        tipIncaltaminte = "";
        marime = nullptr;
        culoare = "";
        pret = 0;
    }

    void DISPLAYTABLE_Incaltaminte() {

        cout << tipIncaltaminte << endl;
        cout << marime << endl;
        cout << culoare << endl;
        cout << pret << endl;
    }

    void INSERTINTO_Incaltaminte(string tipIncaltaminte, char* marime, static string culoare, int pret) {

        this->tipIncaltaminte = tipIncaltaminte;
        this->marime = new char[strlen(marime) + 1];
        strcpy_s(this->marime, strlen(marime) + 1, marime);
        culoare = culoare;
        this->pret = pret;
    }


    void DELETEFROM_Incaltaminte() {
        if (tipIncaltaminte == "tipIncaltaminte")
            tipIncaltaminte = "";
    }

    void SELECT_Incaltaminte() {
        if (tipIncaltaminte == "tipIncaltaminte") cout << tipIncaltaminte;
        if (marime == "marime") cout << marime;
        if (culoare == "culoare") cout << culoare;
        if (pret != 0) cout << pret;
    }
    void UPDATE_Incaltaminte(string tipIncaltaminte) {
        if (tipIncaltaminte == "tipIncaltaminte") this->tipIncaltaminte = tipIncaltaminte;
    }


};
Incaltaminte::~Incaltaminte() {

    if (marime != nullptr) {
        delete[] this->marime;
    }

}











class Accesorii {

private:
    string tipAccesoriu;
    char* marime;
    static string culoare;
    int pret;
public:
    Accesorii()
    {
        this->tipAccesoriu = "100";
        this->pret = 10;
        this->marime = new char[strlen(marime) + 1];
        strcpy_s(this->marime, strlen(marime) + 1, marime);
        culoare = "alb";
    }

    Accesorii(string tipAccesoriu, int pret)
    {
        this->tipAccesoriu = tipAccesoriu;
        this->pret = pret;
        this->marime = new char[strlen(marime) + 1];
        strcpy_s(this->marime, strlen(marime) + 1, marime);
    }

    Accesorii(int pret)
    {
        this->pret = pret;
    }

    Accesorii(const Accesorii& i)
    {
        this->tipAccesoriu = i.tipAccesoriu;
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

    ~Accesorii();

    string getTipAccesoriu()
    {
        return this->tipAccesoriu;
    }
    int getPret()
    {
        return this->pret;
    }
    char* getMarime() {

        return this->marime;
    }
    static string getCuloare() {
        return culoare;

    }
    void setTipAccesoriu(string tipAccesoriu)
    {
        if (!tipAccesoriu.empty()) {
            this->tipAccesoriu = tipAccesoriu;
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

    Accesorii& operator=(const Accesorii& s)
    {
        this->tipAccesoriu = s.tipAccesoriu;
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
        cout << "Tipul accesoriului este:" << tipAccesoriu << endl;
        cout << "Pretul este: " << pret << endl;
        cout << "Culoarea este: " << culoare << endl;
    }
    friend istream& operator>>(istream& intrare, Accesorii& i)
    {
        intrare >> i.culoare;
        intrare >> i.tipAccesoriu;
        intrare >> i.marime;
        intrare >> i.pret;

        return intrare;
    }

    friend ostream& operator<<(ostream& iesire, Accesorii& i) {

        iesire << "culoarea este: " << i.culoare << endl;
        iesire << "tipul accesoriului este" << i.tipAccesoriu << endl;
        iesire << "marimea este: " << i.marime << endl;
        iesire << "pretul este: " << i.pret << endl;


        return iesire;
    }

    char& operator[](int pozitie) {
        if (pozitie >= 0 && pozitie < 100) {
            return marime[pozitie];
        }
    }

    Accesorii operator+(Accesorii i) {
        Accesorii im;
        int x = 10;
        im.pret = i.pret + x;

        return i;
    }

    bool operator== (const Accesorii& x) const {
        return (pret == x.pret);
    }

    Accesorii operator++(int) {
        Accesorii aux = *this;
        this->pret++;
        return aux;
    }
    bool operator>=(Accesorii p) {
        return this->pret >= p.pret;
    }




    void CREATETABLE_Accesorii(string tipAccesoriu)
    {
        if (!tipAccesoriu.empty()) {
            this->tipAccesoriu = tipAccesoriu;
        }

    }

    void DROPTABLE_Accesorii() {

        tipAccesoriu= "";
        marime = nullptr;
        culoare = "";
        pret = 0;
    }

    void DISPLAYTABLE_Imbracaminte() {

        cout << tipAccesoriu << endl;
        cout << marime << endl;
        cout << culoare << endl;
        cout << pret << endl;
    }

    void INSERTINTO_Accesorii(string tipAccesoriu, char* marime, static string culoare, int pret) {

        this->tipAccesoriu = tipAccesoriu;
        this->marime = new char[strlen(marime) + 1];
        strcpy_s(this->marime, strlen(marime) + 1, marime);
        culoare = culoare;
        this->pret = pret;
    }


    void DELETEFROM_Accesorii() {
        if (tipAccesoriu == "tipAccesoriu")
            tipAccesoriu = "";
    }

    void SELECT_Accesorii() {
        if (tipAccesoriu == "tipAccesoriu") cout << tipAccesoriu;
        if (marime == "marime") cout << marime;
        if (culoare == "culoare") cout << culoare;
        if (pret != 0) cout << pret;
    }
    void UPDATE_Accesorii(string tipAccesoriu) {
        if (tipAccesoriu == "tipAccesoriu") this->tipAccesoriu = tipAccesoriu;
    }

};
Accesorii::~Accesorii() {

    if (marime != nullptr) {
        delete[] this->marime;
    }

}











class Comenzi {

private:
    string idComanda; 
    char* email; 
    static string numeClient; 
    int pret;
public:
    Comenzi()
    {
        this->idComanda = "100";
        this->pret = 10;
        this->email = new char[strlen(email) + 1];
        strcpy_s(this->email, strlen(email) + 1, email);
        numeClient = "Ion";
    }

    Comenzi(string idComanda, int pret)
    {
        this->idComanda = idComanda;
        this->pret = pret;
        this->email = new char[strlen(email) + 1];
        strcpy_s(this->email, strlen(email) + 1, email);
    }

    Comenzi(int pret)
    {
        this->pret = pret;
    }

    Comenzi(const Comenzi& i)
    {
        this->idComanda = i.idComanda;
        this->pret = i.pret;
        if (email != nullptr)
        {
            this->email = new char[strlen(i.email) + 1];
            strcpy_s(this->email, strlen(i.email) + 1, email);
        }
        else
        {
            this->email = nullptr;
        }
        numeClient = i.numeClient;
    }

    ~Comenzi();

    string getIdComanda()
    {
        return this->idComanda;
    }
    int getPret()
    {
        return this->pret;
    }
    char* getEmail() {

        return this->email;
    }
    static string getNumeClient() {
        return numeClient;

    }
    void setIdComanda(string idComanda)
    {
        if (!idComanda.empty()) {
            this->idComanda = idComanda;
        }

    }
    void setPret(int pret)
    {
        if (pret > 0) {
            this->pret = pret;
        }
    }
    void setEmail(char* email)
    {
        if (email != nullptr)
        {
            this->email = new char[strlen(email) + 1];
            strcpy_s(this->email, strlen(email) + 1, email);
        }
        else
        {
            this->email = nullptr;
        }
    }
    void setNumeClient(static string c) {
        numeClient = c;
    }

    Comenzi& operator=(const Comenzi& s)
    {
        this->idComanda = s.idComanda;
        this->pret = s.pret;
        if (email != nullptr)
        {
            this->email = new char[strlen(email) + 1];
            strcpy_s(this->email, strlen(email) + 1, email);
        }
        else
        {
            this->email = nullptr;
        }
        numeClient = s.numeClient;
        return *this;
    }

    void afisare() {
        cout << "Id-ul comenzii este:" << idComanda << endl;
        cout << "Pretul este: " << pret << endl;
        cout << "Numele clientului  este: " << numeClient << endl;
        cout << "Emailul este:" << email << endl;
    }
    friend istream& operator>>(istream& intrare, Comenzi& i)
    {
        intrare >> i.numeClient;
        intrare >> i.idComanda;
        intrare >> i.email;
        intrare >> i.pret;

        return intrare;
    }

    friend ostream& operator<<(ostream& iesire, Comenzi& i) {

        iesire << "numele clientului este: " << i.numeClient << endl;
        iesire << "id-ul comenzii este" << i.idComanda << endl;
        iesire << "emailul este: " << i.email << endl;
        iesire << "pretul este: " << i.pret << endl;


        return iesire;
    }

    char& operator[](int pozitie) {
        if (pozitie >= 0 && pozitie < 100) {
            return email[pozitie];
        }
    }

    Comenzi operator+(Comenzi i) {
        Comenzi im;
        int x = 10;
        im.pret = i.pret + x;

        return i;
    }

    bool operator== (const Comenzi& x) const {
        return (pret == x.pret);
    }

    Comenzi operator++(int) {
        Comenzi aux = *this;
        this->pret++;
        return aux;
    }
    bool operator>=(Comenzi p) {
        return this->pret >= p.pret;
    }




    void CREATETABLE_Comenzi(string idComanda)
    {
        if (!idComanda.empty()) {
            this->idComanda = idComanda;
        }

    }

    void DROPTABLE_Comenzi() {

        idComanda = "";
        email = nullptr;
        numeClient = "";
        pret = 0;
    }

    void DISPLAYTABLE_Comenzi() {

        cout << idComanda << endl;
        cout << email << endl;
        cout << numeClient << endl;
        cout << pret << endl;
    }

    void INSERTINTO_Comenzi(string idComanda, char* email, static string numeClient, int pret) {

        this->idComanda = idComanda;
        this->email = new char[strlen(email) + 1];
        strcpy_s(this->email, strlen(email) + 1, email);
        numeClient = numeClient;
        this->pret = pret;
    }


    void DELETEFROM_Comenzi() {
        if (idComanda == "idComanda")
            idComanda = "";
    }

    void SELECT_Comenzi() {
        if (idComanda == "idComanda") cout << idComanda;
        if (email == "email") cout << email;
        if (numeClient == "numeClient") cout << numeClient;
        if (pret != 0) cout << pret;
    }
    void UPDATE_Comenzi(string idComanda) {
        if (idComanda == "idComanda") this->idComanda = idComanda;
    }

};



Comenzi::~Comenzi() {

    if (email != nullptr) {
        delete[] this->email;
    }

}








int main() {

}
