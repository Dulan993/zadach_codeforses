#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int k, s, m; //рулон
    int h, a; //стена
    cin >> a >> h;
    cin >> k >> m >> s;
    int kol_polos = ceil(a*1.0 / m);
    int lishn_kusok = 0;
    lishn_kusok = h % k;
    int neobhod_dlina = kol_polos * (h + lishn_kusok) - lishn_kusok;
    cout << ceil((neobhod_dlina * 1.0)/s) << endl;
    cout << "len sten=" <<  a << "    " << "shir rulona=" << m << endl;
    cout << kol_polos;
} 
