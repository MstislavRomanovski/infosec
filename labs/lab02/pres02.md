---
## Front matter
lang: ru-RU
title: Лабораторная работа номер 2
author: Malkov Roman Sergeevich
date: 09.09.2024

## Formatting
toc: false
slide_level: 2
theme: metropolis
header-includes: 
 - \metroset{progressbar=frametitle,sectionpage=progressbar,numbering=fraction}
 - '\makeatletter'
 - '\beamer@ignorenonframefalse'
 - '\makeatother'
aspectratio: 43
section-titles: true
---

# Цель работы

Получение практических навыков работы в консоли с атрибутами файлов, 
закрепление теоретических основ дискреционного разграничения доступа в современных системах с открытым кодом на базе ОС Linux.

# Выполнение

Создаем новую учетную запись guest

![Создаем учетную запись](Screens/Screenshot_1.PNG){ #fig:001 width=70% height=70% }

# Выполнение

![Задаем новый пароль](Screens/Screenshot_2.PNG){ #fig:002 width=70% height=70% }

# Выполнение

![Переход в новую учетную запись](Screens/Screenshot_3.PNG){ #fig:003 width=70% height=70% }
 
# Выполнение

![Команды pwd,whoami,id,groups](Screens/Screenshot_4.PNG){ #fig:004 width=70% height=70% }

# Выполнение
 
![passwd](Screens/Screenshot_14.PNG){ #fig:005 width=70% height=70% }

# Выполнение

![passwd с grep](Screens/Screenshot_5.PNG){ #fig:006 width=70% height=70% }
 
# Выполнение

![ls -l /home/](Screens/Screenshot_6.PNG){ #fig:007 width=70% height=70% }

# Выполнение

![lsattr /home](Screens/Screenshot_7.PNG){ #fig:008 width=70% height=70% }
 
# Выполнение

![mkdir dir1](Screens/Screenshot_8.PNG){ #fig:009 width=70% height=70% }

# Выполнение

![ls -l |grep dir1](Screens/Screenshot_9.PNG){ #fig:010 width=70% height=70% }

# Выполнение

![lsattr |grep dir1](Screens/Screenshot_10.PNG){ #fig:011 width=70% height=70% }

# Выполнение

![chmod 000 dir1](Screens/Screenshot_11.PNG){ #fig:012 width=70% height=70% }
 
# Выполнение

![echo "test" > /home/guest/dir1/file1](Screens/Screenshot_12.PNG){ #fig:013 width=70% height=70% }

# Выполнение

![Проверяем создался ли файл](Screens/Screenshot_13.PNG){ #fig:014 width=70% height=70% }

# Выполнение

![Пример заполнения таблицы 2.1](Screens/Screenshot_15.PNG){ #fig:015 width=60% height=60% }


# Выполнение

![Пример заполнения таблицы 2.2](Screens/Screenshot_16.PNG){ #fig:016 width=60% height=60% }

# Заключение

Были получены навыки работы в консоли с атрибутами файлов, 
были закреплены теоретические основы дискреционного разграничения доступа в современных системах с открытым кодом на базе ОС Linux.