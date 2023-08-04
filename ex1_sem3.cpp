
/*----------------- File: .h/.cpp -------------------+
| | EXERCICIO NUMERO 1
| |
| | Caio Galvão Silva - 8157 - 14/04/2023
| |
+-----------------------------------------------------+ */
#include<iostream>
#include<string.h>

using namespace std;
class String{
    public:
        void digitaString(){
            cout << "digite uma palavra\n";
            cin >> str;
        }
        char* imprimeString(){
            return str;
        }
        int comprimento(){
            return strlen (str);
        }
    private:
        char str[100];
};

int main(){

    String s;
    s.digitaString();
    cout << "String: " << s.imprimeString() << endl;
    printf("%s possui %d caracteres.\n", s.imprimeString(), s.comprimento());

    return 0;
}
