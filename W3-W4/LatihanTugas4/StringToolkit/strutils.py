import re
from collections import Counter

def normalize_text(text):
    text = text.lower()
    text = re.sub(r'[^a-z\s]', '', text)
    return text

def word_count(text):
    words = text.split()
    return len(words)

def top_n_words(text, n=5):
    words = text.split()
    counter = Counter(words)
    return counter.most_common(n)