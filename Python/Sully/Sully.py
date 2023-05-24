import os
a=5
if str(a) in os.path.basename(__file__):a=a-1
if a<0:exit()
b='import os\na=%d\nif str(a) in os.path.basename(__file__):a=a-1\nif a<0:exit()\nb=%r\nf=open("Sully_"+str(a)+".py","w")\nf.write(b%%(a,b))\nf.close()\nos.system("python3 Sully_"+str(a)+".py")'
f=open("Sully_"+str(a)+".py","w")
f.write(b%(a,b))
f.close()
os.system("python3 Sully_"+str(a)+".py")