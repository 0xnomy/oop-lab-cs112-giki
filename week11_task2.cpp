#include <iostream>

template <typename T>
class Stack
{
private:
    T *data;      // Dynamic array to store the stack
    int capacity; // Maximum size of the stack
    int topIndex; // Index of the top element of the stack

public:
    Stack() : data(nullptr), capacity(0), topIndex(-1) {}

    ~Stack()
    {
        delete[] data;
    }

    void push(const T &element)
    {
        if (topIndex == capacity - 1)
        {
            int newCapacity = capacity == 0 ? 1 : 2 * capacity;
            T *newData = new T[newCapacity];
            for (int i = 0; i < capacity; ++i)
            {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
            capacity = newCapacity;
        }

        data[++topIndex] = element;
        std::cout << "Pushed " << element << " onto the stack\n";
    }

    T pop()
    {
        if (topIndex < 0)
        {
            throw std::out_of_range("Stack is empty");
        }
        T element = data[topIndex--];
        std::cout << "Popped " << element << " from the stack ";
        return element;
    }

    T peek() const
    {
        if (topIndex < 0)
        {
            throw std::out_of_range("Stack is empty");
        }
        return data[topIndex];
    }

    bool isEmpty() const
    {
        return topIndex < 0;
    }
};

int main()
{
    Stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    std::cout << "Stack contents:";
    while (!intStack.isEmpty())
    {
        std::cout << " " << intStack.pop();
    }
    std::cout << "\nIs the stack empty? " << (intStack.isEmpty() ? "Yes" : "No") << "\n\n";

    // Test with strings
    Stack<std::string> stringStack;
    stringStack.push("hello");
    stringStack.push("world");
    stringStack.push("!");
    std::cout << "Stack contents:";
    while (!stringStack.isEmpty())
    {
        std::cout << " " << stringStack.pop();
    }
    std::cout << "\nIs the stack empty? " << (stringStack.isEmpty() ? "Yes" : "No") << "\n";

    return 0;
}

// #include <iostream>
// using namespace std;

// template <class T>
// class Stack
// {
// private:
//     T *data;
//     int top;
//     int capacity;

//     void resize(int new_capacity)
//     {
//         T *new_data = new T[new_capacity];
//         for (int i = 0; i < top; i++)
//         {
//             new_data[i] = data[i];
//         }
//         delete[] data;
//         data = new_data;
//         capacity = new_capacity;
//     }

// public:
//     Stack(int initial_capacity = 10) : top(-1), capacity(initial_capacity)
//     {
//         data = new T[initial_capacity];
//     }

//     ~Stack()
//     {
//         delete[] data;
//     }

//     bool empty()
//     {
//         return top == -1;
//     }

//     void push(T item)
//     {
//         if (top + 1 == capacity)
//         {
//             resize(capacity * 2);
//         }
//         top++;
//         data[top] = item;
//     }

//     T pop()
//     {
//         if (empty())
//         {
//             cerr << "Stack is empty\n";
//             return T();
//         }
//         T item = data[top];
//         top--;
//         if (top + 1 <= capacity / 4 && capacity > 10)
//         {
//             resize(capacity / 2);
//         }
//         return item;
//     }

//     T peek()
//     {
//         if (empty())
//         {
//             cerr << "Stack is empty\n";
//             return T();
//         }
//         return data[top];
//     }
// };

// int main()
// {
//     Stack<int> int_stack;
//     int_stack.push(1);
//     int_stack.push(2);
//     int_stack.push(3);
//     cout << "Peek: " << int_stack.peek() << endl;
//     cout << "Pop: " << int_stack.pop() << endl;
//     cout << "Peek: " << int_stack.peek() << endl;

//     Stack<string> string_stack;
//     string_stack.push("Hello");
//     string_stack.push("World");
//     cout << "Peek: " << string_stack.peek() << endl;
//     cout << "Pop: " << string_stack.pop() << endl;
//     cout << "Peek: " << string_stack.peek() << endl;

//     return 0;
// }
