#include <iostream>
 
using namespace std;

  string jamFilmnya, namaFilmnya, nama_hidangan, jenis_tiket, pelanggan, jadwalnya, nama_kasir, jamnya, nama_filmnya, nama_jenis_tiket_bioskopnya;
  char status1, status2, status3;
  int tempat_duduk, jumlah_hidangannya, harga_tiket, studio, no_film, nomor_jenis_tiket_bioskopnya, jumlah_tiketnya, nomor_tiketnya, total_harga_tiketnya, total_harga_hidangannya;
  int* pointerDuduk;  

  string filmnya[6][2] = {
                           {"Kucing Naik Haji", "11.00 WIB 22-12-2022"},
                           {"Kerbau ditabrak kereta", "12.30 WIB 22-12-2022"},
                           {"Kambing nyasar", "13.45 WIB 22-12-2022"},
                           {"Sapi Disembelih", "15.00 WIB 22-12-2022"}, 
                           {"Kuda Naik Motor", "18.30 WIB 22-12-2022"}, 
                           {"Unta Pergi Haji", "21.00 WIB 22-12-2022"}
                           };

  struct data_tiketnya
    {
        string tiketnya[3] = {"VELVET", "VIP", "VVIP"};
        int harga_tiketnya[3] = {45000, 60000, 100000};

    };

    void menu_film(){
        cout<<"------------------------------------------------------------\n";
        cout<<"|NO|            NAMA FILM              |        JAM        |\n";
        cout<<"------------------------------------------------------------\n";
        cout<<"|1.|   Kucing Naik Haji                |      11.00 WIB    |\n";
        cout<<"|2.|   Kerbau ditabrak kereta          |      12.30 WIB    |\n";
        cout<<"|3.|   Kambing nyasar                  |      13.45 WIB    |\n";
        cout<<"|4.|   Sapi Disembelih                 |      15.00 WIB    |\n";
        cout<<"|5.|   Kuda Naik Motor                 |      18.30 WIB    |\n";
        cout<<"|6.|   Unta Pergi Haji                 |      21.00 WIB    |\n";
        cout<<"------------------------------------------------------------\n";
    }

    void menu_tiket(){
        cout<<"------------------------------------------------------------\n";
        cout<<"|NO|         JENIS BIOSKOP             |       HARGA       |\n";
        cout<<"------------------------------------------------------------\n";
        cout<<"|1.| VELVET                            |        45.000     |\n";
        cout<<"|2.| VIP                               |        60.000     |\n";
        cout<<"|3.| VVIP                              |       100.000     |\n";
        cout<<"------------------------------------------------------------\n";
    }

    void menu_hidangan(){
        cout<<"--------------------------------------------------------------------------------------------\n";
        cout<<"|NO|            JENIS HIDANGAN            |    UKURAN   |       REQUEST       |   HARGA    |\n";
        cout<<"--------------------------------------------------------------------------------------------\n";
        cout<<"|1.|POP CORN                              |    M/L/XL   |  ORI/CARAMEL/CHOCO  |M : 10.0000 |\n";
        cout<<"|  |                                                                          |L : 20.0000 |\n";
        cout<<"|  |                                                                          |XL: 30.0000 |\n";
        cout<<"--------------------------------------------------------------------------------------------\n";
        cout<<"|2.|HAMBURGER                             |    L/XL     |                     |L : 20.0000 |\n";
        cout<<"|  |                                                                          |XL: 30.0000 |\n";
        cout<<"--------------------------------------------------------------------------------------------\n";
        cout<<"|3.|SWEET TEA                             |    M/L/XL   |        HOT/ICE      |M : 5.000   |\n";
        cout<<"|  |                                                                          |L : 10.0000 |\n";
        cout<<"|  |                                                                          |XL: 15.0000 |\n";
        cout<<"--------------------------------------------------------------------------------------------\n";
        cout<<"|4.|COFFE                                 |             |        HOT/ICE      |    10.000  |\n";
        cout<<"--------------------------------------------------------------------------------------------\n";
        cout<<"|5.|GREEN TEA                             |    M/L/XL   |        HOT/ICE      |M : 8.000   |\n";
        cout<<"|  |                                                                          |L : 17.0000 |\n";
        cout<<"|  |                                                                          |XL: 25.0000 |\n";
        cout<<"--------------------------------------------------------------------------------------------\n";
        cout<<"|6.|PIZZA                                 |    L/XL     |                     |L : 15.000  |\n";
        cout<<"|  |                                                                          |XL: 30.0000 |\n";
        cout<<"--------------------------------------------------------------------------------------------\n";
        cout<<"|7.|FRENCH FRIES                          |    M/L/XL   |                     |M : 10.000  |\n";
        cout<<"|  |                                                                          |L : 15.0000 |\n";
        cout<<"|  |                                                                          |XL: 20.000  |\n";
        cout<<"--------------------------------------------------------------------------------------------\n";
    }

    void hasil_tiket_bioskop(string namanya="0", string filmnya="0", string jamnya="0", int tempat_duduknya=0, string studionya="0", int harganya=0){
        cout<<"---------------------------------------------------------------------------------------\n";
        cout<<"|                UNSIKUY PREMIER                          |      UNSIKUY PREMIER      |\n";
        cout<<"---------------------------------------------------------------------------------------\n";
        cout<<"|Yt. "<<namanya<<"                                                                     \n";
        cout<<"|                 "<<filmnya<<"                                                       \n";
        cout<<"|                                                         |"<<filmnya<<"              \n";
        cout<<"|Jadwal Film    :  "<<jamnya<<"                                                       \n";
        cout<<"|                                                         |"<<jamnya<<"               \n";
        cout<<"|Tempat duduk   : "<<tempat_duduknya<<"  "<<studionya<<"                              \n";
        cout<<"|                                                         |"<<tempat_duduknya<<"      \n";
        cout<<"|                                                         |"<<studionya<<"            \n";
        cout<<"|Price          : "<<harganya<<"                                                      \n";
        cout<<"|                                                         |"<<harganya<<"             \n";
        cout<<"|Jenis Bioskop  : "<<studionya<<"                                                     \n";
        cout<<"---------------------------------------------------------------------------------------\n";
    }

    void header_tiket_hidangan(string jamnya="0"){
        cout<<"--------------------------------------------------------------------------------\n";
        cout<<"|                           UNSIKUY CAFE                                       |\n";
        cout<<"|                                                                              |\n";
        cout<<"|"<<jamnya<<"                                                                   \n";
        cout<<"--------------------------------------------------------------------------------\n";
        cout<<"|no|              jenis hidangan                |        harga                 |\n";
    }

    void isi_tiket_hidangan(int no=0, string jenis_hidangan="0", string ukuran_hidangannya="0", int harga_hidangannya=0, string request_hidangan="0"){
        int nomornya = no + 1;
        cout<<"|"<<nomornya<<" |"<<jenis_hidangan<<"  "<<ukuran_hidangannya<<"  "<<request_hidangan<<"                             "<<harga_hidangannya<<"  \n";
    }

    void footer_tiket_hidangan(int total_harganya=0){
        cout<<"-------------------------------------------------------------------------------\n";
        cout<<"|                                          TOTAL HARGA    :"<<total_harganya<<"\n";
        cout<<"-------------------------------------------------------------------------------\n";
        cout<<"|                           HATUR NUHUN HORASSSSS                             |\n";
        cout<<"-------------------------------------------------------------------------------\n";
    }

    


