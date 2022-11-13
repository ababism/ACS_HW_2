# ACS_HW_2
# Архитектуры вычислительных систем. ИДЗ № 2. Вариант 10 <br/> Киселев Иван БПИ217.

## Описание репозитория:


# Отсчет

## Задание на 4 балла:
**✔[Решение задачи на C](https://github.com/ababism/ACS_HW_2/tree/main/C_Files)**  (3 единицы комплиляции + прием аргументов командной строки для ввода с файла + генерация)

**✔ [Не модифицированный код на Assembly с комментариями](https://github.com/ababism/ACS_HW_2/tree/main/Commented_asm)**
<img width="537" alt="image" src="https://user-images.githubusercontent.com/111705295/201545529-32bea517-8dd2-4c26-bb94-c271002d2e0a.png">

**✔ [Модифицированный код на Assembly (убраны макросы)](https://github.com/ababism/ACS_HW_2/tree/main/Modded_asm)**

** [Список изменений](https://github.com/ababism/ACS_HW_2/tree/main/Modded_asm)**

**✔ [Тестирование программы](https://github.com/ababism/ACS_HW_2/tree/main/Tests)**

### Итог:

Все корректно работает, код был откомментрован максильно подробно (сразу на 9 баллов)

## Задание на 5 баллов:
**✔[Решение задачи на C](https://github.com/ababism/ACS_HW_2/tree/main/C_Files)** 

**✔ [Модифицированный код на Assembly](https://github.com/ababism/ACS_HW_2/tree/main/Modded_asm)**

**✔ [Комментарии и код на Assembly](https://github.com/ababism/ACS_HW_2/tree/main/Commented_asm)**
 
### Итог:

Весь код был прокомментирван, включая передачу параметров в функции (mov регистр для соотвествующего аргумента, значение аргумента) и использование переменных.

## Задание на 6 баллов:

**✔ [Модифицированный код на Assembly](https://github.com/ababism/ACS_HW_2/tree/main/Modded_asm)**

**✔ [Комментарии для регистров и код на Assembly](https://github.com/ababism/ACS_HW_2/tree/main/Commented_asm)**

### [Внесенные изменения](https://github.com/ababism/ACS_HW_2/tree/main/Modded_asm)
После измененений ассмемблер код уменьшился на 453 (было суммарно) - 407 (стало) = 46 строк

**✔ [Тестирование программы через консоль и генерацию](https://github.com/ababism/ACS_HW_2/tree/main/Tests)**

### Итог:

Выполен рефакторинг программы на ассемблере за счет максимального использования регистров процессора (в основном замены переменной итератора из стека на регист r14d/r15d). В ходе тестирования получены идентичные значения.

## Задание на 7 баллов:

**✔ [Код на C, содержащий 3 единицы компиляции](https://github.com/ababism/ACS_HW_2/tree/main/C_Files)** 

**✔ [Модифицированный код на ассемблере, содержащий 3 следующие единицы компиляции](https://github.com/ababism/ACS_HW_2/tree/main/Modded_asm)**

**✔ [Тесты с заданием файлов с использованием агументов командной строки](https://github.com/ababism/ACS_HW_2/tree/main/Tests)**

**✔ [Файлы для тестов](https://github.com/ababism/ACS_HW_2/tree/main/Files_for_test)**
** [Проведение тестов с этими файлами](https://github.com/ababism/ACS_HW_2/tree/main/Tests)**


## Задание на 8 баллов:

**✔ [Код на C, содержащий генератор случайных значений](https://github.com/ababism/ACS_HW_2/tree/main/C_Files)** 

**✔ [Модифицированный код на ассемблере, содержащий генератор случайных значений и выбор типа ввода](https://github.com/ababism/ACS_HW_2/tree/main/Modded_asm)**


**✔ Тестирование автоматически сгенерированных данных с замером времени**
* [Тесты](https://github.com/ababism/ACS_HW_2/tree/main/Tests)


### Итог:

Был реализован таймер замеряющий только задание из варианта. Повторяя решение для массиива из 100 элементов 100млн раз мы смогли протестировать среднее время выполнения (на случайных данных) и убедились, что уменьшили время работы на более 1 секунды.

## Задание на 9 баллов:
**✔ Отмечено и сделано в тестах**
* [Тесты](https://github.com/ababism/ACS_HW_2/tree/main/Tests)
