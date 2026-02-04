#include<iostream>
#include<string>

using namespace std;

class Banana{
  protected:
    string nome;
    int energia;

  public:
    Banana(string n, int e) : nome(n), energia(e) {}
    // isso aqui eh a mesma coisa que:
    /* Banana(string n, int e) {
        nome = n;
        energia = e;
    } */
    
    /* USANDO GETTERS E SETTERS -> pontos de acesso aos atributos
      Banana(){
        nome = "";
        energia = 0;
      } -> primario

      Banana(string nome, int energia){
        this->nome = nome;
        this->energia = energia;
      } -> secundario

      void setNome(string nome){
        this->nome = nome;
      }
      
      void setEnergia(int energia){
        this->energia = energia;
      }

      void getNome(string Nome){
        return nome;
      }

      void getEnergia(int energia){
        return energia;
      }
    */
    void comerBanana(){
      energia += 10;
      if(energia > 100) energia = 100;
    }

    void status(){
      cout << "Nome: " << nome << endl;
      cout << "Energia: " << energia << endl;
    }
};

class BananaPai : public Banana {
  public:
    BananaPai(string n, int e) : Banana(n,e) {};
    
    void darConselho(){
      cout << "Filho, na vida, seja maduro... mas não muito." << endl;
    }
};

class BananaFilho : public Banana {
  public:
    BananaFilho(string n, int e) : Banana(n,e) {};

    void jogarVideoGame(){
      energia -= 15;
    }
};

class BananaBebe : public Banana {
  public: 
    BananaBebe(string n, int e) : Banana(n,e) {};

    void chorar(){
      cout << "BUÁÁÁÁÁÁ!" << endl;
      energia -= 15;
    }
};