jumlah = int(input("Masukkan jumlah data: "))

total = 0

for i in range(jumlah):
    nilai = float(input(f"Nilai ke-{i+1}: "))
    total += nilai

rata_rata = total / jumlah

print("Rata-rata =", rata_rata)