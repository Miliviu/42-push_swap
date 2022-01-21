# 42-push_swap Spanish
1. El programa se compone de dos stacks, llamados a y b.
2. Para empezar:
    ◦ En a tendrás números positivos y/o negativos, nunca duplicados.
    ◦ En b no habrá nada.
3. El objetivo es ordenar los números del stack a en orden ascendente.
4. Para hacerlo tienes las siguientes operaciones a tu disposición:

sa: swap a - intercambia los dos primeros elementos encima del stack a. No hace
nada si hay uno o menos elementos.

sb: swap b - intercambia los dos primeros elementos encima del stack b. No hace
nada si hay uno o menos elementos.

ss: swap a y swap b a la vez.

pa: push a - toma el primer elemento del stack b y lo pone encima del stack a.
No hace nada si b está vacío.

pb: push b - toma el primer elemento del stack a y lo pone encima del stack b.
No hace nada si a está vacío.

ra: rotate a - desplaza hacia arriba todos los elementos del stack a una posición,
de forma que el primer elemento se convierte en el último.

rb: rotate b - desplaza hacia arriba todos los elementos del stack b una posición,
de forma que el primer elemento se convierte en el último.

rr: rotate a y rotate b - desplaza al mismo tiempo todos los elementos del stack
a y del stack b una posición hacia arriba, de forma que el primer elemento se
convierte en el último.

rra: reverse rotate a - desplaza hacia abajo todos los elementos del stack a una
posición, de forma que el último elemento se convierte en el primero.

rrb: reverse rotate b - desplaza hacia abajo todos los elementos del stack b una
posición, de forma que el último elemento se convierte en el primero.

rrr: reverse rotate a y reverse rotate b - desplaza al mismo tiempo todos
los elementos del stack a y del stack b una posición hacia abajo, de forma que
el último elemento se convierte en el primero.

# 42-push_swap English
1. The game is composed of 2 stacks named a and b.
2. To start with:
◦ the stack a contains a random amount of negative and/or positive numbers
which cannot be duplicated.
◦ b is empty
3. The goal is to sort in ascending order numbers into stack a.
4. To do this you have the following operations at your disposal:

sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there
is only one or no elements).

sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there
is only one or no elements).

ss : sa and sb at the same time.

pa : push a - take the first element at the top of b and put it at the top of a. Do
nothing if b is empty.

pb : push b - take the first element at the top of a and put it at the top of b. Do
nothing if a is empty.

ra : rotate a - shift up all elements of stack a by 1. The first element becomes
the last one.

rb : rotate b - shift up all elements of stack b by 1. The first element becomes
the last one.

rr : ra and rb at the same time.

rra : reverse rotate a - shift down all elements of stack a by 1. The last element
becomes the first one.

rrb : reverse rotate b - shift down all elements of stack b by 1. The last element
becomes the first one.

rrr : rra and rrb at the same time
