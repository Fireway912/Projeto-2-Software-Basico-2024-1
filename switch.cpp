#include <iostream>
using namespace std;

int main() {
  int codigo = 4; //Para testes, como fazer para 
  String source, destination;
  switch (codigo) {
  case 1://ADD
    cout << "add "+destination+" "+source;//Imprimindo na tela, ver como imprimir no arquivo em c++
    break;
  case 2://SUB
    cout << "sub "+destination+" "+source;
    break;
  case 3://MUL
    cout << "??????";
    break;
  case 4://DIV
    cout << "??????";
    break;
  case 5://JMP
    cout << "jmp "+destination;
    break;
  case 6://JMPN
    cout << "jb "+destination;
    break;
  case 7://JMPP
    cout << "jg "+destination;
    break;
  case 8://JMPZ
    cout << "jz "+destination;
    break;
  case 9://COPY
    cout << "xchg?? "+source+" "+destination;
    break;
  case 10://LOAD
    cout << "lea "+destination+" "+source;
    break;
  case 11://STORE
    cout << "...";
    break;
  case 12://INPUT
    cout << "..."; //Precisa fazer sucessivos shifts e multiplicacoes por 10 para transformar string em 
    break;
  case 13://OUTPUT
    cout << "...";
    break;
  case 14://STOP
    cout << "mov eax,1\nmov ebx,0\nint 80h";
    break;
  case 15://S_INPUT
    cout << "mov eax,4\nmov ebx,1\nmov ecx,"+message+;
    break;
  case 16://S_OUTPUT
    cout << "mov eax,4\nmov ebx,1\nmov ecx,"+message+"mov edx,99\nint 80h\n";
    break;
  }
  return 0;
}