#include <iostream>
#include <ctime>

using namespace std;

void insercao(int A[], int n)
{
	for(int j=2; j<n;j++){               
    int chave = A[j];                     
    int i = j - 1;                        
    while(i >= 1 && A[i] > chave){    
       A[i+1] = A[i];                 
       i = i - 1;
     }                     
    A[i+1] = chave;  
}
}

int main()
{
   int n = 100000, A[n];
   // for (int i = 0; i < n; i++) A[i] = i + 1; // CRESCENTE
   for (int i = 0; i < n; i++) A[i] = n - i; // DECRESCENTE

   clock_t begin = clock();
   insercao(A, n);
   clock_t end = clock();
   cout << double(end - begin) / CLOCKS_PER_SEC << " segundos" << endl;
}