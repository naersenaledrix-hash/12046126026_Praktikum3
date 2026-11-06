/*
    *Program: Kalkulator Konversi Nilai Mahasiswa
    *Nama: Keyla Nurashieva
    *NIM: 12046126026
    *Deskripsi: else-if untuk grade dan predikat kelulusan
*/

#include <stdio.h>
int main () {
    long nim;
    float nilai;
    char grade;
    char status[15];
    char predikat[15];

    printf ("=== KONVERSI NILAI MAHASISWA SI ===\n\n");
    printf ("Masukan NIM: ");
    scanf ("%ld", &nim);

    printf ("Masukan nilai akhir: ");
    scanf ("%f", &nilai);

    if (nilai < 0 || nilai > 100) {
        printf (":\nERROR: Nilai harus diantara 0 - 100!\n");
        return 1;
    }
    
    if (nilai >= 85) {
        grade = 'A';
        sprintf (predikat, "Sangat Baik");
        sprintf (status, "LULUS");
    } else if (nilai >= 75) {
        grade = 'B';
        sprintf (predikat, "Baik");
        sprintf (status, "LULUS");
    } else if (nilai >= 65) {
        grade = 'C';
        sprintf (predikat, "Cukup");
        sprintf (status, "LULUS");
    } else if (nilai >= 50) {
        grade = 'D';
        sprintf (predikat, "Kurang");
        sprintf (status, "TIDAK LULUS");
    } else {
        grade = 'E';
        sprintf (predikat, "Sangat Kurang");
        sprintf (status, "TIDAK LULUS");
    }

    printf ("\n\n=================================\n");
    printf ("     KARTU HASIL STUDI (KHS)    \n");
    printf ("=================================\n\n");
    printf ("NIM: %ld\n", nim);
    printf ("Nilai: %.2f\n", nilai);
    printf ("Grade: %c\n", grade);
    printf ("Predikat: %s\n", predikat);
    printf ("Status: %s\n\n", status);
    printf ("=================================\n");

    return 0;
}