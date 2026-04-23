from strutils import normalize_text, word_count, top_n_words

with open("teks.txt", "r", encoding="utf-8") as f:
    text = f.read()

text = normalize_text(text)

print("Jumlah kata:", word_count(text))
print("Top 10 kata:", top_n_words(text, 10))