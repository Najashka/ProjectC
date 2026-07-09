def tambah(a, b):
    return a + b


def kurang(a, b):
    return a - b


def kali(a, b):
    return a * b


def bagi(a, b):
    try:
        return a / b
    except ZeroDivisionError:
        return "Tidak bisa dibagi nol."


while True:

    print("""
===== KALKULATOR =====
1. Tambah
2. Kurang
3. Kali
4. Bagi
5. Keluar
""")

    menu = input("Pilih : ")

    if menu == "5":
        break

    try:
        a = float(input("Angka pertama : "))
        b = float(input("Angka kedua : "))

        if menu == "1":
            print("Hasil :", tambah(a, b))

        elif menu == "2":
            print("Hasil :", kurang(a, b))

        elif menu == "3":
            print("Hasil :", kali(a, b))

        elif menu == "4":
            print("Hasil :", bagi(a, b))

        else:
            print("Menu tidak tersedia.")

    except ValueError:
        print("Input harus berupa angka.")