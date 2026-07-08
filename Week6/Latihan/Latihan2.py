mahasiswa = {}

mahasiswa["Nama"] = input("Nama : ")
mahasiswa["NIM"] = input("NIM  : ")
mahasiswa["Jurusan"] = input("Jurusan : ")
mahasiswa["Umur"] = int(input("Umur : "))

print("\n===== Biodata =====")

for key, value in mahasiswa.items():
    print(f"{key} : {value}")