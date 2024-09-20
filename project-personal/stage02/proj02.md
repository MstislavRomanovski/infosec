---
## Front matter
title: "Индивидуальный проект. Отчёт о выполнении №2


Информационная безопасность"
subtitle: " Установка и DVWA"
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

Установка Damn Valnurable Web Application.

# Установка DVWA

Первым делом стоит ознакомиться с документацией в официальном репозитории DVWA в github, там содержится несколько инструкций по установке DVWA на разные платформы.
В нашем случае будет использован готовый скрипт предоставленный в репозитории DVWA.

![Ввод команды для установки DVWA](Screens/Screenshot_1.PNG){ #fig:001 width=60% height=60% }

После ввода команды начинается установка, просто следуем указаниям установщика.

![DVWA установка](Screens/Screenshot_2.PNG){ #fig:002 width=60% height=60% }

# Запуск DVWA

По завершении установки нам будет выдана ссылка, по которой осуществляется доступ к DVWA, а также логин и пароль.

![Получение доступа к DVWA](Screens/Screenshot_3.PNG){ #fig:003 width=60% height=60% }

Достаточно вставить ссылку в встроенные в Kali Linux браузер.

![DVWA после ввода ссылки](Screens/Screenshot_4.PNG){ #fig:004 width=60% height=60% }

# Пример уязвимости

Далее идет достаточно большое количество окон позволяющие отработать эксплуатацию уязвимостей.

![Пример уязвимости BruteForce](Screens/Screenshot_5.PNG){ #fig:005 width=60% height=60% }


# Уровени защиты DVWA

У DVWA есть уровни защиты, выбрать уровень защиты можно в окне DVWA Security.

![Окно DVWA Security](Screens/Screenshot_6.PNG){ #fig:006 width=60% height=60% }

# Заключение

Было установлено веб-приложение DVWA.