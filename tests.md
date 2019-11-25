# Тесты

## Тест на очень маленьких алфавитах

Мне интересно протестировать и изучить эффективность выбранных мною алгоритмов в задачах поисков подстроки с очень маленькими алфавиами.

Данный вид тестов важен в силу того, что алгоритмы поиска подстрок часто используются в биоинформатике для решения задачи "alignment problem".

Для тестов на маленький алгоритм возьму случайные тексты состоящие из 4 букв, которыми обычно обозначаются компоненты ДНК.

## Тест на работу с случайным текстом

Мне кажется что тест на работу со случайными текстами можно будет использовать как эталон для сравнения с результатами тестов на "человеческом тексте" и на квази случайном тексте.

## Тест на работу с "человесеским текстом"

Алгоритмы поиска подстрок используб в текстовых редакторах и прочих программах предоставлющих возможность поиска по тексту. Мне интересно узнать как хорошо работают алгоритмы на текстах написанных человеком по сравнению со случайным текстом и прочими квази случайными текстами.

Я хочу проверить гипотезу относитьено того, что часто повторяющиеся лексические конструкции присущие человеческому тексту и наличие квази регулярных разделительных пробелов окажут ощутимое влияние на производительность алгоритмов.

## Тест на работу с квазислучайным текстом

Я хочу сравнить работу алгоритмов на текстах, которые нельзя назвать человеческими, но в тоже время которые не являются полностью случайными.

Например:

- Тексты программ,
- Разные не текстовые документы в текстовом представлении.


## Тест на поиск подстроки в строке полностью состоящей из искомой подстроки

Пояснение:

Пусть искомая подстрока N = "AAA", а строка в которой происходит поиск H = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"

## Тест на адекватность

Думаю полезно добавить несколько тестов на адекватнось:

- поиск в пусой строке
- поиск пустой подстроки
- поиск подстроки находящейся в конце строки
- поиск строки находящейся в начале строки
- поиск подстроки в самой себе
- поиск подстроки в строке меньшей длины
- просто поиск подстроки
[//]: # (- просто поиск подстроки, но где-то есть emoji)

# Мета- тест

Бонусный тест ответом на который будет 42, а поиск будет связан с предложением "Проверяет, что когда луна в козероге,  дева в тельце, солнце в зените, а студент вдумчивао читает текст заглушки, то программа на таких входных данных корректно обрабатывает и выдает ответ 42."
