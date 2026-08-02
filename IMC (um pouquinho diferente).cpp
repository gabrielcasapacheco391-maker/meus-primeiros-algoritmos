#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


double IMC(double peso,double altura){

return peso /pow(altura,2);
}

double TMB (double peso, double altura, int idade, char S){

 double alturaCm = altura * 100;
if(S=='M'|| S=='m'){

    return (10 * peso) + (6.25 * alturaCm) - (5 * idade) + 5;
}else if(S=='F' || S=='f'){

return (10 * peso) + (6.25 * alturaCm) - (5 * idade) - 161;
}else{

return 0;
}

}

int main()
{
    int idade;
    double peso, altura, IndiceCorporal, TaxaBasal,fator=0;
    int atividade;
    char sexo;


    cout << "digite sua idade: " << endl;
    cin>> idade;

    cout<<" digite seu sexo: " << endl;
    cin >> sexo;

    cout << "digite seu peso: " << endl;
    cin >> peso;

  cout << "Digite sua altura em metros  de preferencia  (ex: 1.75): "<<endl;
     cin>> altura;


     cout <<"Qual seu nivel de atividade? " << endl;


     cout << "1 - Sedentario"<<endl;
     cout << "2 - Levemente ativo"<< endl;
     cout << "3 - Moderadamente ativo"<<endl;
     cout << "4 - Muito ativo "<<endl;
     cout << "5 - Extremamente ativo" <<endl;


cin >> atividade;


     switch (atividade){


    case 1:
        fator = 1.2;
        break;

    case 2:
        fator = 1.375;
        break;

    case 3:
        fator = 1.55;
        break;

    case 4:
        fator = 1.725;
        break;

    case 5:
        fator = 1.9;
        break;

    default:
          cout << "Nivel de atividade invalido! como vou saber em tchê" << endl;
    return 1;
}



    IndiceCorporal = IMC(peso, altura);
TaxaBasal = TMB(peso, altura, idade, sexo);



if(TaxaBasal == 0)
{
    cout << "Sexo invalido!" << endl;
    return 1;
}
double GastoDiario;

GastoDiario = TaxaBasal*fator;

double cutting = GastoDiario - 500;
double bulking= GastoDiario  + 500;

double manutencao = GastoDiario;


double pesoAnterior;
cout << fixed << setprecision(2);
cout <<"digite seu peso anterior  " << endl;

cin>>pesoAnterior;


double variacaoPeso;



variacaoPeso = peso - pesoAnterior;

double IMCAnterior= IMC(pesoAnterior,altura);
double VariacaoIMC=IndiceCorporal-IMCAnterior;


 cout << "\n===== RESULTADOS =====\n";

cout << "IMC: " << IndiceCorporal << endl;


if(IndiceCorporal < 18.5)
    cout << "Classificacao: Abaixo do peso" << endl;
else if(IndiceCorporal < 25)
    cout << "Classificacao: Peso normal" << endl;
else if(IndiceCorporal < 30)
    cout << "Classificacao: Sobrepeso" << endl;
else
    cout << "Classificacao: Obesidade" << endl;

cout << "TMB: " << TaxaBasal << " kcal" << endl;
cout << "Gasto diario: " << GastoDiario << " kcal" << endl;


cout << " Manutencao: " << manutencao << " kcal" << endl;

cout << " Cutting: " << cutting << " kcal" << endl;

cout << " Bulking: " << bulking << " kcal" << endl;


cout << "\n===== HISTORICO =====\n";

if(pesoAnterior == 0)
{
    cout << "Sem historico anterior." << endl;
}
else
{
    cout << "Peso anterior: " << pesoAnterior << " kg" << endl;

    cout << "Peso atual: " << peso << " kg" << endl;

    cout << "Variacao: " << variacaoPeso << " kg" << endl;

    cout << " IMC Anterior: " << IMCAnterior << endl;
    cout <<"  Variação do IMC: " <<VariacaoIMC << endl;
    if(IMCAnterior < 18.5)
    cout << "Classificacao: Abaixo do peso" << endl;
else if(IMCAnterior < 25)
    cout << "Classificacao: Peso normal" << endl;
else if(IMCAnterior < 30)
    cout << "Classificacao: Sobrepeso" << endl;
else
    cout << "Classificacao: Obesidade" << endl;


}
    return 0;
}
