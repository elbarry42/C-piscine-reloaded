# 🧠 Piscine Reloaded – 42 Lyon 🎓

**Piscine Reloaded** is a small revision project at **42 Lyon**, designed to help us revisit the functions and concepts we built during the **C Piscine**. 🔁
It’s all about getting back to the **fundamentals of the C language** — loops, conditions, pointers, strings, structures, and memory management.

Through **27 short exercises**, we rebuild essential functions such as `ft_strlen`, `ft_swap`, `ft_putstr`, `ft_strdup`, `ft_range`, and `ft_display_file`.
It’s a simple but powerful way to refresh our knowledge before tackling bigger challenges like **Libft**. 💪

---

## 🧩 Project Overview

This project includes a series of exercises that cover key areas of programming in C:

* **Basic functions & display:** `ft_putchar`, `ft_putstr`, `ft_strlen`, `ft_strcmp`
* **Pointers & operations:** `ft_ft`, `ft_swap`, `ft_div_mod`
* **Mathematical logic:** `ft_iterative_factorial`, `ft_recursive_factorial`, `ft_sqrt`, `ft_abs.h`
* **Memory & arrays:** `ft_strdup`, `ft_range`
* **Structures & macros:** `ft_point.h`, `ft_foreach`, `ft_count_if`
* **File management:** `ft_display_file`
* **Automation:** writing and using a `Makefile`

Each exercise focuses on strengthening problem-solving skills, understanding memory handling, and improving code readability under the **Norminette** standard.

---

## ⚙️ Compilation

Each exercise is compiled separately.
For example:

```bash
gcc -Wall -Wextra -Werror ft_strlen.c main.c -o test
./test
```

Some exercises also include a **Makefile** with the usual commands:

```bash
make        # Compile the project
make clean  # Remove object files
make fclean # Remove all, including binaries
make re     # Recompile from scratch
```

---

## 💡 Example

```c
#include "ft_strlen.c"
#include <stdio.h>

int main(void)
{
    char *str = "Piscine Reloaded";
    printf("String length: %d\n", ft_strlen(str));
    return (0);
}
```

**Output:**

```
String length: 16
```

---

## 🚀 Learning Outcomes

This project helped me:

* Review and solidify the **fundamentals of the C language**
* Practice **memory management** and **pointer manipulation**
* Learn to **automate compilation** using Makefiles
* Follow the **Norminette** and improve code clarity
* Reconnect with the **peer-learning** spirit of 42

---

## 🛡️ License

This project is part of the **42 Lyon curriculum**.
It’s freely reusable for educational purposes.

---

✨ *“Back to basics — code, learn, repeat.”*
