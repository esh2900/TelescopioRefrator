#include<bits/stdc++.h>

using namespace std;

void separador(){
	cout << "----------------------------------------\n\n\n";
	return;
}

int main(){

	char option='1';

	while(1){
		cout << "Escolha o que quer calcular"<< endl;
		cout << "1- Zoom(Magnification)" << endl;
		cout << "2- Zoom maximo(Limit of Magnification)"<< endl;
		cout << "3- Distancia focal requerida na ocular"<< endl;
		cout << "4- Poder de Resolucao Teorico" << endl;
		cout << "5- Razao Focal" << endl;
		cout << "6- Recebimento de luz" << endl;
		cout << "7- Distância entre as lentes" << endl;
		cout << "0-Sair" << endl << endl;

		cin >> option;
		if(option=='0') break;
		
		else if(option=='1'){
			separador();
			cout << "Digite:" << endl;
			double DF_obj,DF_ocul;
			cout << "Distancia Focal da Objetiva(mm):" << endl;
			cin >> DF_obj;
			cout << "Distancia Focal da Ocular(mm):" << endl;
			cin >> DF_ocul;
			cout << "Zoom = " << DF_obj/DF_ocul << "x" << endl;
			separador();
			
		}
		
		else if(option=='2'){
			separador();
			double diam_objetiva=0;
			cout << "Digite:" << endl;
			cout << "Abertura da Objetiva(Diametro de recebimento de luz em mm)" << endl;
			cin >> diam_objetiva;
			if(2.0*diam_objetiva>350.0){//limite prático devido ao ambiente
				cout << "Zoom Útil: 350x" << endl;
				cout << "O diametro escolhido excede o limite recomendado" << endl;
				continue;
			}
			cout << "Zoom Útil: " << 2.0*diam_objetiva << 'x' << endl;
			separador();
		}
		
		else if(option=='3'){
			separador();
			double DF_obj,magnif,diam_objetiva=0;
			cout << "Digite:" << endl;
			
			cout << "Distancia Focal da Objetiva(mm):" << endl;
			cin >> DF_obj;
			
			cout << "Abertura da Objetiva(Diametro de recebimento de luz em mm)" << endl;
			cin >> diam_objetiva;
			
			cout << "Zoom pretendido(x)" << endl;
			cin >> magnif;
			if(2.0*diam_objetiva<magnif){
				cout <<"Distancia focal da ocular: \n" << DF_obj/magnif << "mm" << endl;
				cout <<"CUIDADO\n O zoom requerido é muito grande para o telescopio, a imagem pode ficar um pouco borrada"<< endl;
			}
			else{
				cout <<"Distancia focal da ocular: \n" << DF_obj/magnif << "mm" << endl;
			}
			separador();		
		}
		
		else if(option=='4'){
			separador();
			double diam_objetiva=0,resol=0;
			
			cout << "Digite:" << endl;
			cout << "Abertura da Objetiva(Diametro de recebimento de luz em mm)" << endl;
			cin >> diam_objetiva;
			resol=116.0/diam_objetiva;
			
			if(resol<=1){//limite prático
				cout << "Resolucao= 1\" (arco de segundo)" << endl;
				cout << 1.0/3600.0 << "°" << endl;
			}
			else{
				cout << "Resolucao= " << 116.0/diam_objetiva << "\"" << endl << resol/3600.0 << "°" << endl;
			}
			separador();
		}
		
		else if(option=='5'){
			separador();
			double a_l, d_f;
			cout << "Digite:" << endl;
			cout << "Abertura da Lente (mm)" << endl;
			cin >> a_l;
			cout << "Distancia Focal (mm)" << endl;
			cin >> d_f;
			cout << "Razao Focal = f/" << d_f/a_l << endl;
			cout << "Razao Arredondada = f/" << round(d_f/a_l) << endl;
			separador();
		}
		
		else if(option=='6'){
			separador();
			char opt;
			double diam_objetiva=0;
			cout << "Escolha:" << endl;
			cout << "1-Comparar 2 objetivas" << endl;
			cout << "2-Comparar objetiva com o olho Humano" << endl;
			cout << "0-Voltar" << endl;
			cin >> opt;
			if(opt =='0') continue;
			else if(opt == '1'){
				double rf1,rf2;
				cout << "Digite:" << endl;
				cout << "Razao Focal da Lente 1" << endl;
				cin >> rf1;
				cout << "Razao Focal da Lente 2" << endl;
				cin >> rf2;
				cout << "A lente 1, recebe cerca de " << round(100.0*pow(rf2,2)/pow(rf1,2))/100 << "x a luz da lente 2"<< endl;
			}
			else if(opt =='2'){
				cout << "Digite:" << endl;
				cout << "Abertura da Objetiva(Diametro de recebimento de luz em mm)" << endl;
				cin >> diam_objetiva;
				cout << "Aumento no recebimento de luz:" << endl;
				cout << floor(pow(diam_objetiva,2)/pow(7.0,2)) << 'x' << endl;
			}
			else{
				cout << "Opcao Invalida" << endl;
			}
			separador();
		}	
		else if(option=='7'){
			separador();
			cout << "Digite:" << endl;
			double DF_obj,DF_ocul;
			cout << "Distancia Focal da Objetiva(mm):" << endl;
			cin >> DF_obj;
			cout << "Distancia Focal da Ocular(mm):" << endl;
			cin >> DF_ocul;
			
			cout << "Tamanho Aproximado do Tubo = " << (DF_obj-DF_ocul)/1000.0 << "m" << endl;
			separador();
		}
		else{
			separador();
			cout << "Comando Invalido" << endl;
			separador();
			continue;
		}
	}

return 0;
}
