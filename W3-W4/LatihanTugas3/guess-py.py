import random
import os

def get_range(level):
    if level == "easy":
        return 1, 10
    elif level == "medium":
        return 1, 100
    elif level == "hard":
        return 1, 1000
    else:
        return 1, 100

def load_best():
    if os.path.exists("best_score.txt"):
        with open("best_score.txt", "r") as f:
            return int(f.read())
    return None

def save_best(score):
    with open("best_score.txt", "w") as f:
        f.write(str(score))

def play():
    level = input("Pilih level (easy/medium/hard): ").lower()
    min_v, max_v = get_range(level)

    secret = random.randint(min_v, max_v)
    attempts = 0

    best = load_best()

    print(f"Tebak angka {min_v}-{max_v}")

    while True:
        guess = int(input("Tebakan: "))
        attempts += 1

        if guess < secret:
            print("Terlalu kecil")
        elif guess > secret:
            print("Terlalu besar")
        else:
            print(f"Benar dalam {attempts} percobaan!")

            if best is None or attempts < best:
                print("🏆 Best score baru!")
                save_best(attempts)
            break

if __name__ == "__main__":
    play()