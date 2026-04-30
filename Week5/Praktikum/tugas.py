nilai_list = []

for i in range(5):
    nilai = float(input(f"Nilai ke-{i+1}: "))
    nilai_list.append(nilai)

rata_rata = sum(nilai_list) / len(nilai_list)

print("Data nilai:", nilai_list)
print("Rata-rata =", rata_rata)