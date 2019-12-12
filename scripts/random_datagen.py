import random
f = open("randomtext_4alphabet_10e3.txt", "a")
f_= open("needle_randomtext_4alphabet_10e3.txt", "a")
for i in range(1000-10):
    f.write(chr(random.randint(ord('a'),ord('d'))))
for i in range(10):
    f.write(chr(random.randint(ord('a'),ord('d'))))
    f_.write(chr(random.randint(ord('a'),ord('d'))))
f.close()
f_.close()
f = open("randomtext_fullalphabet_10e3.txt", "a")
f_= open("needle_randomtext_fullalphabet_10e3.txt", "a")
for i in range(1000-10):
    f.write(chr(random.randint(ord('a'),ord('z'))))
for i in range(10):
    f.write(chr(random.randint(ord('a'),ord('z'))))
    f_.write(chr(random.randint(ord('a'),ord('z'))))
f.close()
f_.close()
f = open("randomtext_4alphabet_10e4.txt", "a")
f_= open("needle_randomtext_4alphabet_10e4.txt", "a")
for i in range(10000-10):
    f.write(chr(random.randint(ord('a'),ord('d'))))
for i in range(10):
    f.write(chr(random.randint(ord('a'),ord('d'))))
    f_.write(chr(random.randint(ord('a'),ord('d'))))
f.close()
f_.close()
f = open("randomtext_fullalphabet_10e4.txt", "a")
f_= open("needle_randomtext_fullalphabet_10e4.txt", "a")
for i in range(10000-10):
    f.write(chr(random.randint(ord('a'),ord('z'))))
for i in range(10):
    f.write(chr(random.randint(ord('a'),ord('z'))))
    f_.write(chr(random.randint(ord('a'),ord('z'))))
f.close()
f_.close()
f = open("randomtext_4alphabet_10e5.txt", "a")
f_= open("needle_randomtext_4alphabet_10e5.txt", "a")
for i in range(100000-10):
    f.write(chr(random.randint(ord('a'),ord('d'))))
for i in range(10):
    f.write(chr(random.randint(ord('a'),ord('d'))))
    f_.write(chr(random.randint(ord('a'),ord('d'))))
f.close()
f_.close()
f = open("randomtext_fullalphabet_10e5.txt", "a")
f_= open("needle_randomtext_fullalphabet_10e5.txt", "a")
for i in range(100000-10):
    f.write(chr(random.randint(ord('a'),ord('z'))))
for i in range(10):
    f.write(chr(random.randint(ord('a'),ord('z'))))
    f_.write(chr(random.randint(ord('a'),ord('z'))))
f.close()
f_.close()
f = open("randomtext_4alphabet_10e6.txt", "a")
f_= open("needle_randomtext_4alphabet_10e6.txt", "a")
for i in range(1000000-10):
    f.write(chr(random.randint(ord('a'),ord('d'))))
for i in range(10):
    f.write(chr(random.randint(ord('a'),ord('d'))))
    f_.write(chr(random.randint(ord('a'),ord('d'))))
f.close()
f_.close()
f = open("randomtext_fullalphabet_10e6.txt", "a")
f_= open("needle_randomtext_fullalphabet_10e6.txt", "a")
for i in range(1000000-10):
    f.write(chr(random.randint(ord('a'),ord('z'))))
for i in range(10):
    f.write(chr(random.randint(ord('a'),ord('z'))))
    f_.write(chr(random.randint(ord('a'),ord('z'))))
f.close()
f_.close()
f = open("randomtext_4alphabet_10e7.txt", "a")
f_= open("needle_randomtext_4alphabet_10e7.txt", "a")
for i in range(10000000-20):
    f.write(chr(random.randint(ord('a'),ord('d'))))
for i in range(20):
    f.write(chr(random.randint(ord('a'),ord('d'))))
    f_.write(chr(random.randint(ord('a'),ord('d'))))
f.close()
f_.close()
f = open("randomtext_fullalphabet_10e7.txt", "a")
f_= open("needle_randomtext_fullalphabet_10e7.txt", "a")
for i in range(10000000-20):
    f.write(chr(random.randint(ord('a'),ord('z'))))
for i in range(20):
    f.write(chr(random.randint(ord('a'),ord('z'))))
    f_.write(chr(random.randint(ord('a'),ord('z'))))
f.close()
f_.close()


