import math

def luas_lingkaran(r):
    return math.pi * r * r

jari = float(input("Masukkan jari-jari : "))

hasil = luas_lingkaran(jari)

print("Luas =", hasil)