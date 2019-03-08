#include <iostream>
#include <ctime>

using namespace std;
//PERMUTACAO
void troca(char *x, char *y)
{  
   char t = *x; *x = *y; *y = t; 
}

void permuta(char *s, int ini, int fim)
{
   if (ini == fim) 
   	cout << s << endl;
   else
      for (int i = ini; i <= fim; i++) {
         troca(&s[ini], &s[i]);
         permuta(s, ini+1, fim);
         troca(&s[ini], &s[i]);
         
      }
      // cont++;
}
//TROCA
void imprime_bits(int b[], int n)
{
   for (int i = 0; i < n; i++) cout << b[i];
   cout << endl;
}

void seq_bits(int n)
{
	// int count = 0;
   int b[n], i;
   for (i = 0; i < n; i++) b[i] = 0;
   while (1) {
      // count++;
      // cout << count << endl;
      for (i = n-1; (i >= 0) && (b[i] == 1); i--) b[i] = 0;
      if (i < 0) break;
      b[i] = 1;
   }
}

int main() {
   clock_t begin = clock();

   char s[] = "ABCDEFGHIJK";
   permuta(s, 0, strlen(s)-1);
   // seq_bits(36);

   clock_t end = clock();
   cout << double(end - begin) / CLOCKS_PER_SEC << " segundos" << endl;
}
