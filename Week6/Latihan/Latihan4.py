try:
    a = int(input("Masukkan angka pertama : "))
    b = int(input("Masukkan angka kedua : "))

    hasil = a / b

    print("Hasil =", hasil)

except ZeroDivisionError:
    print("Tidak boleh dibagi nol.")

except ValueError:
    print("Input harus berupa angka.")