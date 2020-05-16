create = __import__('functions').create
person = __import__('functions').enter_person
prin_m = __import__('functions').print_ma
valid = __import__('functions').valid_pos
count = __import__('functions').count_people
valic = __import__('functions').valid_casesm
# Inputs for matriz and space parameter
matrix_size = int(input("Please enter the matrix size \n---> "))
mapa = create(matrix_size)
space = int(
    input("Hi! please enter the closeness parameter between people :)\n---> "))

num_people = 0
prin_m(mapa)
print(
    "What do you want to do next?\n\n[ 0- Enter a new person\n[ 1- Move a person\n[ 2- How many persons.\n[ 3- Print map.\n[ 4- exit ")
option = int(input("Enter option\n---> "))
while (option != 4):

    if option == 0:
        row = int(input("Enter row\n---> "))
        column = int(input("Enter column\n---> "))

        if num_people == 0:
            person(mapa, row, column, matrix_size)
        else:
            valid(mapa, row, column, space, matrix_size)

        num_people += 1
    elif option == 1:
        if count(mapa) == 0:
          print("Hey! You dont have anyone. Let's start playing\n")
        else:
          print("Please enter the position of the person you want to move\n")
          rowa = int(input("Enter row\n---> "))
          columna = int(input("Enter column\n---> "))
          if valic(mapa, rowa, columna, matrix_size) == 0:
            mapa[rowa - 1][columna - 1] = 0
            print("Please enter the new position \n")
            row = int(input("Enter row\n---> "))
            column = int(input("Enter column\n---> "))
            if valid(mapa, row, column, space, matrix_size) == 0:
              mapa[rowa -1][columna - 1] = 1
          
    elif option == 2:
        if count(mapa) == 0:
            print("Hey! You dont have anyone. Let's start playing\n")
        else:
          print("\nIn total there are {:d} people".format(count(mapa)))
    elif option == 3:
        prin_m(mapa)
    prin_m(mapa)
    print(
      "What do you want to do next?\n\n[ 0- Enter a new person\n[ 1- Move a person\n[ 2- How many persons.\n[ 3- Print map.\n[ 4- exit ")
    option = int(input("Enter option\n---> "))
    