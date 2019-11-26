# Запуск программы

## Компиляция

>cmake .
make

## Выполнение

Чтобы запустить демо:
```
./string_search in_heysatack.txt in_needle.txt out.txt
```

Чтобы запустить тесты:
```
./test_target
```

## Формат входных данных

`in_heysatack.txt` содержит строку

`in_needle.txt` содержит подстроку

## Формат выходных данных
```
Legend: <some additional info and explanation>
Naive
<position>
Boyer Moore
<position>
Knut Morris Pratt
<position>
Rabin Karp
<position>
```
