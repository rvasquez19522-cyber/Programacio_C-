#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ---------- Clase base ----------
class Animal {
public:
    string especie;
    int edat;

    Animal(string e, int ed) : especie(e), edat(ed) {}
    virtual void xerrar() = 0;
    virtual void mourem() = 0;
    virtual void quisoc() {
        cout << "Sóc un " << especie << " de " << edat << " anys." << endl;
    }
    virtual ~Animal() {}
};

// ---------- Subclases ----------
class Cavall : public Animal {
public:
    Cavall(int ed) : Animal("Cavall", ed) {}
    void xerrar() override { cout << "El cavall renilla." << endl; }
    void mourem() override { cout << "El cavall galopa." << endl; }
};

class Dofi : public Animal {
public:
    Dofi(int ed) : Animal("Dofi", ed) {}
    void xerrar() override { cout << "El dofí xiula!" << endl; }
    void mourem() override { cout << "El dofí nedant àgilment." << endl; }
};

class Abella : public Animal {
public:
    Abella(int ed) : Animal("Abella", ed) {}
    void xerrar() override { cout << "Bzzz bzzz!" << endl; }
    void mourem() override { cout << "L'abella vola." << endl; }
    void picar() { cout << "L'abella pica!" << endl; }
};

class Huma : public Animal {
public:
    string nom;
    Huma(int ed, string n) : Animal("Humà", ed), nom(n) {}
    void xerrar() override { cout << nom << " diu: Hola!" << endl; }
    void mourem() override { cout << nom << " camina." << endl; }
};

// ---------- Subclase Fiet ----------
class Fiet : public Huma {
public:
    vector<string> pares;
    Fiet(string n, int ed, vector<string> p) : Huma(ed, n), pares(p) {}
    void nompares() {
        cout << "Pares de " << nom << ": ";
        for (auto& p : pares) cout << p << " ";
        cout << endl;
    }
};

// ---------- Subclase Centaure ----------
class Centaure : public Cavall, public Huma {
public:
    Centaure(string n, int ed) : Cavall(ed), Huma(ed,n) {}
    void xerrar() override { cout << Huma::nom << " parla i neeeiii!" << endl; }
    void mourem() override { cout << Huma::nom << " corre com un centaure." << endl; }
    void quisoc() { cout << "Sóc un Centaure de " << Cavall::edat << " anys." << endl; }
};

// ---------- Clase independiente Xou ----------
class Xou {
public:
    void xerrar() { cout << "Xou fa soroll!" << endl; }
    void mourem() { cout << "Xou es mou escènicament." << endl; }
    void quisoc() { cout << "Xou especial!" << endl; }
};

// ---------- Main ----------
int main() {
    vector<Animal*> animals;

    // Crear objetos
    Cavall c(5);
    Dofi d(3);
    Abella a(1);
    Huma h(30, "Joan");
    Fiet f("FietX", 5, {"PareX", "MareY"});

    // Añadir a la lista polimórfica (Centaure no se puede agregar)
    animals.push_back(&c);
    animals.push_back(&d);
    animals.push_back(&a);
    animals.push_back(&h);
    animals.push_back(&f);

    // Llamar métodos comunes
    for (Animal* ani : animals) {
        ani->quisoc();
        ani->xerrar();
        ani->mourem();
        cout << endl;
    }

    // Llamar métodos específicos
    a.picar();
    f.nompares();

    // Centaure se maneja aparte
    Centaure ce("Centauri", 200);
    ce.quisoc();
    ce.xerrar();
    ce.mourem();
    cout << endl;

    // Clase Xou independiente
    Xou x;
    x.quisoc();
    x.xerrar();
    x.mourem();

    return 0;
}