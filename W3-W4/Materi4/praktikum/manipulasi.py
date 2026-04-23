s = input("Masukkan string: ").strip()
rev = s[::-1]
print("Reversed:", rev)
if s == rev:
    print("Palindrome!")
else:
    print("Bukan palindrome.")
# contoh lain: tokenisasi dan top word
words = s.split()
from collections import Counter
freq = Counter(words)
print("Top words:", freq.most_common(3))
