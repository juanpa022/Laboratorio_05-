#include <iostream>
#include <iomanip> //manipuladores paramétricos
using namespace std;
int x, y;
int MCD(int N1, int N2) 
{
    
    int s_a = 1, s_b = 0,t_a = 0, t_b = 1;
    while (N2 > 0) 
    {
        int C = N1 / N2;
        //cociente
        int R = N1 - C * N2;
        //residuo
        N1 = N2;
        N2 = R;
        x = s_a -C * s_b;
        s_a = s_b;
        s_b = x;
        y = t_a - C * t_b;
        t_a = t_b;
        t_b = y;
    }

    x = s_a;
    y = t_a;

    
    return N1;
}
int main() 
{
    int N_1, N_2;
    cout << "Primer valor: "; 
    cin >> N_1;
    cout << "Segundo valor: "; 
    cin >> N_2;

    int RPTA = MCD(N_1, N_2);
    //manipuladores paramétricos (setw)
    
    if (MCD(N_1,N_2)!=1){
    cout<<"No existe la inversa multiplicativa entre estos números \n";
  }
  else{
    cout << " X=> " << x << "\n";
    cout << "MCD = ("<<setw(5) << N_1 << " , "<<setw(5) << N_2 << " ) == " << RPTA << "\n";
    cout<<"la inversa multiplicativa de "<<N_1<<" modulo "<<N_2<<" es: "<< x ;
  }   
}