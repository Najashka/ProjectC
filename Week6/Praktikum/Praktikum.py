def input_mahasiswa():
    mahasiswa = {}

    mahasiswa["Nama"] = input("Nama : ")

    try:
        mahasiswa["Umur"] = int(input("Umur : "))
        mahasiswa["Nilai"] = int(input("Nilai : "))

    except ValueError:
        print("Input salah, otomatis menjadi 0")
        mahasiswa["Umur"] = 0
        mahasiswa["Nilai"] = 0

    return mahasiswa


def tampilkan_data(data):

    print("\n===== DATA MAHASISWA =====")

    for i, mhs in enumerate(data, start=1):

        print(f"\nMahasiswa {i}")

        for key, value in mhs.items():
            print(f"{key} : {value}")


data_mahasiswa = []

jumlah = int(input("Jumlah mahasiswa : "))

for i in range(jumlah):
    print(f"\nInput Mahasiswa ke-{i+1}")
    data_mahasiswa.append(input_mahasiswa())

tampilkan_data(data_mahasiswa)