f = open("randomtext_4alphabet_10e3_100.txt", "a")
f_= open("needle_randomtext_4alphabet_10e3_100.txt", "a")
for i in range(1000-100):
    f.write(chr(random.randint(ord('a'),ord('d'))))
for i in range(100):
    f.write(chr(random.randint(ord('a'),ord('d'))))
    f_.write(chr(random.randint(ord('a'),ord('d'))))
f.close()
f_.close()
f = open("randomtext_fullalphabet_10e3_100.txt", "a")
f_= open("needle_randomtext_fullalphabet_10e3_100.txt", "a")
for i in range(1000-100):
    f.write(chr(random.randint(ord('a'),ord('z'))))
for i in range(100):
    f.write(chr(random.randint(ord('a'),ord('z'))))
    f_.write(chr(random.randint(ord('a'),ord('z'))))
f.close()
f_.close()
f = open("randomtext_4alphabet_10e4_100.txt", "a")
f_= open("needle_randomtext_4alphabet_10e4_100.txt", "a")
for i in range(10000-100):
    f.write(chr(random.randint(ord('a'),ord('d'))))
for i in range(100):
    f.write(chr(random.randint(ord('a'),ord('d'))))
    f_.write(chr(random.randint(ord('a'),ord('d'))))
f.close()
f_.close()
f = open("randomtext_fullalphabet_10e4_100.txt", "a")
f_= open("needle_randomtext_fullalphabet_10e4_100.txt", "a")
for i in range(10000-100):
    f.write(chr(random.randint(ord('a'),ord('z'))))
for i in range(100):
    f.write(chr(random.randint(ord('a'),ord('z'))))
    f_.write(chr(random.randint(ord('a'),ord('z'))))
f.close()
f_.close()
f = open("randomtext_4alphabet_10e5_100.txt", "a")
f_= open("needle_randomtext_4alphabet_10e5_100.txt", "a")
for i in range(100000-100):
    f.write(chr(random.randint(ord('a'),ord('d'))))
for i in range(100):
    f.write(chr(random.randint(ord('a'),ord('d'))))
    f_.write(chr(random.randint(ord('a'),ord('d'))))
f.close()
f_.close()
f = open("randomtext_fullalphabet_10e5_100.txt", "a")
f_= open("needle_randomtext_fullalphabet_10e5_100.txt", "a")
for i in range(100000-100):
    f.write(chr(random.randint(ord('a'),ord('z'))))
for i in range(100):
    f.write(chr(random.randint(ord('a'),ord('z'))))
    f_.write(chr(random.randint(ord('a'),ord('z'))))
f.close()
f_.close()
f = open("randomtext_4alphabet_10e6_100.txt", "a")
f_= open("needle_randomtext_4alphabet_10e6_100.txt", "a")
for i in range(1000000-100):
    f.write(chr(random.randint(ord('a'),ord('d'))))
for i in range(100):
    f.write(chr(random.randint(ord('a'),ord('d'))))
    f_.write(chr(random.randint(ord('a'),ord('d'))))
f.close()
f_.close()
f = open("randomtext_fullalphabet_10e6_100.txt", "a")
f_= open("needle_randomtext_fullalphabet_10e6_100.txt", "a")
for i in range(1000000-100):
    f.write(chr(random.randint(ord('a'),ord('z'))))
for i in range(100):
    f.write(chr(random.randint(ord('a'),ord('z'))))
    f_.write(chr(random.randint(ord('a'),ord('z'))))
f.close()
f_.close()
f = open("randomtext_4alphabet_10e7_100.txt", "a")
f_= open("needle_randomtext_4alphabet_10e7_100.txt", "a")
for i in range(10000000-200):
    f.write(chr(random.randint(ord('a'),ord('d'))))
for i in range(200):
    f.write(chr(random.randint(ord('a'),ord('d'))))
    f_.write(chr(random.randint(ord('a'),ord('d'))))
f.close()
f_.close()
f = open("randomtext_fullalphabet_10e7_100.txt", "a")
f_= open("needle_randomtext_fullalphabet_10e7_100.txt", "a")
for i in range(10000000-200):
    f.write(chr(random.randint(ord('a'),ord('z'))))
for i in range(200):
    f.write(chr(random.randint(ord('a'),ord('z'))))
    f_.write(chr(random.randint(ord('a'),ord('z'))))
f.close()
f_.close()
