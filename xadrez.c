#include <stdio.h>
#include <stdio.h>
#include <math.h>
#define Tam 8 
void InicializarTabuleiro(char tab[Tam] [Tam]) { for (int i = 0; i < Tam; i++){
{for (int j = 0; j < Tam; j++) {
tab[i][j] ='.';
}
}
tab[7][0] = 'T'; tab[7][7] = 'T'; 
tab[7][1] = 'c'; tab[7][6] = 'C';
tab[7][2] = 'B'; tab[7][5] = 'B';
tab[7][3] = 'R'; 
tab[7][4] = 'K'; 

    for (int j = 0; j < Tam; j++) {
    tab[6][j] = 'P';
    }
    }
void mostrarTabuleiro(char tab [Tam][Tam]);
 printf("\n 0 1 2 3 4 5 6 7\n");
for (int i = 0; i < Tam; i++) {
printf("%d ", i);
for (int j = 0; j < Tam; j++) {
 printf("%c", tab[1][j]);
} 
printf("\n");
}
printf("\n");
}
int movimentoPeao(int li,int ci,int lf,int cf) {
if (ci == cf  && lf == li -1)
 return 1;
 return 0;
} 
 int movimentoTorre(int li, int ci, int lf, int cf) {
 if (li == lf  || ci == cf)
 return 1;
return 0;
 }
 int movimentoBispo(int li, int ci, int lf,int cf) { 
 if (abs(li - lf) == abs(ci - cf)) 
 return 1;
return 0;
 }
 int movimentoCavalo(int li,int ci,int lf,int cf){
int dl = abs(li - lf);
 int dc = abs(ci - cf);
 if ((dl== 2 && dc == 1) || (dl == 1 && dc == 2))
 return 1;
return 0;
 }
 int movimentoRainha(int li,int ci, int lf, int cf) { 
 if (movimentoTorre(li,ci,lf,cf) ||
 movimentoBispo(li,ci,lf,cf))
return 1;
return 0;
 }
int movimentoRei(int li,int ci,int lf,int cf) {
 if (abs(li - lf) <= 1 && abs(ci - cf) <=1)
 return 1;
return 0;
 }
 int main() {
 int li, ci, lf, cf; char peca;