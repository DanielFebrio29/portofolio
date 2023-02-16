#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()

{
    system("cls");
    int choice;
    printf("================\n");
    printf("Tugas Kalkulator\n");
    printf("================\n");
    printf("1. PingPoroLanSudo\n");
    printf("2. SinCosTan\n");
    printf("3. Hitung Keliling dan Luas\n");
    printf("4. Hitung Akar Kuadrat\n");
    printf("5. Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            system("cls");
            kalkulator();
            break;
        case 2:
            system("cls");
            SinCosTan();
            break;
        case 3:
            system("cls");
            hitung_keliling();
            break;
        case 4:
            system("cls");
            hitung_akar();
            break;
        case 5:
            exit(0);
        default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                main();
    }
}
                                        //PingPoroLanSudo
void kalkulator(){
    system("cls");
    int p;
    printf("================\n");
    printf("Ping Poro Lan Sudo\n");
    printf("================\n");
    printf("1. Perkalian\n");
    printf("2. Pembagian\n");
    printf("3. Penjumlahan\n");
    printf("4. Pengurangan\n");
    printf("5. Return Menu Utama\n");
    scanf("%d", &p);


    switch(p){
        case 1:
            system("cls");
            Perkalian();
            break;
        case 2:
            system("cls");
            Pembagian();
            break;
        case 3:
            system("cls");
            Penjumlahan();
            break;
        case 4:
            system("cls");
            Pengurangan();
            break;
        case 5:
            system("cls");
            main();
            break;
        default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                kalkulator();
    }
}
void Perkalian(){
                float a,b,c;
                start:
                printf("Masukkan angka pertama = ");
                scanf("%f",&a);
                printf("Masukkan angka kedua = ");
                scanf("%f",&b);
                c=a*b;
                printf("Hasil dari %.2f * %.2f adalah = %.2f\n",a,b,c);
                printf("Press any key to continue . . .");
                getch();
                loop_perkalian();
}
void loop_perkalian(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang Perkalian? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                Perkalian();                                                 //loop
                break;
            case 0:
                system("cls");
                kalkulator();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_perkalian();
            }
}

void Pembagian(){
                float a,b,c;
                printf("Masukkan angka pertama = ");
                scanf("%f",&a);
                printf("Masukkan angka kedua = ");
                scanf("%f",&b);
                c=a/b;
                printf("Hasil dari %.2f * %.2f adalah = %.2f\n",a,b,c);
                printf("Press any key to continue . . .");
                getch();
                loop_pembagian();

}

void loop_pembagian(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang pembagian? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                Pembagian();                                                 //loop_pembagian
                break;
            case 0:
                system("cls");
                kalkulator();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_pembagian();
            }
}
void Penjumlahan(){
                float a,b,c;
                printf("Masukkan angka pertama = ");
                scanf("%f",&a);
                printf("Masukkan angka kedua = ");
                scanf("%f",&b);
                c=a+b;
                printf("Hasil dari %.2f * %.2f adalah = %.2f",a,b,c);
                printf("Hasil dari %.2f * %.2f adalah = %.2f\n",a,b,c);
                printf("Press any key to continue . . .");
                getch();
                loop_penjumlahan();
}

void loop_penjumlahan(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang penjumlahan? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                Penjumlahan();                                                 //loop_penjumlahan
                break;
            case 0:
                system("cls");
                kalkulator();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_penjumlahan();
            }
}

void Pengurangan(){
                float a,b,c;
                printf("Masukkan angka pertama = ");
                scanf("%f",&a);
                printf("Masukkan angka kedua = ");
                scanf("%f",&b);
                c=a-b;
                printf("Hasil dari %.2f * %.2f adalah = %.2f\n",a,b,c);
                printf("Press any key to continue . . .");
                getch();
                loop_pengurangan();
}
void loop_pengurangan(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang pengurangan? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                Pengurangan();                                                 //loop_pengurangan
                break;
            case 0:
                system("cls");
                kalkulator();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_penjumlahan();
            }
}




                                                //SinCosTan







