int main(){
    cout << "Bem-vindos ao jogo da adivinhação!" << endl;

    const int NUMERO_SECRETO = 42; // Número secreto a ser adivinhado
    
    bool nao_acertou = true;
    int tentativas = 0;
    
    while(nao_acertou){
        tentativas = tentativas + 1;
        int chute;
        cout << "Tentativa " << tentativas << endl;
        cout << "Qual o seu chute?";
        cin >> chute;
        
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
}
