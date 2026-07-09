import utils

utils.sapa()

mahasiswa = []

def tambah_mahasiswa():

   data = {}

   data["nama"] = input("Nama: ")

   try:
       data["nilai"] = int(input("Nilai: "))
   except:
       print("Input salah")
       data["nilai"] = 0

   mahasiswa.append(data)

def tampilkan_data():

   print("\n=== DATA MAHASISWA ===")

   for m in mahasiswa:
       print(f"Nama : {m['nama']}")
       print(f"Nilai: {m['nilai']}")
       print("----------------")

def rata_rata():

   total = 0

   for m in mahasiswa:
       total += m["nilai"]

   if len(mahasiswa) > 0:
       print("Rata-rata:", total / len(mahasiswa))

while True:

   print("\n1. Tambah")
   print("2. Tampilkan")
   print("3. Rata-rata")
   print("4. Keluar")

   pilih = input("Pilih: ")

   if pilih == "1":
       tambah_mahasiswa()

   elif pilih == "2":
       tampilkan_data()

   elif pilih == "3":
       rata_rata()

   elif pilih == "4":
       break

   else:
       print("Menu tidak ada")
       
