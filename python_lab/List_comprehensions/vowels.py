word=input("Enter the word:")
vowels=['a','e','o','u']
wordvowels=[]
for i in word:
    if (i in vowels and i not in wordvowels):
        wordvowels.append(i)
print("vowels in",word,"are:",wordvowels)
