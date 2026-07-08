# ============================================
# MINI PROJECT WEEK 6
# SISTEM KASIR SEDERHANA
# ============================================

keranjang = []
history = []


# ============================================
# TAMBAH BARANG
# ============================================
def tambah_barang():
    print("\n===== TAMBAH BARANG =====")

    nama = input("Nama Barang : ")

    try:
        harga = int(input("Harga Barang : "))
        jumlah = int(input("Jumlah Barang : "))

        barang = {
            "nama": nama,
            "harga": harga,
            "jumlah": jumlah
        }

        keranjang.append(barang)

        print("\nBarang berhasil ditambahkan.")

    except ValueError:
        print("Input harus berupa angka!")


# ============================================
# LIHAT KERANJANG
# ============================================
def lihat_keranjang():

    if len(keranjang) == 0:
        print("\nKeranjang masih kosong.")
        return

    print("\n========== KERANJANG ==========")

    total = 0

    for i, item in enumerate(keranjang, start=1):

        subtotal = item["harga"] * item["jumlah"]

        total += subtotal

        print(f"""
{i}. {item['nama']}
   Harga    : Rp{item['harga']}
   Jumlah   : {item['jumlah']}
   Subtotal : Rp{subtotal}
""")

    print("-------------------------------")
    print("TOTAL : Rp", total)


# ============================================
# CARI BARANG
# ============================================
def cari_barang():

    if len(keranjang) == 0:
        print("\nKeranjang kosong.")
        return

    nama = input("Cari Barang : ").lower()

    ditemukan = False

    for item in keranjang:

        if item["nama"].lower() == nama:

            print("\nBarang ditemukan!")

            print(f"""
Nama   : {item['nama']}
Harga  : Rp{item['harga']}
Jumlah : {item['jumlah']}
""")

            ditemukan = True

    if not ditemukan:
        print("Barang tidak ditemukan.")


# ============================================
# HAPUS BARANG
# ============================================
def hapus_barang():

    if len(keranjang) == 0:
        print("\nKeranjang kosong.")
        return

    nama = input("Nama barang yang dihapus : ").lower()

    for item in keranjang:

        if item["nama"].lower() == nama:

            keranjang.remove(item)

            print("Barang berhasil dihapus.")

            return

    print("Barang tidak ditemukan.")


# ============================================
# BAYAR
# ============================================
def bayar():

    if len(keranjang) == 0:
        print("\nTidak ada barang untuk dibayar.")
        return

    total = 0

    print("\n========== STRUK ==========")

    for item in keranjang:

        subtotal = item["harga"] * item["jumlah"]

        total += subtotal

        print(f"{item['nama']}")
        print(f"{item['jumlah']} x Rp{item['harga']} = Rp{subtotal}")
        print()

    print("---------------------------")
    print("TOTAL : Rp", total)

    while True:

        try:

            uang = int(input("\nJumlah Uang : Rp"))

            if uang < total:

                print("Uang tidak cukup!")

            else:

                kembalian = uang - total

                print("\n===== PEMBAYARAN BERHASIL =====")
                print("Total      : Rp", total)
                print("Bayar      : Rp", uang)
                print("Kembalian  : Rp", kembalian)

                transaksi = {
                    "barang": keranjang.copy(),
                    "total": total,
                    "bayar": uang,
                    "kembalian": kembalian
                }

                history.append(transaksi)

                keranjang.clear()

                print("\nTransaksi disimpan ke history.")

                break

        except ValueError:

            print("Input harus angka.")


# ============================================
# HISTORY TRANSAKSI
# ============================================
def lihat_history():

    if len(history) == 0:
        print("\nBelum ada transaksi.")
        return

    print("\n========== HISTORY ==========")

    for nomor, transaksi in enumerate(history, start=1):

        print(f"\n===== Transaksi {nomor} =====")

        for item in transaksi["barang"]:

            subtotal = item["harga"] * item["jumlah"]

            print(
                f"{item['nama']} | "
                f"{item['jumlah']} x Rp{item['harga']} = Rp{subtotal}"
            )

        print("--------------------------")
        print("Total      : Rp", transaksi["total"])
        print("Bayar      : Rp", transaksi["bayar"])
        print("Kembalian  : Rp", transaksi["kembalian"])


# ============================================
# MENU
# ============================================

while True:

    print("""
=================================
      SISTEM KASIR PYTHON
=================================
1. Tambah Barang
2. Lihat Keranjang
3. Cari Barang
4. Hapus Barang
5. Bayar
6. History Transaksi
7. Keluar
=================================
""")

    menu = input("Pilih Menu : ")

    if menu == "1":
        tambah_barang()

    elif menu == "2":
        lihat_keranjang()

    elif menu == "3":
        cari_barang()

    elif menu == "4":
        hapus_barang()

    elif menu == "5":
        bayar()

    elif menu == "6":
        lihat_history()

    elif menu == "7":

        print("\nTerima kasih telah menggunakan program.")

        break

    else:

        print("Menu tidak tersedia.")