int main(){
    // cout<<"Nama Pelanggan: "; cin>>pelanggan;
    
    menu_film();

    cout<<"Masukkan Nomor Film yang ingin dipilih: "; cin>>no_film;
    if(no_film > 6 || no_film <= 0){
        cout<<"Error, Masukkan nomor film dengan benar";
        exit(0);
    } 
    int nomor_filmnya = no_film - 1;
    namaFilmnya = filmnya[nomor_filmnya][0]; //nama filmnya
    jamFilmnya = filmnya[nomor_filmnya][1]; //jam filmnya
    cout<<"Film yang dipilih "<<namaFilmnya<<" akan tayang pada pukul "<<jamFilmnya<<endl<<endl; //output nama filmnya
/*====================================================================================================================================*/
    data_tiketnya info_tiket;

    menu_tiket();

    cout<<"Masukkan Nomor Jenis bioskop yang ingin dipilih(1-3): "; cin>>nomor_jenis_tiket_bioskopnya;
    nomor_tiketnya = nomor_jenis_tiket_bioskopnya - 1;
    nama_jenis_tiket_bioskopnya = info_tiket.tiketnya[nomor_tiketnya];
    harga_tiket = info_tiket.harga_tiketnya[nomor_tiketnya];
    cout<<"Masukkan Jumlah tiket bioskop yang ingin dipesan: "; cin>>jumlah_tiketnya;
    for(int i=1; i<=jumlah_tiketnya; i++){
        cout<<"Nama Pelanggan: "; cin>>pelanggan;
        cout<<"Nomor Tempat Duduk(1-54)  : "; cin>>tempat_duduk;
        pointerDuduk = &tempat_duduk;
        cout<<"Apakah ingin merubah nomor Tempat Duduk?(Y/N) "; cin>>status3;
        if(status3 == 'Y' || status3 == 'y'){
            cout<<"Masukkan nomor tempat duduk baru(1-54)  : "; cin>>tempat_duduk;
            *pointerDuduk = tempat_duduk;
            tempat_duduk = tempat_duduk;
        } else {
            tempat_duduk = tempat_duduk;
        }

        hasil_tiket_bioskop(pelanggan, namaFilmnya, jamFilmnya, tempat_duduk, nama_jenis_tiket_bioskopnya, harga_tiket);
    }
    nomor_tiketnya = nomor_jenis_tiket_bioskopnya - 1;
    nama_jenis_tiket_bioskopnya = info_tiket.tiketnya[nomor_tiketnya];
/*====================================================================================================================================*/

    cout<<"Apakah ingin memesan makanan atau minuman?: (Y/N) "; cin>>status1;
    if (status1 == 'Y' || status1 == 'y'){

        menu_hidangan();
    
    cout<<"Jumlah hidangan yang ingin dipesan: "; cin>>jumlah_hidangannya;
    string ukuran_hidangannya[jumlah_hidangannya], jenis_hidangan[jumlah_hidangannya], request_hidangan[jumlah_hidangannya];
    int hidangannya[jumlah_hidangannya], harga_hidangannya[jumlah_hidangannya];
    for(int i=0;i<jumlah_hidangannya;i++){
        cout<<"Masukkan nomor jenis hidangan yang anda inginkan: "; cin>>hidangannya[i];
        if(hidangannya[i]!= 4){
        cout<<"Masukkan ukuran jenis hidangan yang anda inginkan: "; cin>>ukuran_hidangannya[i];
        }
        if(hidangannya[i]!= 2 || hidangannya[i]!= 6 || hidangannya[i]!= 7){
        cout<<"Masukkan request hidangan yang anda inginkan: "; cin>>request_hidangan[i];
        }
        switch (hidangannya[i])
        {
            case 1:
            jenis_hidangan[i]= "POP CORN";
            if (ukuran_hidangannya[i] == "M" || ukuran_hidangannya[i] == "m"){
                    harga_hidangannya[i]= 10000;
            } else if (ukuran_hidangannya[i] == "L" || ukuran_hidangannya[i] == "l"){
                    harga_hidangannya[i]= 20000;
            } else if (ukuran_hidangannya[i] == "XL" || ukuran_hidangannya[i] == "xl"){
                    harga_hidangannya[i]= 30000;
            } else {
                    cout<<"Error, Masukkan ukuran hidangan dengan benar";
                    exit(0);
            }
            break;
        case 2:
            jenis_hidangan[i]= "HAMBURGER";
            if (ukuran_hidangannya[i] == "L" || ukuran_hidangannya[i] == "l"){
                    harga_hidangannya[i]= 20000;
            } else if (ukuran_hidangannya[i] == "XL" || ukuran_hidangannya[i] == "xl"){
                    harga_hidangannya[i]= 30000;
            } else {
                    cout<<"Error, Masukkan ukuran hidangan dengan benar";
                    exit(0);
            }
            break;
        case 3:
            jenis_hidangan[i]= "SWEET TEA";
            if (ukuran_hidangannya[i] == "M" || ukuran_hidangannya[i] == "m"){
                    harga_hidangannya[i]= 5000;
            } else if (ukuran_hidangannya[i] == "L" || ukuran_hidangannya[i] == "l"){
                    harga_hidangannya[i]= 10000;
            } else if (ukuran_hidangannya[i] == "XL" || ukuran_hidangannya[i] == "xl"){
                    harga_hidangannya[i]= 15000;
            } else {
                    cout<<"Error, Masukkan ukuran hidangan dengan benar";
                    exit(0);
            }
            break;
        case 4:
            jenis_hidangan[i]= "COFFE";
            ukuran_hidangannya[i]= "-";
            harga_hidangannya[i]= 10000;
            break;
        case 5:
            jenis_hidangan[i]= "GREEN TEA";
            if (ukuran_hidangannya[i] == "M" || ukuran_hidangannya[i] == "m"){
                    harga_hidangannya[i]= 8000;
            } else if (ukuran_hidangannya[i] == "L" || ukuran_hidangannya[i] == "l"){
                    harga_hidangannya[i]= 17000;
            } else if (ukuran_hidangannya[i] == "XL" || ukuran_hidangannya[i] == "xl"){
                    harga_hidangannya[i]= 25000;
            } else {
                    cout<<"Error, Masukkan ukuran hidangan dengan benar";
                    exit(0);
            }
            break;
        case 6:
            jenis_hidangan[i]= "PIZZA";
            if (ukuran_hidangannya[i] == "L" || ukuran_hidangannya[i] == "l"){
                    harga_hidangannya[i]= 15000;
            } else if (ukuran_hidangannya[i] == "XL" || ukuran_hidangannya[i] == "xl"){
                    harga_hidangannya[i]= 30000;
            } else {
                    cout<<"Error, Masukkan ukuran hidangan dengan benar";
                    exit(0);
            }
            break;
        case 7:
            jenis_hidangan[i]= "FRENCH FRIES";
            if (ukuran_hidangannya[i] == "M" || ukuran_hidangannya[i] == "m"){
                    harga_hidangannya[i]= 10000;
            } else if (ukuran_hidangannya[i] == "L" || ukuran_hidangannya[i] == "l"){
                    harga_hidangannya[i]= 15000;
            } else if (ukuran_hidangannya[i] == "XL" || ukuran_hidangannya[i] == "xl"){
                    harga_hidangannya[i]= 20000;
            } else {
                    cout<<"Error, Masukkan ukuran hidangan dengan benar";
                    exit(0);
            }
            break;
        
        default:
        exit(0);
            break;
        }

        total_harga_hidangannya = total_harga_hidangannya + harga_hidangannya[i];
}
        header_tiket_hidangan(jamFilmnya);
        for(int i=0;i<jumlah_hidangannya;i++){
            
        isi_tiket_hidangan(i, jenis_hidangan[i], ukuran_hidangannya[i], harga_hidangannya[i], request_hidangan[i]);
        }
        footer_tiket_hidangan(total_harga_hidangannya);


} else {
    cout<<"Tiket tanpa hidangan tambahan, Terima Kasih";
}
    return 0;
}