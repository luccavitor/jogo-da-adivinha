#include<iostream>
using namespace std;

int main(){
    cout << "Bem-vindos ao jogo da adivinhação!" << endl;

    const int NUMERO_SECRETO = 42; // Número secreto a ser adivinhado
    
    //variável para condição do while continuar executando até que fique false e a quantidade de tentativas
    bool nao_acertou = true;
    int tentativas = 0;
    
    //pontuação do jogo
    double pontos = 1000.0;
    
    
    while(nao_acertou){
        //tentativas antes de cada chute
        tentativas = tentativas + 1;
        int chute;
        cout << "Tentativa " << tentativas << endl;
        cout << "Qual o seu chute?";
        cin >> chute;
        
        // Cálculo dos pontos perdidos, abs é uma função que retorna números absolutos sem negativos
        double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
        pontos = pontos - pontos_perdidos;
        
        cout << "O valor do seu chute é: " << chute << endl;

        // variáveis bool para deixar o código menos poluído
        bool acertou = chute ==  NUMERO_SECRETO;
        bool menor = chute < NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;
    
        if(acertou){
            cout << "Parabéns!! Você acertou o número secreto." << endl;
            nao_acertou = false;
        }
        else if(menor){
            cout << "O seu chute está errado. O seu chute foi menor que o número secreto!" << endl;
        }
        else if(maior){
            cout << "O seu chute está errado. O seu chute foi maior que o número secreto!" << endl;
        }   
    }
   cout << "Fim de jogo!" << endl;
   cout << "Você acertou o número secreto em " << tentativas << " tentativas" << endl;
   cout.precision(2); //números de casas que eu quero que apareça nos pontos.
   cout << fixed; // marcador para virgula ficar fixa no lugar sem alterar o valor
   cout << "Sua pontuação foi de: " << pontos << endl;
}
