//IAlg - Semana 05 - Problema 22
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    string nomeArquivoPt = " ", nomeArquivoEn = " ", nomeArquivoDict = " ";

    cin >> nomeArquivoPt >> nomeArquivoEn >> nomeArquivoDict;

    ifstream portugues(nomeArquivoPt);
    ifstream ingles(nomeArquivoEn);

    //Verifica se todos os arquivos estao abertos
    if ((!portugues) or (!ingles)) {
        if (!portugues){
            cout << "Arquivo não encontrado: " << nomeArquivoPt << endl;
        }
        if (!ingles) {
            cout << "Arquivo não encontrado: " << nomeArquivoEn << endl;
        }
        //Fechar um arquivo não aberto não causa nenhum problema
        portugues.close();
        ingles.close();
        return 0;
    }

    ofstream dicionario(nomeArquivoDict);

    if (!dicionario) {
        cout << "Não foi possivel criar o arquivo: " << nomeArquivoDict << endl;
        return 0;
    }

    string palavraPt = " ", palavraEn = " ";
    while ((portugues >> palavraPt) and (ingles >> palavraEn)) {
        dicionario << palavraPt << ": " << palavraEn << endl;
    }

    return 0;
}
