/* Algoritmos e Complexidade
Seu nome - Aula XX - Exercício XX
Código base em C++
*/
//bibliotecas
#include <iostream> 
using namespace std;
#define LIMITE 5

double buscar_maior(int vet1[]){
	double maior;
	maior = vet1[0];
	for(int i=1; i<LIMITE; i++){
		if(vet1[i] > maior){
			maior = vet1[i];
		}
	}
	return maior;
}

// função principal
int main() {
	//variáveis (declare aqui os tipos e as variáveis a usar)
	
	
	//const int LIMITE = 5;
	int vetor [LIMITE];
    //entrada de dados (comandos atribuindo ou solicitando dados)
	/*for (int i=0; i < LIMITE;i++){
		vetor[i]= 30;
	}*/
	for (int i=0; i < LIMITE; i++){
		//vetor[i] = 5-i;
		cin >> vetor[i];
	}

	//processamento de dados (cálculos, testes, verificações, etc.)


    //saida de dados (exibição dos resultados obtidos pelo processamento)
	for (int i=0; i < LIMITE; i++){
		cout << "[" << i << "]" << vetor[i] << endl;
	}
	
	
	cout << "O maior elemento:" << buscar_maior(vetor) << endl;
    return 0;
} // fim da função main()