void SinCosTan(){
    system("cls");
    int p;
    printf("====================\n");
    printf("Keliling Luas Volume\n");
    printf("====================\n");
    printf("1. Sinus\n");
    printf("2. Cosinus\n");
    printf("3. Tangen\n");
    printf("4. Return Menu Utama\n");
    scanf("%d", &p);
    switch(p){
        case 1:
            system("cls");
            sinus();
            break;
        case 2:
            system("cls");
            cosinus();
            break;
        case 3:
            system("cls");
            tangen();
            break;
        case 4:
            system("cls");
            main();
            break;
        default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                SinCosTan();
    }
}
void sinus(){
                double derajat,radian,sct;
                printf("Masukkan derajat Sinus : ");
                scanf("%lf",&derajat);
                radian = derajat * M_PI / 180.0;
                sct = sin(radian);
                printf("Hasil Sinus adalah = %.2lf\n", sct);
                printf("Press any key to continue . . .");
                getch();
                loop_sinus();
}
void loop_sinus(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang sinus? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                sinus();                                                 //loop_sinus
                break;
            case 0:
                system("cls");
                SinCosTan();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_sinus();
            }
}
void cosinus(){
                double derajat,radian,sct;
                printf("Masukkan derajat Cosinus : ");
                scanf("%lf",&derajat);
                radian = derajat * M_PI / 180.0;
                sct = cos(radian);
                printf("Hasil Cosinus adalah = %.2lf\n", sct);
                printf("Press any key to continue . . .");
                getch();
                loop_cosinus();
}
void loop_cosinus(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang cosinus? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                cosinus();                                                 //loop_cosinus
                break;
            case 0:
                system("cls");
                SinCosTan();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_cosinus();
            }
}
void tangen(){
                double derajat,radian,sct;
                printf("Masukkan derajat Tangen : ");
                scanf("%lf",&derajat);
                radian = derajat * M_PI / 180.0;
                sct = tan(radian);
                printf("Hasil Tangen adalah = %.2lf\n", sct);
                printf("Press any key to continue . . .");
                getch();
                loop_tangen();
}
void loop_tangen(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang tangen? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                tangen();                                                 //loop_tangen
                break;
            case 0:
                system("cls");
                SinCosTan();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_tangen();
            }
}







                            //Hitung Keliling dan Luas







void hitung_keliling()
{
    system("cls");
    int p;
    printf("==================\n");
    printf("Hitung Keliling\n");
    printf("==================\n");
    printf("1. Hitung Keliling Bangun Datar\n");
    printf("2. Hitung Luas Bangun Datar\n");
    printf("3. Hitung Volume Bangun Ruang\n");
    printf("4. Return Menu Utama\n");
    scanf("%d", &p);
    switch(p){
    case 1:
        system("cls");
        keliling_datar();
        break;
    case 2:
        system("cls");
        luas_datar();
        break;
    case 3:
        system("cls");
        bangun_ruang();
        break;
    case 4:
        system("cls");
        main();
        break;
    default:
        system("cls");
        printf("Input Salah, Press any key to continue . . .\n ");
        getch();
        hitung_keliling();
    }
}
                                       //keliling bangun datar
void keliling_datar(){
            system("cls");
            int q;
            printf("=====================\n");
            printf("Keliling Bangun Datar\n");
            printf("=====================\n");
            printf("1. Keliling Persegi\n");
            printf("2. Keliling Trapesium\n");
            printf("3. Keliling Layang-Layang\n");
            printf("4. Keliling Lingkaran\n");
            printf("5. Kembali ke Menu Sebelumnya\n");
            scanf("%d", &q);
            switch(q){
                case 1:
                    system("cls");
                    persegi();
                    break;
                case 2:
                    system("cls");
                    trapesium();
                    break;
                case 3:
                    system("cls");
                    layang();
                    break;
                case 4:
                    system("cls");
                    lingkaran();
                    break;
                case 5:
                    system("cls");
                    hitung_keliling();
                    break;
                default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                keliling_datar();
            }
}
void persegi(){
                    float panjang,lebar,keliling;
                    printf("Masukkan Panjang Persegi : ");
                    scanf("%f", &panjang);
                    printf("Masukkan lebar Persegi : ");
                    scanf("%f", &lebar);
                    keliling=(panjang+lebar)*2;
                    printf("Keliling Persegi adalah = %.2f\n",keliling);
                    printf("Press any key to continue . . .");
                    getch();
                    loop_persegi();
}
void loop_persegi(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang keliling persegi? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                persegi();                                                      //loop_persegi
                break;
            case 0:
                system("cls");
                keliling_datar();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_persegi();
            }
}
void trapesium(){
                    float atas,bawah,samping,keliling2;
                    printf("Masukkan Sisi Atas Trapesium Sama Kaki : ");
                    scanf("%f", &atas);
                    printf("Masukkan Sisi Bawah Trapesium Sama Kaki : ");
                    scanf("%f", &bawah);
                    printf("Masukkan Sisi Miring Trapesium Sama Kaki : ");
                    scanf("%f", &samping);
                    keliling2=atas+bawah+(samping*2);
                    printf("Keliling Trapesium Sama Kaki adalah = %.2f\n",keliling2);
                    printf("Press any key to continue . . .");
                    getch();
                    loop_trapesium();
}

