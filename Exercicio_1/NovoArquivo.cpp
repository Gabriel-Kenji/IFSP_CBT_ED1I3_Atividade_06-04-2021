#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;


int main()
{
	
	int l = 0, c = 0, i = 0, j = 0, k = 0, contpol = 0; 
	int escolha, linha, coluna , linhas, colunas;
	int lugares[15][40];
	float valor = 0;
	
	
	
	for(l=0; l<=14; l++)
	{
		for(c=0; c<=39; c++)
		{
			lugares[l][c] = 0;
		}
	}
		
	for(i=0; i <1; i++)
	{
		cout << "Escolha oque deseja realizar" << endl ;
		
		cout << " Digite (0)  Finalizar" << endl;
		cout << " Digite (1)  Reservar poltrona" << endl;
		cout << " Digite (2)  Mapa de ocupacao" << endl;
		cout << " Digite (3)  Faturamento" << endl << endl;
		
		cout << "Digite a sua escolha: ";
		
		cin >> escolha;
		
		if(escolha == 0)
		{
			i = 1;
		}
		else if(escolha == 1)
		{
			
			for(j=0; j<=0; j++)
			{
				k = -1;
				cout << "Escolha uma fileira de 1 a 15" << endl;
				cin >> linha;
				if(linha >=1 && linha <=15)
				{
					linhas = linha - 1;
					for(k=0; k<=0; k++)
					{
						cout << "Escolha uma coluna de 1 a 40" << endl;
						cin >> coluna;
						
						
						if(coluna >=1 && coluna <=40)
						{
							colunas = coluna - 1;
							if(lugares[linhas][colunas] == 0)
							{
								lugares[linhas][colunas] = 1;
								k = 1;
							}else
							{
								system("cls");
								j = -1;
								cout << endl  << "Poltrona ja selecionada, tente novamente" << endl << endl;
							}
						}
						else
						{
							cout << "Coluna não existente. Tente Novamente" << endl;
							k = -1;
						}
					}
				}
				else
				{
					cout << "Fileira não existente. Tente Novamente" << endl;
					j = -1;
				}
			}
			
			
			
			
			
			system("cls");
			
				cout << "A poltrona da fileira " << linha <<" e coluna " << coluna << " foi selecionada." << endl << endl;	
			
			i = -1;
		}
		else if(escolha == 2)
		{
			
			system("cls");
			
			cout << " MAPA DE LUGARES" << endl ;
			cout << " . = Vazio" << endl;
			cout << " # = Ocupado" << endl << "------------------------------------------------------------------------------------------------------------------------"<< endl;
			for(l=0; l<=14; l++)
			{
				for(c=0; c<=39; c++)
				{
					
					if(lugares[l][c] == 0)
					{
						cout << " . ";
					}
					else
					{
						cout << " # ";
					}
				}
				cout << endl;
			} 
			cout << endl << "------------------------------------------------------------------------------------------------------------------------"<< endl << endl;
			i = -1;	
		}
		else if(escolha == 3)
		{
			system("cls");
			contpol = 0;
			valor = 0;
			for(l=0; l<=14; l++)
			{
				for(c=0; c<=39; c++)
				{
					if(lugares[l][c] == 1)
					{
						contpol = contpol + 1;
						if(l >= 0 && l <= 4)
						{
							valor = valor + 50,00;
						}
						else if(l >=5 && l <=9)
						{
							valor = valor + 30,00;
						}
						else if(l>=10 && l <= 14)
						{
							valor = valor + 15,00;
						}
					}
					
				}
			}
			
			cout << "Quantidade de lugares ocupados:    " << contpol << endl << endl;
			cout << "Valor da bilheteria: 		   R$" << valor << endl << endl;
			
			
			i = -1;
		}
		else
		{
			system("cls");
			cout << "Opcao nao existente" << endl << endl << endl;
			i = -1;
		}
			
	}

	
	
}
