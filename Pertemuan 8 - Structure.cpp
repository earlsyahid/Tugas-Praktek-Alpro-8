#include <iostream>
using namespace std;

struct tanggal {
    int hari, bulan, tahun;
};

string Horoscope(int hari, int bulan) {
        if ((bulan==3 && hari>=21)||(bulan==4 && hari<=19)){
            return "Aries";
    } else if ((bulan==4 && hari>=20)||(bulan==5 && hari<=20)){
            return "Taurus";
    } else if ((bulan==5 && hari>=21)||(bulan==6 && hari<=20)){
            return "Gemini";
    } else if ((bulan==6 && hari>=21)||(bulan==7 && hari<=22)){
            return "Cancer";
    } else if ((bulan==7 && hari>=23)||(bulan==8 && hari<=22)){
            return "Leo";
    } else if ((bulan==8 && hari>=23)||(bulan==9 && hari<=21)){
            return "Virgo";
    } else if ((bulan==9 && hari>=23)||(bulan==10 && hari<=21)){
            return "Libra";
    } else if ((bulan==10 && hari>=23)||(bulan==11 && hari<=21)){
            return "Scorpio";
    } else if ((bulan==11 && hari>=22)||(bulan==12 && hari<=21)){
            return "Sagitarius";
    } else if ((bulan==12 && hari>=22)||(bulan==1 && hari<=19)){
            return "Capricorn";
    } else if ((bulan==1 && hari>=20)||(bulan==2 && hari<=18)){
            return "Aquarius";
    } else if ((bulan==2 && hari>=19)||(bulan==3 && hari<=20)){
            return "Pisces";
    } else {
            return "Tanggal tidak valid";
    }
}

int main(){

    tanggal tgl;
    cout<<"\nProgram Untuk Mengetahui Zodiak\n";
    cout<<"---------------------------------\n";
    cout<<"Nama  : Syahid Ahmad Yasin\n";
    cout<<"Kelas : 1B Informatika\n";
    cout<<"---------------------------------\n";
    cout<<"Masukkan tanggal (contoh: 1):";
    cin>>tgl.hari;
    cout<<"Masukkan bulan (contoh: 12):";
    cin>>tgl.bulan;
    cout<<"Masukkan tahun (contoh: 2006):";
    cin>>tgl.tahun;

    string Zodiak= Horoscope(tgl.hari, tgl.bulan);
    cout<<"\nTanggal Lahir anda [tgl-bln-tahun]: "<<tgl.hari<<"-"<<tgl.bulan<<"-"<<tgl.tahun<<endl;
    cout<<"Zodiak anda adalah: "<<Zodiak<<endl;

    return 0;
}
