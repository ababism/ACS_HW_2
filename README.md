# ACS_HW_2
# Архитектуры вычислительных систем. ИДЗ № 2. Вариант 10 <br/> Киселев Иван БПИ217.

## Описание репозитория:


# Отсчет

## Задание на 4 балла:
**✔Решение задачи на C**  (3 единицы комплиляции + прием аргументов командной строки для ввода с файла + генерация)
* [main.c](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/ACS_C_Files/main.c)
* [task.c](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/ACS_C_Files/task.c)

**✔ Не модифицированный код на Assembly с комментариями**
* [main.s](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/hw_comments_for_4/main.s)
* [task.s](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/hw_comments_for_4/task.s)

**✔ Модифицированный код на Assembly (убраны макросы)**
* [main.s](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/hw_moded_after_4/main.s)
* [task.s](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/hw_moded_after_4/task.s)

* [Список изменений](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/hw_moded_after_4/README.md)

**✔ [Тестирование программы (через консоль)](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/Tests.md)**

### Итог:

Все корректно работает, код был откомментрован максильно подробно (сразу на 9 баллов)

## Задание на 5 баллов:
**✔ Решение задачи на C *с передачей данных в функции и локальными переменными (было изначально)*** 
* [main.c](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/ACS_C_Files/main.c)
* [task.c](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/ACS_C_Files/task.c)

**✔ Модифицированный код на Assembly с комментариями о передаче параметров в фукнции (были и в прошлом пункте)**
* [main.s](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/hw_comments_for_4/main.s)
* [task.s](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/hw_comments_for_4/task.s)

 
### Итог:

Весь код был прокомментирвон, включая передачу параметров в функции (mov регистр для соотвествующего аргумента, значение аргумента).

## Задание на 6 баллов:

**✔ Модифицированный код на Assembly**
* [main.s](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/hw_moded_after_6/main.s)
* [task.s](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/hw_moded_after_6/task.s)


### [Внесенные изменения](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/hw_moded_after_6/README.md):


**✔ [Тестирование программы через консоль и генерацию](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/Tests.md)**

### Итог:

Выполен рефакторинг программы на ассемблере за счет максимального использования регистров процессора (в основном замены переменной итератора из стека на регист r14d/r15d). В ходе тестирования получены идентичные значения.

## Задание на 7 баллов:

**✔ Код на C, содержащий 3 единицы компиляции** 
* [ACS_C_Files](https://github.com/ababism/ACS_HW_1/tree/main/ACS_HW_1/ACS_C_Files)

**✔ Модифицированный код на ассемблере, содержащий 3 следующие единицы компиляции**
* [main.s](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/hw_moded_after_6/main.s)
* [task.s](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/hw_moded_after_6/task.s)

**✔ [Тесты с заданием файлов с использованием агументов командной строки](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/Tests.md)**

## Задание на 8 баллов:

**✔ Код на C, содержащий генератор случайных значений** 
* [main.c](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/ACS_C_Files/main.c)

**✔ Модифицированный код на ассемблере, содержащий генератор случайных значений и выбор типа ввода**
* [main.s](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/hw_moded_after_6/main.s)
* [task.s](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/hw_moded_after_6/task.s)
* [то же но с комментариями](https://github.com/ababism/ACS_HW_1/tree/main/ACS_HW_1/hw_comments_for_4)

**✔ Тестирование автоматически сгенерированных данных с замером времени**
* [Тесты](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/Tests.md)


### Итог:

Был реализован таймер замеряющий только задание из варианта. Повторяя решение для массиива из 100 элементов 100млн раз мы смогли протестировать среднее время выполнения (на случайных данных) и убедились, что уменьшили время работы на более 1 секунды.

## Задание на 9 баллов:
**✔ Отмечено и сделано в тестах**
* [Тесты](https://github.com/ababism/ACS_HW_1/blob/main/ACS_HW_1/Tests.md)
