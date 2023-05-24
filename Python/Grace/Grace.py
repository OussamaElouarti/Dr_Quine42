#No define
f=open("Grace_kid.py","w")
a='#No define\nf=open("Grace_kid.py","w")\na=%r\nf.write(a%%a)\nf.close()'
f.write(a%a)
f.close()