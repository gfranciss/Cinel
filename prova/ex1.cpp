#include <iostream>
using namespace std;

const int numCanais = 4;
struct Canal {
    int totalPessoas = 0;
    int qtd = 0;
};
struct Casa {
    Canal canais[numCanais];
    int numtv;
    int qtdTvLigada = 0;
};

void armazenarDados(Casa casas[], int nCasas, int nCasasComTVLigadas) {
    for (int i = 0; i < nCasas; ++i) {
        int canal = 0;
        int qtdPessoas = 0;

        cout << "Informe o número de televisores ligado na casa " << i + 1 << ": ";
        cin >> casas[i].numtv;
        if (casas[i].numtv > 0) {
            nCasasComTVLigadas++;
        }
        if (casas[i].numtv == 0) {
            continue;
        }
        else if (casas[i].numtv > 1) {
            for (int i = 0; i < casas[i].numtv; ++i) {
                cout << "Informe o canal assistido na televisão " << i + 1 << " : ";
                cin >> canal;
                cout << "Informe o número de pessoas assistindo o canal " << canal << ": ";
                cin >> qtdPessoas;
                casas[i].canais[canal].totalPessoas += qtdPessoas;
                casas[i].canais[canal].qtd++;
            }
        }
        else {
            cout << "Informe o canal assistido na televisão: ";
            cin >> canal;
            cout << "Informe o número de pessoas assistindo o canal " << canal << ": ";
            cin >> qtdPessoas;
            casas[i].canais[canal].totalPessoas += qtdPessoas;
            casas[i].canais[canal].qtd++;
        }
    }
}

int main() {
    int nCasas;
    int nCasasComTVLigadas = 0;

    cout << "Informe o número de casas pesquisadas: ";
    cin >> nCasas;

    // Array de estruturas para armazenar informações de cada casa
    Casa casas[nCasas];

    // Leitura dos dados de cada casa
    armazenarDados(casas, nCasas, nCasasComTVLigadas);

    //Trabalho com os dados obtidos para apresentar as respostas
    cout << "Número de casas pesquisadas: " << nCasas << endl;
    cout << "Número de casas com televisores ligados: " << nCasasComTVLigadas << endl;

    //porcentagem de audiencia para cada canal de tv
    for (int i = 0; i < numCanais; ++i) {
        int totalPessoasCanal = 0;
        int totalQtdCanal = 0;
        for (int j = 0; j < nCasas; ++j) {
            totalPessoasCanal += casas[j].canais[i].totalPessoas;
            totalQtdCanal += casas[j].canais[i].qtd;
        }
        if (totalQtdCanal > 0) {
            cout << "Canal " << i + 1 << ": " << (totalPessoasCanal * 100) / totalQtdCanal << "%" << endl;
        }
    }

    //porcentagem de sintonizações para cada canal de tv
    for (int i = 0; i < numCanais; ++i) {
        int totalQtdCanal = 0;
        for (int j = 0; j < nCasas; ++j) {
            totalQtdCanal += casas[j].canais[i].qtd;
        }
        if (totalQtdCanal > 0) {
            cout << "Canal " << i + 1 << ": " << (totalQtdCanal * 100) / nCasas << "%" << endl;
        }
    }

    return 0;
}
