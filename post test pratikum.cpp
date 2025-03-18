#include<Iostream>
#include<String>
using namespace std;

int main(){
	int goreng, bakar, c, d,total, hasil;
	double diskon = 0.1, harga_akhir;
	cout<<"kedai ayam kota X\n";
	cout<<"ayam goreng RP17.000\n";
	cout<<"ayam bakar RP21.000\n";
	cout<<"(Diskon 10% jika jumlah pemanyaran R45.000)\n";
	cout<<"ayam goreng pesan berapa? ";
	cin >> goreng;
	cout<<"ayam bakar pesan berapa? ";
	cin >> bakar;
	c = goreng * 17000;
	d = bakar * 21000 ;
    hasil = c + d;
    cout << goreng << "X RP.17.000 =RP."<<c<< endl;
    cout << bakar <<"X RP.21.000 = RP."<< d<< endl;
    if (hasil >= 45000) {
        harga_akhir = hasil - (hasil * diskon);
    } else {
        harga_akhir = hasil;
    }

    cout << "Total harga sebelum diskon: Rp" << hasil << endl;
    cout << "Total harga setelah diskon: Rp" << harga_akhir << endl;

    return 0;
}
