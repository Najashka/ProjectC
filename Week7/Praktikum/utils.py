mahasiswa = []


def tambah_mahasiswa():
    data = {}

    data["nama"] = input("Nama : ")

    try:
        data["nilai"] = int(input("Nilai : "))
    except ValueError:
        print("Input harus angka.")
        data["nilai"] = 0

    mahasiswa.append(data)


def tampilkan_data():

    if len(mahasiswa) == 0:
        print("Belum ada data.")
        return

    print("\n===== DATA MAHASISWA =====")

    for mhs in mahasiswa:
        print("Nama :", mhs["nama"])
        print("Nilai:", mhs["nilai"])
        print("----------------")


def rata_rata():

    if len(mahasiswa) == 0:
        print("Belum ada data.")
        return

    total = 0

    for mhs in mahasiswa:
        total += mhs["nilai"]

    print("Rata-rata :", total / len(mahasiswa))


def nilai_tertinggi():

    if len(mahasiswa) == 0:
        print("Belum ada data.")
        return

    tertinggi = max(mahasiswa, key=lambda x: x["nilai"])

    print("\nNilai Tertinggi")
    print("Nama :", tertinggi["nama"])
    print("Nilai:", tertinggi["nilai"])