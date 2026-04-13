import math

def hitung(a, b, op):
    if op == '+':
        return a + b
    elif op == '-':
        return a - b
    elif op == '*':
        return a * b
    elif op == '/':
        if b != 0:
            return a / b
        else:
            return "Error: pembagian nol"
    elif op == '**':
        return a ** b
    else:
        return "Error: operator tidak valid"

with open("ops.txt", "r") as infile, open("results.txt", "w") as outfile:
    for line in infile:
        line = line.strip()

        if not line:
            continue

        parts = line.split()

        # sqrt
        if parts[0] == "sqrt":
            try:
                a = float(parts[1])
                if a >= 0:
                    hasil = math.sqrt(a)
                else:
                    hasil = "Error: akar negatif"
            except:
                hasil = "Error: input tidak valid"

        # operasi biasa
        else:
            try:
                a = float(parts[0])
                op = parts[1]
                b = float(parts[2])
                hasil = hitung(a, b, op)
            except:
                hasil = "Error: format salah"

        outfile.write(f"{line} = {hasil}\n")

print("Selesai! Cek results.txt")