f = open("AAAA10e6.txt", "a")
for i in range(1000000):
    f.write('a')
f.write('b')
f.close()

f_= open("needle_AAAA10e6.txt", "a")
f_.write('a'*100+'b')
f_.close()
