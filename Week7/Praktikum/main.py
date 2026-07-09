from utils import *

while True:

    print("""
========================
SISTEM NILAI MAHASISWA
========================
1. Tambah Mahasiswa
2. Tampilkan Data
3. Rata-rata
4. Nilai Tertinggi
5. Keluar
========================
""")

    menu = input("Pilih : ")

    if menu == "1":
        tambah_mahasiswa()

    elif menu == "2":
        tampilkan_data()

    elif menu == "3":
        rata_rata()

    elif menu == "4":
        nilai_tertinggi()

    elif menu == "5":
        print("Terima kasih.")
        break

    else:
        print("Menu tidak tersedia.")