from strutils import normalize_text, word_count, top_n_words

def main():
    text = input("Masukkan teks: ")

    text = normalize_text(text)

    print("\nHasil Analisis:")
    print("Jumlah kata:", word_count(text))
    print("Top kata:", top_n_words(text))

if __name__ == "__main__":
    main()