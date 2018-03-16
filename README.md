
#### Simple program in C++ ####


Very small C++ program using some data structures of the standard library and using some OO concepts (nothing fancy or of particular use).

Very small class that does binary searching which, given a number, finds the closest smallest number in a set.

For instance, given the set {1, 10, 15, 21}, searching for 5 should return 1, searching for 9 should return 1, searching for 10 should return 10, searching for 22 or 0 should return nothing.

**Compiling**

The simplest way is to just use the `c++` command:

```sh
c++ -o closest_smaller Set.cpp 
./closest_smaller < input_file
```

**Input**

- First line is how many numbers the set will have.
- Second line is the set.
- Third line is the number you want to search in the set.

**Example:**

Given:

> 5
>
> 10 15 1 5 21
>
> 19

will return:

> 15



**Notes**

- The main idea was try to do it functional for the purposes given.
  - It could be separated in different files, worked some more generic input...
- Didn't use other libraries that could have given a better results, such as vector, just so it could be seen the real basics.

