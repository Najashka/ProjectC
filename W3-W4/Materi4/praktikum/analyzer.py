import sys
from collections import Counter
import re

def analyze(filename):
    with open(filename, encoding='utf-8') as f:
        text = f.read().lower()
    words = re.findall(r"\b[a-z0-9']+\b", text)
    total_words = len(words)
    avg_len = sum(len(w) for w in words) / total_words if total_words else 0
    freq = Counter(words)
    print("Total words:", total_words)
    print("Average word length: {:.2f}".format(avg_len))
    print("Top 10 words:", freq.most_common(10))

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python3 analyzer.py file.txt")
    else:
        analyze(sys.argv[1])