void loop_trapesium(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang keliling trapesium? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                trapesium();                                                      //loop_trapesium
                break;
            case 0:
                system("cls");
                keliling_datar();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_trapesium();
            }
}

void layang(){
                    float atas2,bawah2,keliling3;
                    printf("Masukkan Panjang Sisi Atas : ");
                    scanf("%f", &atas2);
                    printf("Masukkan Panjang Sisi Bawah : ");
                    scanf("%f", &bawah2);
                    keliling3=(atas2+bawah2)*2;
                    printf("Keliling Layang-Layang adalah = %.2f\n",keliling3);
                    printf("Press any key to continue . . .");
                    getch();
                    loop_layang();
}

void loop_layang(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang keliling layang-layang? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                layang();                                                      //loop_layang
                break;
            case 0:
                system("cls");
                keliling_datar();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_layang();
            }
}

void lingkaran(){
                    float diameter,jari2,keliling2,keliling3;
                    printf("Masukkan Panjang Diameter : ");
                    scanf("%f", &diameter);
                    printf("Masukkan Panjang Jari-jari : ");
                    scanf("%f", &jari2);
                    keliling2=2*M_PI*jari2;
                    keliling3=M_PI*diameter;
                    printf("Keliling Lingkaran berdasar Jari-Jari = %.2f\n",keliling2);
                    printf("Keliling Lingkaran berdasar diameter = %.2f\n",keliling3);
                    printf("Press any key to continue . . .");
                    getch();
                    loop_lingkaran();
}

void loop_lingkaran(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang keliling lingkaran? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                lingkaran();                                                      //loop_lingkaran
                break;
            case 0:
                system("cls");
                keliling_datar();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_lingkaran();
            }
}
                            //luas bangun datar
void luas_datar(){
            system("cls");
            int q;
            printf("=====================\n");
            printf("luas Bangun Datar\n");
            printf("=====================\n");
            printf("1. luas Persegi\n");
            printf("2. luas Trapesium\n");
            printf("3. luas Layang-Layang\n");
            printf("4. luas Lingkaran\n");
            printf("5. Kembali ke Menu Sebelumnya\n");
            scanf("%d",&q);
            switch(q){
                case 1:
                    system("cls");
                    luas_persegi();
                    break;
                case 2:
                    system("cls");
                    luas_trapesium();
                    break;
                case 3:
                    system("cls");
                    luas_layang();
                    break;
                case 4:
                    system("cls");
                    luas_lingkaran();
                    break;
                case 5:
                    system("cls");
                    hitung_keliling();
                    break;
                default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                luas_datar();
            }
}
void luas_persegi(){
                    float panjang,lebar,luas;
                    printf("Masukkan Panjang Persegi : ");
                    scanf("%f", &panjang);
                    printf("Masukkan lebar Persegi : ");
                    scanf("%f", &lebar);
                    luas=panjang*lebar;
                    printf("luas Persegi adalah = %.2f\n",luas);
                    printf("Press any key to continue . . .");
                    getch();
                    loop_luas_persegi();
}


void loop_luas_persegi(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang luas persegi? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                luas_persegi();                                                      //loop_luas_persegi
                break;
            case 0:
                system("cls");
                luas_datar();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_luas_persegi();
            }
}
void luas_trapesium(){
                    float atas,bawah,tinggi,luas;
                    printf("Masukkan Sisi Atas Trapesium Sama Kaki : ");
                    scanf("%f", &atas);
                    printf("Masukkan Sisi Atas Trapesium Sama Kaki : ");
                    scanf("%f", &bawah);
                    printf("Masukkan Tinggi Trapesium Sama Kaki : ");
                    scanf("%f", &tinggi);
                    luas=((atas+bawah)*tinggi)/2;
                    printf("Luas Trapesium Sama Kaki adalah = %.2f\n",luas);
                    printf("Press any key to continue . . .");
                    getch();
                    loop_luas_trapesium();
}


