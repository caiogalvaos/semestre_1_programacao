/*----------------- File: .h/.cpp -------------------+
| | EXERCICIO NUMERO 3
| |
| | Caio Galvão Silva - 8157 - 14/04/2023
| |
+-----------------------------------------------------+ */

#include<iostream>
#include<string.h>

using namespace std;
class Pessoa{
    public:
        char nome[100];
        void setIdade(int n1){
            idade = n1;
        }
        void setPeso(double p1){
            peso = p1;
        }
        void setAltura(double q1){
            altura = q1;
        }
        int getIdade(){
            return idade;
        }
        double getPeso(){
            return peso;
        }
        double getAltura(){
            return altura;
        }
        void imprimirDados(){
            cout << "os dados são:\nIdade: " << idade << "\nPeso: " << peso << "\nAltura: " << altura;
        }
        double retorna_IMC(){
            return peso/(altura*altura);
        }
    private:
        int idade;
        double peso;
        double altura;
};

int main(){
    Pessoa p[2];
    int idade;
    double peso, altura;
    int maiorid = -1000;

    for(int i = 0; i < 2; i++){
        cout << "digite sua idade:\n";
        cin >> idade;
        p[i].setIdade(idade);
        if(idade > maiorid){
            maiorid = idade;
        }
        cout << "digite seu peso:\n";
        cin >> peso;
        p[i].setPeso(peso);
        cout << "digite sua altura:\n";
        cin >> altura;
        p[i].setAltura(altura);
        cout << "seu IMC eh: " << p[i].retorna_IMC() << "\n";
    }

    cout << "a idade da pessoa mais velha eh: " << maiorid << " anos.";
    return 0;
}
