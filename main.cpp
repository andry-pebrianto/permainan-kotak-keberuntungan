#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    string nama;
    char mulai;
    int a=1, b=1, c=1, d=1, e=1, f=1, nilai1, nilai2, lawan, nimax, skor1=0, skor2=0, lvl;

    cout<<" Didesain oleh 'Andry Pebrianto'";
    cout<<"\n -------------------------------\n\n";
    cout<<" Selamat Datang di Permainan Kotak Keberuntungan";
    cout<<"\n\n Masukkan Nama Anda.";
    cout<<"\n Nama: ";
    getline(cin,nama);

    cout<<"\n --------------------------------------------------------------------------------";
    cout<<"\n Halo "<<nama<<". Selamat Datang di Program Gaje ini.";
    cout<<"\n --------------------------------------------------------------------------------";

    cout<<"\n\n Tekan Enter untuk melanjutkan";
    cin.get();

    cout<<"\n -----------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n Pertama-tama, aku akan menjelaskan seputar permainan ini.\n Di permainan ini, keberuntungan adalah konsep utama dari kemenangan.\n Jika engkau merasa pesimis akan keberuntunganmu, jangan khawatir, menang kalah nggak bakal dapat apa-apa kok.";
    cout<<"\n Di permainan ini, kau akan mengambil sebuah kertas di dalam kotak keberuntungan.\n Di kertas yang kau ambil akan tertulis angka yang menjadi nilaimu. Jika nilai milikmu lebih besar dari nilai lawanmu, maka kau menang. Dan sebaliknya.";

    cout<<"\n\n Tekan Enter untuk melanjutkan";
    cin.get();

    cout<<"\n Untuk memulai permainan, pertama-tama, pilihlah";

    while(a==b)
    {
        cout<<" Tingkat kesulitan.\n 1.Biasa\n 2.Sulit\n 3.Pro\n Tekan 0 Untuk Keluar";
        cout<<"\n Pilihan: ";
        cin>>lvl;


        if(lvl==1)
        {
            c=1;

            cout<<"\n Berikut adalah daftar";

            while(c==d)
            {
                cout<<" Lawan yang tersedia di tingkat Biasa: ";
                cout<<"\n\n 1. Via.\n Gender: Perempuan.\n Usia: 11 tahun.\n Sifat: Lucu, periang, pantang menyerah.\n Kisah singkat: Via adalah gadis yang sangat periang dan pantang menyerah. Kau akan kesulitan menghadapi energi positifnya.";
                cout<<"\n\n 2. Candra.\n Gender: Laki-laki.\n Usia: 16 tahun.\n Sifat: Serius, cerdas, kritis.\n Kisah singkat: Candra adalah manusia yang selalu serius dalam segala hal.";
                cout<<"\n\n Tekan 0 untuk kembali.";
                cout<<"\n\n Pilihan: ";
                cin>>lawan;

                cout<<" -----------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                nilai1 = 0;
                nilai2 = 0;
                skor1 = 0;
                skor2 = 0;
                e = 1;

                if(lawan==1)
                {
                    cout<<"\n Jadi Kak "<<nama<<" nantang Via? Oke, Via terima tantangan Kakak.";
                    cout<<"\n Masukkan nilai maksimal yang Kak "<<nama<<" inginkan.";
                    cout<<"\n Nilai maksimal: ";
                    cin>>nimax;

                    while(e==f)
                    {
                        cout<<"\n Apakah Kakak ingin mulai mengambil kertas? (y untuk iya, k untuk kembali, dan s untuk melihat skor)";
                        cout<<"\n Jawaban: ";
                        cin>>mulai;

                        if(mulai=='y')
                        {
                            nilai1 = 1 + (rand() % nimax);
                            nilai2 = 1 + (rand() % nimax);

                            if(nilai1<nilai2)
                            {
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                                cout<<"\n Kertas yang Kak "<<nama<<" ambil adalah "<<nilai1<<", sedangkan Kertas yang Via ambil adalah "<<nilai2<<".\n Jadi yang menang adalah Via. Kakak payah.";
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                                skor2= skor2 + 1;
                            }

                            else if(nilai1>nilai2)
                            {
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                                cout<<"\n Kertas yang Kak "<<nama<<" ambil adalah "<<nilai1<<", sedangkan Kertas yang Via ambil adalah "<<nilai2<<".\n Jadi yang menang adalah Kakak. Kakak memang hebat.";
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                                skor1= skor1 + 1;
                            }

                            else if(nilai1==nilai2)
                            {
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                                cout<<"\n Kertas yang Kak "<<nama<<" ambil adalah "<<nilai1<<", sedangkan Kertas yang Via ambil adalah "<<nilai2<<".\n Jadi hasilnya seri. Kakak boleh juga.\n";
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                            }
                        }

                        else if(mulai=='k')
                        {
                            e=2;
                            cout<<endl<<endl;
                        }

                        else if(mulai=='Y')
                        {
                            cout<<"\n ---------------------------------------";
                            cout<<"\n Memasukkannya huruf kecil saja Kakak.";
                            cout<<"\n ---------------------------------------\n";
                        }

                        else if(mulai=='K')
                        {
                            cout<<"\n ---------------------------------------";
                            cout<<"\n Memasukkannya huruf kecil saja Kakak.";
                            cout<<"\n ---------------------------------------\n";
                        }

                        else if(mulai=='s')
                        {
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                            cout<<"\n Skor: \n\n";
                            cout<<" "<<nama<<": "<<skor1<<endl;
                            cout<<" Via: "<<skor2;
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                        }

                        else if(mulai=='S')
                        {
                            cout<<"\n ---------------------------------------";
                            cout<<"\n Memasukkannya huruf kecil saja Kakak.";
                            cout<<"\n ---------------------------------------\n";
                        }

                        else
                        {
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                            cout<<"\n Maaf Kak "<<nama<<", pilihan yang Kakak masukkan tidak dapat ditemukan.\n Tolong masukkan y untuk mengambil kertas, k untuk kembali, dan s untuk melihat skor.";
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                        }
                    }
                }

                else if(lawan==2)
                {
                    cout<<"\n Jadi Kau menantangku, ya? Baiklah, mari kita lihat seberapa hebat kau.";
                    cout<<"\n Masukkan nilai maksimal yang Kau inginkan.";
                    cout<<"\n Nilai maksimal: ";
                    cin>>nimax;

                    while(e==f)
                    {
                        cout<<"\n Apakah Kau ingin mulai mengambil kertas? (y untuk iya, k untuk kembali, dan s untuk melihat skor)";
                        cout<<"\n Jawaban: ";
                        cin>>mulai;

                        if(mulai=='y')
                        {
                            nilai1 = 1 + (rand() % nimax);
                            nilai2 = 1 + (rand() % nimax) + 0.2 * (rand() % nimax);

                            if(nilai1<nilai2)
                            {
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                                cout<<"\n Kertas yang kau ambil adalah "<<nilai1<<", sedangkan Kertas yang kuambil adalah "<<nilai2<<".\n Jadi yang menang adalah aku. Ternyata kau sangat payah.";
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                                skor2= skor2 + 1;
                            }

                            else if(nilai1>nilai2)
                            {
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                                cout<<"\n Kertas yang kau ambil adalah "<<nilai1<<", sedangkan Kertas yang kuambil adalah "<<nilai2<<".\n Jadi yang menang adalah Kau. Tidak kusangka aku akan kalah.";
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                                skor1= skor1 + 1;
                            }

                            else if(nilai1==nilai2)
                            {
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                                cout<<"\n Kertas yang kau ambil adalah "<<nilai1<<", sedangkan Kertas yang kuambil adalah "<<nilai2<<".\n Jadi hasilnya seri. Ternyata kau boleh juga.";
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                            }
                        }

                        else if(mulai=='k')
                        {
                            e=2;
                            cout<<endl<<endl;
                        }

                        else if(mulai=='Y')
                        {
                            cout<<"\n ---------------------------------------";
                            cout<<"\n Memasukkannya huruf kecil saja Bngst.";
                            cout<<"\n ---------------------------------------\n";
                        }

                        else if(mulai=='K')
                        {
                        cout<<"\n ---------------------------------------";
                        cout<<"\n Memasukkannya huruf kecil saja Bngst.";
                        cout<<"\n ---------------------------------------\n";
                        }

                        else if(mulai=='s')
                        {
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                            cout<<"\n Skor: \n\n";
                            cout<<" "<<nama<<": "<<skor1<<endl;
                            cout<<" Candra: "<<skor2;
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                        }

                        else if(mulai=='S')
                        {
                        cout<<"\n ---------------------------------------";
                        cout<<"\n Memasukkannya huruf kecil saja Bngst.";
                        cout<<"\n ---------------------------------------\n";
                        }

                        else
                        {
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                            cout<<"\n Hei "<<nama<<" gblk! Pilihan yang kau masukkan tidak dapat ditemukan.\n Masukkan y untuk mengambil kertas dan k untuk kembali, jangan yang lain gblk!";
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                        }
                    }
                }

                else if(lawan==0)
                {
                    c=2;
                    cout<<endl<<endl;
                }
            }
        }



        if(lvl==2)
        {

            c = 1;

            while(c==d)
            {
                cout<<"\n Berikut adalah daftar Lawan yang tersedia di tingkat Sulit: ";
                cout<<"\n\n 1. Adi.\n Gender: Laki-laki.\n Usia: 16 tahun.\n Sifat: Santai, tidak terburu-buru dalam mengambil keputusan.\n Kisah singkat: Adi selalu melakukan apapun dengan kepala dingin, bahkan di saat yang kritis.";
                cout<<"\n\n Tekan 0 untuk kembali.";
                cout<<"\n\n Pilihan: ";
                cin>>lawan;

                cout<<" -----------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                nilai1 = 0;
                nilai2 = 0;
                skor1 = 0;
                skor2 = 0;
                e = 1;

                if(lawan==1)
                {
                    cout<<"\n Kau menantang diriku? Baiklah, persiapkanlah dirimu.";
                    cout<<"\n Masukkan nilai maksimal yang Dirimu inginkan.";
                    cout<<"\n Nilai maksimal: ";
                    cin>>nimax;

                    while(e==f)
                    {

                        cout<<"\n Apakah Dirimu ingin mulai mengambil kertas? (y untuk iya, k untuk keluar, dan s untuk melihat skor)";
                        cout<<"\n Jawaban: ";
                        cin>>mulai;

                        if(mulai=='y')
                        {
                            nilai1 = 1 + (rand() % nimax);
                            nilai2 = 1 + (rand() % nimax) + 0.6 * (rand() % nimax);

                            if(nilai1<nilai2)
                            {
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                                cout<<"\n Kertas yang Dirimu ambil adalah "<< nilai1<<", sedangkan Kertas yang Diriku ambil adalah "<< nilai2<<".\n Karena itu yang menang adalah Aku. Hahaha";
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                                skor2= skor2+ 1;
                            }

                            else if(nilai1>nilai2)
                            {
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                                cout<<"\n Kertas yang Dirimu ambil adalah "<< nilai1<<", sedangkan Kertas yang Diriku ambil adalah "<< nilai2<<".\n Karena itu yang menang adalah Kau. Sialan.";
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                                skor1= skor1 + 1;
                            }

                            else if(nilai1==nilai2)
                            {
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                                cout<<"\n Kertas yang Dirimu "<<nama<<" ambil adalah "<<nilai1<<", sedangkan Kertas yang Diriku ambil adalah "<<nilai2<<".\n Jadi hasilnya seri. Boleh juga kau.\n";
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                            }
                        }

                        else if(mulai=='k')
                        {
                            e=2;
                            cout<<endl<<endl;
                        }

                        else if(mulai=='Y')
                        {
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                            cout<<"\n Memasukkannya huruf kecil saja Euy.";
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                        }

                        else if(mulai=='K')
                        {
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                            cout<<"\n Memasukkannya huruf kecil saja Euy.";
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                        }

                        else if(mulai=='s')
                        {
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                            cout<<"\n Skor: \n\n";
                            cout<<" "<<nama<<": "<<skor1<<endl;
                            cout<<" Adi: "<<skor2;
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                        }

                        else if(mulai=='S')
                        {
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                            cout<<"\n Memasukkannya huruf kecil saja Euy.";
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                        }


                        else
                        {
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                            cout<<"\n Maaf Euy, pilihan yang Dirimu masukkan tidak dapat ditemukan.\n Tolong masukkan y untuk mengambil kertas dan k untuk keluar, lalu s untuk melihat skor.";
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                        }
                    }
                }

                else if(lawan==0)
                {
                    c=2;
                    cout<<endl<<endl;
                }
            }
        }

        if(lvl==3)
        {

            c = 1;

            while(c==d)
            {
                cout<<"\n Berikut adalah daftar Lawan yang tersedia di tingkat Sulit: ";
                cout<<"\n\n 1. Adolf Hitler.\n Gender: Laki-laki.\n Usia: Udah Mokad.\n Sifat: Menyayangi rakyatnya, tapi benci terhadap Yahudi.\n Kisah singkat: Kisah pembunuhan yang dilakukan oleh Hitler sangatlah kelam.";
                cout<<"\n\n Tekan 0 untuk kembali.";
                cout<<"\n\n Pilihan: ";
                cin>>lawan;

                cout<<" -----------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                nilai1 = 0;
                nilai2 = 0;
                skor1 = 0;
                skor2 = 0;
                e = 1;


                if(lawan==1)
                {
                    cout<<"\n Kau siapa bocah? Kau ingin melawanku?";
                    cout<<"\n Masukkan nilai maksimal yang kau inginkan.";
                    cout<<"\n Nilai maksimal: ";
                    cin>>nimax;

                    while(e==f)
                    {

                        cout<<"\n Apakah Kau ingin mulai mengambil kertas? (y untuk iya, k untuk keluar, dan s untuk melihat skor)";
                        cout<<"\n Jawaban: ";
                        cin>>mulai;

                        if(mulai=='y')
                        {
                            nilai1 = 1 + (rand() % nimax);
                            nilai2 = 1 + (rand() % nimax) + (rand() % nimax);

                            if(nilai1<nilai2)
                            {
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                                cout<<"\n Kertas yang Kau ambil adalah "<< nilai1<<", sedangkan Kertas yang Kuambil adalah "<< nilai2<<".\n Karena itu yang menang adalah Aku. Tidak buruk.";
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                                skor2= skor2+ 1;
                            }

                            else if(nilai1>nilai2)
                            {
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                                cout<<"\n Kertas yang Kau ambil adalah "<< nilai1<<", sedangkan Kertas Kuambil adalah "<< nilai2<<".\n Karena itu yang menang adalah Kau. Kau hebat.";
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                                skor1= skor1 + 1;
                            }

                            else if(nilai1==nilai2)
                            {
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                                cout<<"\n Kertas yang Kau "<<nama<<" ambil adalah "<<nilai1<<", sedangkan Kertas Kuambil adalah "<<nilai2<<".\n Jadi hasilnya seri. Lumayan juga.\n";
                                cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                            }
                        }

                        else if(mulai=='k')
                        {
                            e=2;
                            cout<<endl<<endl;
                        }

                        else if(mulai=='Y')
                        {
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                            cout<<"\n Memasukkannya huruf kecil saja.";
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                        }

                        else if(mulai=='K')
                        {
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                            cout<<"\n Memasukkannya huruf kecil saja.";
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                        }

                        else if(mulai=='s')
                        {
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                            cout<<"\n Skor: \n\n";
                            cout<<" "<<nama<<": "<<skor1<<endl;
                            cout<<" Hitler: "<<skor2;
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                        }

                        else if(mulai=='S')
                        {
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                            cout<<"\n Memasukkannya huruf kecil saja.";
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                        }


                        else
                        {
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------";
                            cout<<"\n Maaf, pilihan yang Kau masukkan tadi tidak dapat ditemukan.\n Tolong masukkan y untuk mengambil kertas dan k untuk keluar, lalu s untuk melihat skor.";
                            cout<<"\n --------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                        }
                    }
                }

                else if(lawan==0)
                {
                    c=2;
                    cout<<endl<<endl;
                }
            }
        }

        else if(lvl==0)
        {
            a=2;
        }
    }

    cout<<"\n\n ========================================================";
    cout<<"\n Terima Kasih karena sudah bermain, selamat beraktivitas.";
    cout<<"\n ========================================================";

    cin.get();
    cin.get();
    return 0;
}
