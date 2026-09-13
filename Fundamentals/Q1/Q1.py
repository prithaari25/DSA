def summation(n):
    return sum([i**2 for i in 
               range(1, n + 1)])

if __name__ == "__main__":
    n = int(input("Enter a number: "))
    print(summation(n))



'''
Let's break it down piece by piece.

```python
return sum([i**2 for i in range(1, n + 1)])
```

If you're new to Python, this line looks scary, but it's actually made up of **three simple parts**.

---

# Part 1: `range(1, n + 1)`

Suppose

```python
n = 5
```

Then

```python
range(1, n + 1)
```

becomes

```python
range(1, 6)
```

which produces

```text
1, 2, 3, 4, 5
```

Notice that Python's `range()` **does not include the last number**.

So

```python
range(1, 6)
```

means

```text
1
2
3
4
5
```

---

# Part 2: `i**2`

The `**` operator means **power (exponentiation)**.

Examples:

```python
2 ** 3
```

means

```text
2³ = 8
```

```python
5 ** 2
```

means

```text
25
```

So

```python
i**2
```

means

> Square `i`.

---

# Part 3: `[i**2 for i in range(1, n + 1)]`

This is called a **list comprehension**.

It is Python's short way of writing a loop that builds a list.

Let's use

```python
n = 5
```

Python starts with

```text
i = 1
```

Calculates

```text
1² = 1
```

List becomes

```text
[1]
```

---

Next

```text
i = 2
```

Calculates

```text
2² = 4
```

List becomes

```text
[1, 4]
```

---

Next

```text
i = 3
```

Calculates

```text
9
```

List becomes

```text
[1, 4, 9]
```

---

Next

```text
i = 4
```

Calculates

```text
16
```

List becomes

```text
[1, 4, 9, 16]
```

---

Next

```text
i = 5
```

Calculates

```text
25
```

Final list

```python
[1, 4, 9, 16, 25]
```

So

```python
[i**2 for i in range(1, n + 1)]
```

produces

```python
[1, 4, 9, 16, 25]
```

---

## This is exactly the same as writing

```python
squares = []

for i in range(1, n + 1):
    squares.append(i ** 2)

print(squares)
```

Output

```text
[1, 4, 9, 16, 25]
```

The list comprehension is just a shorter, more Pythonic way to write the same thing.

---

# Part 4: `sum(...)`

Now Python has

```python
sum([1, 4, 9, 16, 25])
```

The built-in `sum()` function adds all the numbers in the list.

```text
1 + 4 + 9 + 16 + 25
```

which equals

```text
55
```

---

# Finally

The function returns

```python
55
```

So

```python
return sum([i**2 for i in range(1, n + 1)])
```

is equivalent to

```python
squares = []

for i in range(1, n + 1):
    squares.append(i ** 2)

total = sum(squares)

return total
```

Or, if we don't use `sum()`:

```python
total = 0

for i in range(1, n + 1):
    total += i ** 2

return total
```

---

## Visual flow (`n = 5`)

```text
range(1, 6)
        │
        ▼
1 2 3 4 5
        │
        ▼
Square each number
        │
        ▼
[1, 4, 9, 16, 25]
        │
        ▼
sum(...)
        │
        ▼
55
        │
        ▼
return 55
```

### A note for someone coming from C#

A Python list comprehension:

```python
[i**2 for i in range(1, n + 1)]
```

is conceptually similar to this C# LINQ expression:

```csharp
Enumerable.Range(1, n)
          .Select(i => i * i)
          .ToList();
```

And the complete Python line:

```python
return sum([i**2 for i in range(1, n + 1)])
```

is similar to:

```csharp
return Enumerable.Range(1, n)
                 .Select(i => i * i)
                 .Sum();
```

As you learn Python, you'll see list comprehensions everywhere because they're a concise and readable way to transform collections.
'''