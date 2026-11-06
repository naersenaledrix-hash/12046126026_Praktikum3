/*
    *Program: Sistem Tarif Parkir Mall
    *Nama: Keyla Nurashieva
    *NIM: 12046126026
    *Deskripsi: Switch-case (char) + nasted if untuk denda
*/

#include <stdio.h>
int main () {
    char jenis;
    int lama;
    int tarif;

    printf ("===== SISTEM PARKIR MALL SI =====\n\n");
    printf ("Jenis kendaraan\n");
    printf ("M = Motor\n");
    printf ("A = Mobil\n");
    printf ("Pilih jenis kendaraan: ");
    scanf ("%c", &jenis);

    printf ("Lama parkir (jam): ");
    scanf ("%d", &lama);

    switch (jenis) {
        case 'M':
        case 'm':
            tarif = lama * 2000;
            if (lama > 5) {
                tarif = tarif + 10000;
                printf ("Anda dikenai denda Rp. 10.000\n");
                printf ("(parkir lebih > 5)\n");
            }
        printf ("Total tarif motor: Rp. %d\n", tarif);
        break;

        case 'A' :
        case 'a' :
            tarif = lama * 4000;
        if (lama > 5) {
            tarif = tarif + 10000;
            printf ("Anda dikenai denda Rp. 10.000\n");
            printf ("(parkir lebih > 5)\n");
        }
        printf ("Total tarif mobil: Rp. %d\n", tarif);
        break;

    default:
        printf ("ERROR: Jenis kendaraan tidak valid!\n");
        printf ("Gunakan huruf M atau A saja.\n");
    }
    printf ("\n==========Terima Kasih==========\n");
    return 0;
}