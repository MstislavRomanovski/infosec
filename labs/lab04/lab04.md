---
## Front matter
title: "Отчёт по лабораторной работе №4


Информационная безопасность"
subtitle: "Дискреционное разграничение прав в Linux. Расширенные атрибуты"
author: "Выполнил: Мальков Роман Сергеевич, 


НФИбд-02-21, 1032217048"



## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: Times New Roman
romanfont: Times New Roman
sansfont: Times New Roman
monofont: Times New Roman
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase,Scale=0.9
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Получение практических навыков работы в консоли с расширенными атрибутами файлов.

# Выполнение

Войдем в учетную запись guest

![Вход в учетную запись](Screens/Screenshot_1.PNG){ #fig:001 width=70% height=70% }

Определяем атрибуты файла

![Просмотр атрибутов](Screens/Screenshot_2.PNG){ #fig:002 width=70% height=70% }

Устанавливаем права для file1

![Установка прав для file1](Screens/Screenshot_3.PNG){ #fig:003 width=70% height=70% }

Пробуем установить атрибут от имени guest, в ответ получаем отказ в выполнении операции

![Установка атрибута от имени guest](Screens/Screenshot_4.PNG){ #fig:004 width=70% height=70% }
 
Установка от имени суперпользователя

![Установка атрибута от имени суперпользователя](Screens/Screenshot_5.PNG){ #fig:005 width=70% height=70% }

Просмотр установленных атрибутов от имени guest

![Просмотр атрибутов от имени guest](Screens/Screenshot_6.PNG){ #fig:006 width=70% height=70% }

Пробуем дозаписать текст в file1, проверяем удалось ли это сделать

![Дозапись в file1 и проверка](Screens/Screenshot_7.PNG){ #fig:007 width=70% height=70% }

Пробуем стереть и записать новую информацию в file1, переименовать файл, изменить права доступа

![Перезапись, прееименования, изменение прав](Screens/Screenshot_8.PNG){ #fig:008 width=70% height=70% }

Убираем атрибут от имени суперпользователя
 
![Удаление атрибута](Screens/Screenshot_9.PNG){ #fig:009 width=70% height=70% }

Выполняем все действия которые не удалось выполнить, по удалении атрибута, их выполнение должно стать возможным

![Выполнение неудавшихся действий](Screens/Screenshot_10.PNG){ #fig:010 width=70% height=70% }

Повторяем все шаги но с атрибутом i вместо a.

![Установка атрибута i](Screens/Screenshot_11.PNG){ #fig:011 width=70% height=70% }
 

![Выполнение всех шагов](Screens/Screenshot_12.PNG){ #fig:012 width=70% height=70% }


![Удаление атрибута i](Screens/Screenshot_13.PNG){ #fig:013 width=70% height=70% }

![Выполнение неудавшихся действий](Screens/Screenshot_14.PNG){ #fig:014 width=70% height=70% }

# Заключение

Были получены практические навыки работы в консоли с расширенными атрибутами файлов.