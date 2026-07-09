data_mahasiswa = []


def tambah_mahasiswa():
    mahasiswa = {}

    mahasiswa["nama"] = input("Nama : ")
    mahasiswa["nim"] = input("NIM  : ")
    mahasiswa["jurusan"] = input("Jurusan : ")

    try:
        mahasiswa["umur"] = int(input("Umur : "))
    except ValueError:
        print("Umur harus berupa angka.")
        mahasiswa["umur"] = 0

    data_mahasiswa.append(mahasiswa)
    print("Data berhasil ditambahkan.\n")


def tampilkan_mahasiswa():

    if len(data_mahasiswa) == 0:
        print("Belum ada data.")
        return

    print("\n===== DATA MAHASISWA =====")

    for i, mhs in enumerate(data_mahasiswa, start=1):

        print(f"\nMahasiswa {i}")
        print("Nama     :", mhs["nama"])
        print("NIM      :", mhs["nim"])
        print("Jurusan  :", mhs["jurusan"])
        print("Umur     :", mhs["umur"])


while True:

    print("""
1. Tambah Mahasiswa
2. Tampilkan Data
3. Keluar
""")

    menu = input("Pilih : ")

    if menu == "1":
        tambah_mahasiswa()

    elif menu == "2":
        tampilkan_mahasiswa()

    elif menu == "3":
        break

    else:
        print("Menu tidak tersedia.")