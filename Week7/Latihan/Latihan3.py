belanja = []


def tambah_barang():
    barang = input("Nama Barang : ")
    belanja.append(barang)
    print("Barang ditambahkan.")


def tampilkan_barang():

    if len(belanja) == 0:
        print("Belum ada barang.")
        return

    print("\n===== DAFTAR BELANJA =====")

    for i, item in enumerate(belanja, start=1):
        print(f"{i}. {item}")


while True:

    print("""
1. Tambah Barang
2. Lihat Daftar
3. Keluar
""")

    menu = input("Pilih : ")

    if menu == "1":
        tambah_barang()

    elif menu == "2":
        tampilkan_barang()

    elif menu == "3":
        break

    else:
        print("Menu tidak tersedia.")