void loop_luas_trapesium(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang luas trapesium? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                luas_trapesium();                                                      //loop_luas_trapesium
                break;
            case 0:
                system("cls");
                luas_datar();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_luas_trapesium();
            }
}
void luas_layang(){
                    float diagonal1,diagonal2,luas;
                    printf("Masukkan Diagonal Panjang : ");
                    scanf("%f", &diagonal1);
                    printf("Masukkan Diagonal Lebar : ");
                    scanf("%f", &diagonal2);
                    luas=diagonal1*diagonal2/2;
                    printf("luas Lingkaran berdasar Jari-Jari = %.2f\n",luas);
                    printf("Press any key to continue . . .");
                    getch();
                    loop_luas_layang();
}

void loop_luas_layang(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang luas layang? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                luas_layang();                                                      //loop_luas_layang
                break;
            case 0:
                system("cls");
                luas_datar();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_luas_layang();
            }
}
void luas_lingkaran(){
                    float diameter,jari2,luas2,luas3;
                    printf("Masukkan Panjang Diameter : ");
                    scanf("%f", &diameter);
                    printf("Masukkan Panjang Jari-jari : ");
                    scanf("%f", &jari2);
                    luas2=M_PI*jari2*jari2;
                    luas3=M_PI*(diameter/2)*(diameter/2);
                    printf("luas Lingkaran berdasar Jari-Jari = %.2f\n",luas2);
                    printf("luas Lingkaran berdasar diameter = %.2f\n",luas3);
                    printf("Press any key to continue . . .");
                    getch();
                    loop_luas_lingkaran();
}
void loop_luas_lingkaran(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang luas lingkaran? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                luas_lingkaran();                                                      //loop_luas_lingkaran
                break;
            case 0:
                system("cls");
                luas_datar();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_luas_lingkaran();
            }
}
                    //volume bangun ruang
void bangun_ruang(){
                    system("cls");
                    int q;
                    printf("===================\n");
                    printf("Volume Bangun Ruang\n");
                    printf("===================\n");
                    printf("1. Volume Kubus\n");
                    printf("2. Volume prisma\n");
                    printf("3. Volume Limas\n");
                    printf("4. volume Bola\n");
                    printf("5. Kembali ke Menu Sebelumnya\n");
                    scanf("%d",&q);
                    switch(q){
                case 1:
                    system("cls");
                    volume_kubus();
                    break;
                case 2:
                    system("cls");
                    volume_prisma();
                    break;
                case 3:
                    system("cls");
                    volume_limas();
                    break;
                case 4:
                    system("cls");
                    volume_bola();
                    break;
                case 5:
                    system("cls");
                    hitung_keliling();
                    break;
                default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                bangun_ruang();
            }
}
void volume_kubus(){
                    float sisi, volume;
                    printf("Masukkan panjang sisi kubus: ");
                    scanf("%f", &sisi);
                    volume = sisi * sisi * sisi;
                    printf("Volume kubus adalah: %.2f\n", volume);
                    printf("Press any key to continue . . .");
                    getch();
                    loop_volume_kubus();
}

void loop_volume_kubus(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang volume kubus? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                volume_kubus();                                                      //loop_volume_kubus
                break;
            case 0:
                system("cls");
                bangun_ruang();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_volume_kubus();
            }
}
void volume_prisma(){
                    float sisi,lebar,alas,tinggi,jari2,diameter,tinggi_prisma,volume_persegi,
                    volume_segitiga,volume_silinder_jari2,volume_silinder_diameter;
                    printf("Masukkan sisi persegi : ");
                    scanf("%f", &sisi);
                    printf("Masukkan lebar alas segitiga : ");
                    scanf("%f", &lebar);
                    printf("Masukkan tinggi segitiga : ");
                    scanf("%f", &tinggi);
                    printf("Masukkan jari-jari lingkaran : ");
                    scanf("%f", &jari2);
                    printf("Masukkan diameter lingkaran : ");
                    scanf("%f", &diameter);
                    printf("Masukkan tinggi prisma : ");
                    scanf("%f", &tinggi_prisma);
                    volume_persegi=(sisi*sisi)*tinggi_prisma;
                    volume_segitiga=(0.5*lebar*tinggi)*tinggi_prisma;
                    volume_silinder_jari2=(M_PI*jari2*jari2)*tinggi_prisma;
                    volume_silinder_diameter=(M_PI*(diameter/2)*(diameter/2))*tinggi_prisma;
                    printf("Volume Prisma Persegi adalah = %.2f\n", volume_persegi);
                    printf("Volume Prisma segitiga adalah = %.2f\n", volume_segitiga);
                    printf("Volume Silinder berdasar Jari-Jari adalah = %.2f\n", volume_silinder_jari2);
                    printf("Volume Silinder berdasar Diameter adalah = %.2f\n", volume_silinder_diameter);
                    printf("Press any key to continue . . .");
                    getch();
                    loop_volume_prisma();
}

