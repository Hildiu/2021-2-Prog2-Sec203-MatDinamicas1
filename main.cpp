#include <iostream>
#include <iomanip>
using namespace std;


void imprimir( int * *pM, int nf, int nc );

int main()
{
  int nfilas, ncol;
  int  * *pMatriz= nullptr;

  srand(time(nullptr));
  cout << "Numero de filas: ";
  cin >> nfilas;
  cout << "Numero de columnas :";
  cin >> ncol;

  //--- Dimensionamos la matriz
  pMatriz = new  int*[nfilas];
  for(int f=0; f<nfilas; f++)
    pMatriz[f] = new int[ncol];

  //---Lleno con valores aleatorios
  for(int f=0; f<nfilas; f++)
    for(int c=0; c<ncol; c++)
      pMatriz[f][c]= rand()%100;

  imprimir(pMatriz, nfilas, ncol);

  return 0;
}


void imprimir( int * *pM, int nf, int nc )
{
  cout <<"\n";
  for(int f=0; f<nf; f++)
  {
    for(int c=0; c<nc; c++)
      cout << setw(5) << pM[f][c];
    cout <<"\n";
  }


}