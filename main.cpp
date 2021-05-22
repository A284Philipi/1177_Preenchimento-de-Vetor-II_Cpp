#include <iostream>

using namespace std;

int main()
{
    int n, cont = 0, i = 0;
    cin >> n;
    while (cont < 1000){
        cout << "N[" << cont << "] = " << i <<endl;
        if (i == n - 1){
            i = 0;
        }else{
            i++;
        }
        cont++;
    }
    return 0;
}
