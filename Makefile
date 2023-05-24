FLAGS = -Wall -Wextra -Werror

CC = clang

Colleen = ./C/Colleen/Colleen.c 

Grace = ./C/Grace/Grace.c 

Sully = ./C/Sully/Sully.c 

COBJ = $(Colleen:.c=)

GOBJ = $(Grace:.c=)

SOBJ = $(Sully:.c=)



Colleen:
	$(CC) $(FLAGS) $(Colleen) -o $(COBJ)

Grace: 
	$(CC) $(FLAGS) $(Grace) -o $(GOBJ)

Sully: 
	$(CC) $(FLAGS) $(Sully) -o $(SOBJ)

clean:
	rm -f $(COBJ) $(GOBJ) $(SOBJ)
