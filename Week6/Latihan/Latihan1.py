nilai = []

for i in range(5):
    n = int(input(f"Masukkan nilai ke-{i+1}: "))
    nilai.append(n)

print("\nDaftar Nilai:", nilai)
print("Nilai Tertinggi :", max(nilai))
print("Nilai Terendah  :", min(nilai))
print("Rata-rata       :", sum(nilai) / len(nilai))