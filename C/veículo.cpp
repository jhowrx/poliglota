//veiculo.cpp

#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

class Veiculo {
    
    private:
        //membros de dados de classe
        string marca, modelo, placa, cor;
        int ano;
        float preco;
        float combustivel;
        float kmPorLitro; //em litros
        bool ligado;
        
   public:   
        //construtor da classe
        //é uma função especial que é chamada automaticamente quando o objeto é criado
        Veiculo(string modelo, float kmPorLitro){
            this->modelo = modelo;           
            this->kmPorLitro = kmPorLitro;
            this->ligado = false;
    }     
            //funções=verbo  
    void ligar(){
        this->ligado = true;
        cout << modelo << " ligado" << endl;
    }
    
     void desligar(){
        this->ligado = false;
        cout << modelo << " desligado" << endl;
    }
    
    void acelerar(){
        cout << modelo << "acelerando... Vrummm..."<< endl;
    }
    
    void ligarAlarme(int frequencia){
        cout << "\nLigando alarme... \n";
        Beep(frequencia +1000,300);
        Sleep(100);
        Beep(frequencia +1000,300);
    }
    
    void desligarAlarme(int frequencia){
        cout << "\nDesligando alarme... \n";
        Beep(frequencia ,300);
        Sleep(100);
        Beep(frequencia, 300);
    }
    
    void abastecer(float combustivel_litros){
        this->combustivel += combustivel_litros;
        cout << "\n" << modelo << " abasteceu " << combustivel_litros << " litros " << endl;
       
    }
    
     void rodar(float kmParaRodar){
        cout << setprecision(1) << fixed;
        if (!this->ligado){
        cout  << modelo << " desligado! " << endl;
      } else if ((combustivel * kmPorLitro) >= kmParaRodar) {
        cout  << modelo << " rodando... " << kmParaRodar << " km " << endl 
              <<"Combustivel no tanque antes de rodar = "
              << combustivel << " litros. " << endl;
        this->combustivel -= (kmParaRodar / kmPorLitro);
        cout << "Combustivel restante apos rodar = "
             << combustivel << " litros." << endl;
    }else
    cout << "Nao ha combustivel suficiente para rodar!" << endl;
    }
}; //fim da classe 
    
int main(){  
    
    //instancia um objeto veicuulo
    //             chama o construtor
    
   cout << "--------Fusca---------" << endl;
    Veiculo fusca = Veiculo("Fusca", 8.0f);
    fusca.ligar();     
    fusca.acelerar();
    fusca.ligarAlarme(3000);
    fusca.desligarAlarme(3000);
    fusca.abastecer(50);
    fusca.rodar(10000);
    fusca.desligar(); 
    
    cout << "--------Celta---------" << endl;
    Veiculo celta = Veiculo ("Celta",15.0f);
    celta.ligar();    
    celta.acelerar();
    celta.ligarAlarme(2000);
    celta.desligarAlarme(2000);
    celta.abastecer(80);
    celta.rodar(10000);
    celta.desligar(); 
    
    system("pause");
    return 0;
}