void loop_volume_prisma(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang volume prisma? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                volume_prisma();                                                      //loop_volume_prisma
                break;
            case 0:
                system("cls");
                bangun_ruang();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_volume_prisma();
            }
}
void volume_limas(){
                    float sisi,alas,tinggi,jari2,diameter,tinggi_limas,volume_persegi,volume_segitiga,volume_silinder_jari2
                    ,volume_silinder_diameter;
                    printf("Masukkan sisi persegi : ");
                    scanf("%f", &sisi);
                    printf("Masukkan lebar alas segitiga : ");
                    scanf("%f", &alas);
                    printf("Masukkan tinggi segitiga : ");
                    scanf("%f", &tinggi);
                    printf("Masukkan jari-jari lingkaran : ");
                    scanf("%f", &jari2);
                    printf("Masukkan diameter lingkaran : ");
                    scanf("%f", &diameter);
                    printf("Masukkan tinggi limas : ");
                    scanf("%f", &tinggi_limas);
                    volume_persegi=((sisi*sisi)*tinggi_limas)/3;
                    volume_segitiga=((0.5*alas*tinggi)*tinggi_limas)/3;
                    volume_silinder_jari2=((M_PI*jari2*jari2)*tinggi_limas)/3;
                    volume_silinder_diameter=((M_PI*(diameter/2)*(diameter/2))*tinggi_limas)/3;
                    printf("Volume Prisma Persegi adalah = %.2f\n", volume_persegi);
                    printf("Volume Prisma segitiga adalah = %.2f\n", volume_segitiga);
                    printf("Volume Silinder berdasar Jari-Jari adalah = %.2f\n", volume_silinder_jari2);
                    printf("Volume Silinder berdasar Diameter adalah = %.2f\n", volume_silinder_diameter);
                    printf("Press any key to continue . . .");
                    getch();
                    loop_volume_limas();
}

void loop_volume_limas(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang volume limas? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                volume_limas();                                                             //loop_volume_limas
                break;
            case 0:
                system("cls");
                bangun_ruang();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_volume_limas();
            }
}
void volume_bola(){
                    float jari2,diameter,volume_bola_jari2,Volume_bola_diameter;
                    printf("masukkan Jari-Jari Lingkaran : ");
                    scanf("%f", &jari2);
                    printf("Masukkan Diameter Lingkaran : ");
                    scanf("%f", &diameter);
                    volume_bola_jari2=(4.0/3.0)*M_PI*pow(jari2, 3);
                    Volume_bola_diameter=(4.0/3.0)*M_PI*pow((diameter/2), 3);
                    printf("Volume Bola berdasarkan Jari-Jari adalah = %.2f\n",volume_bola_jari2);
                    printf("Volume Bola berdasarkan diameter adalah = %.2f",Volume_bola_diameter);
                    printf("Press any key to continue . . .");
                    getch();
                    loop_volume_bola();
}


void loop_volume_bola(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang volume bola? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                volume_bola();                                                             //loop_volume_bola
                break;
            case 0:
                system("cls");
                bangun_ruang();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_volume_bola();
            }
}

void hitung_akar(){
            double input, akar;
            printf("Masukkan bilangan yang akan diakar = ");
            scanf("%lf",&input);
            akar=sqrt(input);
            printf("Hasil akar dari %.2f adalah %.2f\n",input,akar);
            printf("Press any key to continue . . .");
            getch();
            loop_akar();
}
void loop_akar(){
            system("cls");
            int i;
            printf("1=yes\n");
            printf("0=yes\n");
            printf("Ingin mengulang volume bola? (1/0)");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                system("cls");
                hitung_akar();                                                             //loop_akar
                break;
            case 0:
                system("cls");
                main();
                break;
            default:
                system("cls");
                printf("Input Salah, Press any key to continue . . .\n ");
                getch();
                loop_akar();
            }
}
