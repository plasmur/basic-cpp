username = "Bimba"
password = "89560"
enterusername = str(input(" masukan username kamu : "))
enterpassword = str(input(" masukan password kamu : "))

if username == enterusername and password == enterpassword:
    print(" anda berhasil masuk " + username)

elif username != enterusername and password == enterpassword:
    print(" username anda tidak ditemukan ")

elif username == enterusername and password != enterpassword:
    print(" password anda salah! ")

else:
    print(" username tidak ditemukan atau password salah ")
