TASK 1
1. Difference Between a Normal Variable and a Pointer
- Normal Variable:
- Stores a direct value (e.g., int x = 5; stores 5).
- Accesses memory directly using its name.
- Value is read or modified by referencing the variable name.
- Pointer:
- Stores a memory address of another variable (e.g., int *p = &x;).
- Accesses memory indirectly via the address it holds.
- Value is read or modified using dereferencing (*p).

2. Declaration and Definition: Variables vs Pointers
- Variable Declaration/Definition:
- Syntax: int x; or int x = 10;
- x is a variable that holds an integer value.
- Pointer Declaration/Definition:
- Syntax: int *p; or int *p = &x;
- * indicates it's a pointer to an integer.
- &x gives the address of variable x.
- Operators:
- * (asterisk): used to declare a pointer and to dereference it.
- & (ampersand): used to get the address of a variable.

3. Dereferencing a Pointer
- Meaning:
- Accessing the value stored at the memory address held by a pointer.
- Example:
	int x = 10;
	int *p = &x;
	*p = 20;  
- *p accesses the value at address p (which is x), and modifies it.


Task 1 continued

1. When Pointers Are Preferred Over Normal Variables

Use Cases:
- Dynamic Memory Allocation: Pointers allow allocation of memory at runtime using `malloc` or `new`, useful for flexible data structures like linked lists.
- Function Arguments: Pointers enable functions to modify variables outside their scope (e.g., swapping values).
- Efficient Array Traversal: Pointers can iterate through arrays faster than indexing, especially in low-level optimization.

Examples:
- Linked List: Each node stores a pointer to the next node.
- Swapping Values: void swap(int *a, int *b) modifies original values using dereferencing.


2. Limitations and Risks of Using Pointers

- Dangling Pointers: Accessing memory after it's freed can cause crashes.
- Memory Leaks: Forgetting to free allocated memory leads to wasted resources.
- Complex Debugging: Pointer errors are hard to trace and can corrupt memory.
- Security Risks: Improper pointer use can expose vulnerabilities (e.g., buffer overflows).

Compared to variables, pointers require careful management and are more error-prone.



3. Call by Value vs Call by Reference

| Feature              | Call by Value                          | Call by Reference                          |
|----------------------|----------------------------------------|--------------------------------------------|
| Data Passed          | Copy of the value                      | Address of the variable                    |
| Original Modified?   | No                                     | Yes                                        |
| Syntax (C)           | void func(int x)                       | void func(int *x) or void func(int &x) |
| Use Case             | Simple calculatins                     | Swapping, modifying external variables     |

Example

void modify(int x) { x = 20; }       // Call by value
void modify(int *x) { *x = 20; }     // Call by reference


4. When to Use Call by Value vs Reference

- Call by Value Preferred
  - When data should remain unchanged.
  - For small, simple data types (e.g., `int`, `char`).

- Call by Reference Preferred
  - When modifying original data is required.
  - For large structures or arrays to avoid copying overhead.
  - In performance-critical applications.
TASK 2

- Variable: Holds a direct value (e.g., int num = 10;).
- Pointer: Holds the memory address of another variable (e.g., int *ptr = &num;).
- Address-of Operator (&): Retrieves the memory address of a variable.
- Dereferencing Operator (*): Accesses the value stored at a pointer’s address.


Example in C

int num = 10;
int *ptr = &num;

printf("Value of num: %d\n", num);
printf("Value stored in ptr (address of num): %p\n", ptr);
printf("Address of num: %p\n", &num);
printf("Value accessed using *ptr: %d\n", *ptr);


TASK 3

Pointer Dereferencing and Value Modification

- Pointer Dereferencing means accessing the value stored at the memory address held by a pointer.
- Modifying via Pointer allows you to change the original variable’s value indirectly.

---

Task Breakdown

- Declare an integer variable count and assign it a value (e.g., 10).
- Declare a pointer pCount and assign it the address of count using &count.
- Modify count using *pCount = new_value;
- Print the updated value of count to confirm the change.



Example in C

int count = 10;
int *pCount = &count;
*pCount = 25;  // modifies count


This demonstrates how pointers can be used to access and modify variables efficiently.

TASK 4
Arithmetic Using Pointer Dereferencing

- Pointer Dereferencing allows access to the actual values stored at memory addresses.
- You can perform arithmetic operations directly using dereferenced pointers.

Task Example in C


int num1 = 5, num2 = 7;
int *ptr1 = &num1, *ptr2 = &num2;
int sum = *ptr1 + *ptr2;
printf("Sum: %d\n", sum);


This demonstrates how pointers can be used not just for access, but also for computation.


TASK 5
Swapping Values Using Pointers and Functions

- Pass by Reference allows a function to modify the original variables by receiving their memory addresses.
- Pointers are used to access and change values stored in those addresses.


Task demonstration in c
Example in C


void swapNumbers(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swapNumbers(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}

This demonstrates how pointers enable in-place modification of variables across function boundaries.

TASK 6
- Pass by Value:
  - A copy of the variable is passed to the function.
  - Changes made inside the function do not affect the original variable.
  - Safe for read-only operations.

- Pass by Reference:
  - The memory address of the variable is passed.
  - Changes made inside the function do affect the original variable.
  - Useful for modifying data or optimizing performance.

Example:
void incrementValue(int x) {
    x++;
}

void incrementReference(int *x) {
    (*x)++;
}

int main() {
    int num = 5;
    incrementValue(num);
    printf("After pass by value: %d\n", num);  // Output: 5

    incrementReference(&num);
    printf("After pass by reference: %d\n", num);  // Output: 6
    return 0;
}



