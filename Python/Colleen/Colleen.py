#outside
def p(s):
    print(s%s,end="")

def main():
    a='#outside\ndef p(s):\n    print(s%%s,end="")\n\ndef main():\n    a=%r\n    #inside\n    p(a)\n\nif __name__ == "__main__":\n    main()'
    #inside
    p(a)

if __name__ == "__main__":
    main()