#include <iostream>

 

using namespace std;

 

void ordenaAqui(int vet[], int tam){
    int aux;
    for(int i=0; i< tam; i++){
        for(int j=i+1; j<tam; j++){
            if(vet[i]>vet[j]){
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }
    for(int a = 0; a < tam; a++){
        cout << vet[a] << " ";
    }
}

 

int buscaBea(int vet[], int tam, int n){
    int inicio = 0, fim = tam - 1, meio;
    while (inicio <= fim){
        meio = (inicio + fim) / 2;
        if (vet[meio] == n){
            return meio;
        }
        else if (vet[meio] < n){
            inicio = meio + 1;
        }
        else{
            fim = meio - 1;
        }
    }
    return -1;
}

 

int main(int argc, char *argv[])
{
    int tam, n; 
    cout<<"Qual o tamanho do vetor?";
    cin >> tam; 

    int vet[tam]; 

    for(int i = 0; i < tam; i++){
        cout<<"Preenche o vetor ai faz favor: " << endl;
        cin >> vet[i];
    }

    ordenaAqui (vet, tam);

    cout << endl << "Qual number meu compas quer achar?" << endl; 
    cin >> n;  

    int posicao = buscaBea(vet, tam, n);

    if (posicao == -1){
        cout << "O número " << n << " não foi encontrado." << endl;
    }
    else{
        cout << "O número " << n << " foi encontrado na posição " << posicao + 1 << "." << endl;
    }

    return 0;
}