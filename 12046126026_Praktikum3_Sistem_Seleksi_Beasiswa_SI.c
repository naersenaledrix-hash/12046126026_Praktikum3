/*
    *Program: Sistem Seleksi Basiswa SI
    *Nama: Keyla Nurashieva
    *NIM: 12046126026
    *Deskripsi: if-else if dengan oprator logika AND
*/

#include <stdio.h>

int main() {
    char nama[50];
    float ipk;
    long pendapatan;

    printf ("===== Sistem Seleksi Beasiswa SI =====\n\n");
        printf ("Masukan nama mahasiswa: ");
        fgets (nama, 50, stdin);

        printf ("Masukan IPK: ");
        scanf ("%f", &ipk);

        printf ("Masukan pendapatan orang tua: Rp ");
        scanf ("%1d", &pendapatan);

        printf ("\n\n=====================================\n");
        printf ("       Hasil Seleksi Beasiswa         \n");
        printf ("=====================================\n\n");
        printf ("Nama: %s", nama);

            if (ipk >= 3.50 && pendapatan < 3000000) {
                printf ("Status: Beasiswa Penuh (A)\n");
            }
            else if (ipk >= 3.00 && pendapatan < 5000000) {
                printf ("Status: Beasiswa 50%% (B)\n");
            }
            else if (ipk >= 2.75 && pendapatan < 7000000) {
                printf ("Status: Beasiswa 25%% (C)\n");
            }
            else {
                printf ("Status: Tidak Mendapatkan Beasiswa\n");
            }
        printf ("\n=====================================\n");

        return 0;
    }