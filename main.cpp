#include <iostream>
using namespace std;
// Se quiere encontrar el factorial del número x que ingrese el usuario
int main() {
    int x,y;
    cout<<"Ingrese el numero que desea factorar";
    cin>>x;
    y=x-1;
    for(y=y;y>1;y--)
    {
        x=x*y;
    }
    cout<<"La sumatoria de los numeros son: "<<x<<endl;
    return 0;
}