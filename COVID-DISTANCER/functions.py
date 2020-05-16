def create(num=0):
    mapa = []
    for i in range(num):
        mapa.append([0]*num)

    return mapa


def print_ma(matriz):
    print()
    for i in matriz:
        l = 1
        for j in i:
            print("{:d}".format(j), end="")
            if len(i) > l:
                print(end=" ")
            l = l + 1
        print()
    print()


def enter_person(matriz, row, column, size):
    if row > size or column > size:
        print("Ups! It looks like you enter a wrong position")
        return None
    matriz[row - 1][column - 1] = 1


def valid_pos(matriz, row, column, dis, size):
    
    vali = False

    if valid_cases(matriz, row, column, size):
        return

    row -= 1
    column -= 1

    if validate_up(matriz, row, column, dis, size):
        if validate_down(matriz, row, column, dis, size):
          if validate_right(matriz, row, column, dis, size):
              if validate_left(matriz, row, column, dis, size):
                vali = True

    if vali:
        enter_person(matriz, row + 1, column + 1, size)
        return 1
    else:
        print("\nProhibited possition!")
        print("Positions can be moved")
        v = pos_vali(matriz, row, column, dis, size)
        if len(v) != 0:
          print(v)
        else:
          print("No positions available\n")
        return 0


def valid_cases(matriz, row, column, size):
    if row > size or column > size:
        print("\nUps! It looks like you enter a wrong position\n")
        return 1

    if (matriz[row - 1][column - 1] == 1):
        print("\nUps! There is a person already at that spot\n")
        return 1

def valid_casesm(matriz, row, column, size):
    if row > size or column > size:
        print("\nUps! It looks like you enter a wrong position\n")
        return 1

    if (matriz[row - 1][column - 1] != 1):
        print("\nUps! There is no one at that point\n")
        return 1
    return 0
def validate_index(index, size):
    if index >= 0 and index < size:
        return True
    else:
        return False

def validate_up(matrix, row, column, space, size):
    vali = True
    i = 0
    while i < space:
        i += 1
        if validate_index(row - i, size):
            if matrix[row - i][column] == 1:
                return False
    return vali

def validate_down(matrix, row, column, space, size):
    vali = True
    i = 0
    while i < space:
        i += 1
        if validate_index(row + i, size):
            if matrix[row + i][column] == 1:
                return False
    return vali

def validate_right(matrix, row, column, space, size):
    vali = True
    i = 0
    while i < space:
        i += 1
        if validate_index(column + i, size):
            if matrix[row][column + i] == 1:
                return False
    return vali

def validate_left(matrix, row, column, space, size):
    vali = True
    i = 0
    while i < space:
        i += 1
        if validate_index(column - i, size):
            if matrix[row][column - i] == 1:
                return False

    return vali

def count_people(matrix):
    counter = 0
    for mat in matrix:
      for values in mat:
        if values == 1:
          counter += 1
    return counter
def pos_vali(matriz, row, column, dis, size):
  lista = []
  for i in range (size):
    for j in range (size):
      if matriz[i][j] == 0:
        if validate_up(matriz, i, j, dis, size):
          if validate_down(matriz, i, j, dis, size):
            if validate_right(matriz, i, j, dis, size):
              if validate_left(matriz, i, j, dis, size):
                   lista.append([(i + 1),(j + 1)])
  return lista

                 
