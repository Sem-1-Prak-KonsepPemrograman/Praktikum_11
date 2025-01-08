#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    // Praktikum 11
    printf("-------------------- Praktikum 11 --------------------\n\n");
    printf("Program ini berisi beberapa percobaan dengan fungsi berbeda.\n");
    printf("Setiap percobaan dijelaskan fungsinya sebelum dijalankan.\n");
    printf("-----------------------------------------------------\n");
    printf("-----------------------------------------------------\n\n");

    // -------------------- Percobaan 1 --------------------
    printf("Percobaan 1\n");
    printf("Fungsi: Program membaca karakter yang dimasukkan pengguna hingga input berupa newline.\n");

    char karakter_1;
    // Subprogram ini membaca karakter satu per satu dari input pengguna
    do {
        scanf("%c", &karakter_1); // Membaca satu karakter dari input
        if (karakter_1 == '\n') {
            break; // Keluar dari loop jika karakter adalah newline
        }
        printf("%c", karakter_1); // Menampilkan karakter yang dimasukkan
    } while (1);

    printf("\n\n-----------------------------------------------------\n");
    printf("-----------------------------------------------------\n\n");

    // -------------------- Percobaan 2 --------------------
    printf("Percobaan 2\n");
    printf("Fungsi: Program menampilkan bilangan ganjil sebanyak yang diminta, kecuali bilangan kelipatan 3\n");

    int angka_2;
    printf("Tampilkan bilangan ganjil sebanyak (kecuali kelipatan 3): ");
    scanf("%d", &angka_2);

    // Subprogram ini menampilkan bilangan ganjil kecuali kelipatan 3
    for (int i = 0; i < angka_2; i++) {
        if (i % 3 == 0) {
            continue; // Lewati bilangan kelipatan 3
        }
        if (i % 2 == 1) {
            printf("%d ", i); // Tampilkan bilangan ganjil
        }
    }

    printf("\n\n-----------------------------------------------------\n");
    printf("-----------------------------------------------------\n\n");

    // -------------------- Percobaan 3 --------------------
    printf("Percobaan 3\n");
    printf("Fungsi: Program menampilkan bilangan ganjil sebanyak yang diminta,\n");
    printf("kecuali bilangan kelipatan 7 dan 11. Program berhenti jika input >= 100.\n");

    int angka_3;
    char jawab_3;
    do {
        printf("Tampilkan bilangan ganjil sebanyak (kecuali kelipatan 7 dan 11): ");
        scanf("%d", &angka_3);

        if (angka_3 >= 100) {
            printf("Bilangan tidak boleh >= 100.\n");
        } else {
            // Subprogram ini menampilkan bilangan ganjil dengan pengecualian
            for (int i = 0; i < angka_3; i++) {
                if (i % 7 == 0 || i % 11 == 0) {
                    continue; // Lewati bilangan kelipatan 7 atau 11
                }
                if (i % 2 == 1) {
                    printf("%d ", i); // Tampilkan bilangan ganjil
                }
            }
        }

        fflush(stdin);
        printf("\nApakah Anda ingin keluar (y/t)? ");
        scanf(" %c", &jawab_3);
    } while (jawab_3 == 't');

    printf("\n\n-----------------------------------------------------\n");
    printf("-----------------------------------------------------\n\n");

    // -------------------- Percobaan 4 --------------------
    printf("Percobaan 4\n");
    printf("Fungsi: Program menghitung nilai minimum, maksimum, dan rata-rata dari data yang dimasukkan.\n");

    int jumlah_data_4, nilai_4, 
        nilai_minim_4 = INT_MAX, 
        nilai_maks_4 = INT_MIN, 
        total_nilai_4 = 0, 
        ratarata_4;
    char jawab_4;

    do {
        printf("Jumlah data: ");
        scanf("%d", &jumlah_data_4);

        // Subprogram untuk menghitung nilai minimum, maksimum, dan rata-rata
        for (int i = 0; i < jumlah_data_4; i++) {
            printf("Nilai ke-%d = ", i + 1);
            scanf("%d", &nilai_4);

            if (nilai_minim_4 > nilai_4) {
                nilai_minim_4 = nilai_4; // Perbarui nilai minimum
            }
            if (nilai_maks_4 < nilai_4) {
                nilai_maks_4 = nilai_4; // Perbarui nilai maksimum
            }
            total_nilai_4 += nilai_4; // Tambahkan ke total nilai
        }

        ratarata_4 = total_nilai_4 / jumlah_data_4; // Hitung rata-rata
        printf("\nNilai minimal = %d\n", nilai_minim_4);
        printf("Nilai maksimum = %d\n", nilai_maks_4);
        printf("Nilai rata-rata = %d\n", ratarata_4);

        // Reset variabel untuk iterasi berikutnya
        nilai_maks_4 = INT_MIN;
        total_nilai_4 = 0;

        fflush(stdin);
        printf("Apakah Anda ingin keluar (y/t)? ");
        scanf(" %c", &jawab_4);
    } while (jawab_4 == 't');

    printf("\n\n-----------------------------------------------------\n");
    printf("-----------------------------------------------------\n\n");

    // -------------------- Percobaan 5 --------------------
    printf("Percobaan 5\n");
    printf("Fungsi: Program menampilkan pola persegi dari bilangan 1 sampai n.\n");

    int angka_5;
    char jawab_5;
    do {
        printf("Masukkan bilangan untuk membuat pola persegi: ");
        scanf("%d", &angka_5);

        // Subprogram untuk menampilkan pola persegi
        for (int i = 0; i < angka_5; i++) {
            for (int j = 0; j < angka_5; j++) {
                printf("%d ", j + 1);
            }
            printf("\n");
        }

        fflush(stdin);
        printf("Apakah Anda ingin keluar (y/t)? ");
        scanf(" %c", &jawab_5);
    } while (jawab_5 == 't');

    printf("\n\n-----------------------------------------------------\n");
    printf("-----------------------------------------------------\n\n");

    // -------------------- Percobaan 6 --------------------
    printf("Percobaan 6\n");
    printf("Fungsi: Program menampilkan pola segitiga siku-siku dari bilangan 1 sampai n.\n");

    int angka_6;
    char jawab_6;
    do {
        printf("Masukkan bilangan untuk membuat pola segitiga siku-siku: ");
        scanf("%d", &angka_6);

        // Subprogram untuk menampilkan pola segitiga
        for (int i = 0; i < angka_6; i++) {
            for (int j = 0; j <= i; j++) {
                printf("%d ", j + 1);
            }
            printf("\n");
        }

        fflush(stdin);
        printf("Apakah Anda ingin keluar (y/t)? ");
        scanf(" %c", &jawab_6);
    } while (jawab_6 == 't');

    printf("\n\n-----------------------------------------------------\n");
    printf("-----------------------------------------------------\n");

    return 0;
}
